#include "fnd_rf433.h"
#include "tim.h"
#include "gpio.h"

uint64_t rf_cmd[10];
uint8_t cmd_idx = 0;

void fnd_rf433_handle_duration(uint32_t duration)
{
	static uint8_t rf_data_valid = 0;
	static uint8_t rf_data_idx = 0;
	static uint8_t rf_data[40];

	if (rf_data_valid == 0)
	{
		if (duration > 3500 && duration < 6500)
		{
			rf_data_valid = 1;
			rf_data_idx = 0;
		}
	}
	else
	{
		if (duration > 250 && duration < 350)
		{
			rf_data[rf_data_idx] = 0;
			rf_data_idx++;
		}
		else if (duration > 650 && duration < 750)
		{
			rf_data[rf_data_idx] = 1;
			rf_data_idx++;
		}
		else
		{
			rf_data_valid = 0;
		}

		if (rf_data_idx == 40)
		{
			rf_data_valid = 0;
			rf_cmd[cmd_idx] = 0;
			for (uint8_t i = 0; i < 40; i++)
			{
				if (rf_data[i] == 0)
				{
					rf_cmd[cmd_idx] = (rf_cmd[cmd_idx] << 1) & (uint64_t)0xFFFFFFFFFE;
				}
				else
				{
					rf_cmd[cmd_idx] = (rf_cmd[cmd_idx] << 1) | (uint64_t)0x01;
				}
			}
			cmd_idx = (cmd_idx + 1) % 10;
		}
	}
}

void fnd_rf433_signal_received(void)
{
	if (HAL_GPIO_ReadPin(RF_SIG_GPIO_Port, RF_SIG_Pin) == GPIO_PIN_SET)
	{
		htim3.Instance->CNT = 0;
		HAL_TIM_Base_Start(&htim3);
	}
	else
	{
		HAL_TIM_Base_Stop(&htim3);
		uint32_t duration = htim3.Instance->CNT;
		fnd_rf433_handle_duration(duration);
	}
}
