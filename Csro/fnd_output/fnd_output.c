#include "fnd_output.h"
#include "gpio.h"

#define RELAY_NUMBER 12

GPIO_TypeDef *relay_port[RELAY_NUMBER] = {RLY_UP1_GPIO_Port, RLY_DN1_GPIO_Port,
                                          RLY_UP2_GPIO_Port, RLY_DN2_GPIO_Port,
                                          RLY_UP3_GPIO_Port, RLY_DN3_GPIO_Port,
                                          RLY_UP4_GPIO_Port, RLY_DN4_GPIO_Port,
                                          RLY_UP5_GPIO_Port, RLY_DN5_GPIO_Port,
                                          RLY_UP6_GPIO_Port, RLY_DN6_GPIO_Port};
uint16_t relay_pin[RELAY_NUMBER] = {RLY_UP1_Pin, RLY_DN1_Pin,
                                    RLY_UP2_Pin, RLY_DN2_Pin,
                                    RLY_UP3_Pin, RLY_DN3_Pin,
                                    RLY_UP4_Pin, RLY_DN4_Pin,
                                    RLY_UP5_Pin, RLY_DN5_Pin,
                                    RLY_UP6_Pin, RLY_DN6_Pin};

void fnd_output_gpio_write_relays(int16_t *values)
{
    for (uint8_t i = 0; i < RELAY_NUMBER; i++)
    {
        HAL_GPIO_WritePin(relay_port[i], relay_pin[i], (values[i] == 0) ? GPIO_PIN_RESET : GPIO_PIN_SET);
    }
}

void fnd_output_update_value(void)
{
    // fnd_output_gpio_write_relays(&sys_regs.inputs[30]);
}
