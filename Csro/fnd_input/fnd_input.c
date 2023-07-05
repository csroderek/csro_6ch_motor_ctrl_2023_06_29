#include "fnd_input.h"
#include "gpio.h"

#define USER_KEY_NUMBER 3
#define USER_DI_NUMBER 16

GPIO_TypeDef *key_port[USER_KEY_NUMBER] = {KEY1_GPIO_Port,
                                           KEY2_GPIO_Port,
                                           KEY3_GPIO_Port};
uint16_t key_pin[USER_KEY_NUMBER] = {KEY1_Pin,
                                     KEY2_Pin,
                                     KEY3_Pin};

GPIO_TypeDef *di_port[USER_DI_NUMBER] = {DI_UP1_GPIO_Port, DI_DN1_GPIO_Port,
                                         DI_UP2_GPIO_Port, DI_DN2_GPIO_Port,
                                         DI_UP3_GPIO_Port, DI_DN3_GPIO_Port,
                                         DI_UP4_GPIO_Port, DI_DN4_GPIO_Port,
                                         DI_UP5_GPIO_Port, DI_DN5_GPIO_Port,
                                         DI_UP6_GPIO_Port, DI_DN6_GPIO_Port,
                                         DI_UP7_GPIO_Port, DI_DN7_GPIO_Port,
                                         DI_UP8_GPIO_Port, DI_DN8_GPIO_Port};
uint16_t di_pin[USER_DI_NUMBER] = {DI_UP1_Pin, DI_DN1_Pin,
                                   DI_UP2_Pin, DI_DN2_Pin,
                                   DI_UP3_Pin, DI_DN3_Pin,
                                   DI_UP4_Pin, DI_DN4_Pin,
                                   DI_UP5_Pin, DI_DN5_Pin,
                                   DI_UP6_Pin, DI_DN6_Pin,
                                   DI_UP7_Pin, DI_DN7_Pin,
                                   DI_UP8_Pin, DI_DN8_Pin};

void fnd_input_gpio_read_user_keys(int16_t *values)
{
    for (uint8_t i = 0; i < USER_KEY_NUMBER; i++)
    {
        values[i] = (HAL_GPIO_ReadPin(key_port[i], key_pin[i]) == GPIO_PIN_SET) ? 1 : 0;
    }
}

void fnd_input_gpio_read_user_di(int16_t *values)
{
    for (uint8_t i = 0; i < USER_DI_NUMBER; i++)
    {
        values[i] = (HAL_GPIO_ReadPin(di_port[i], di_pin[i]) == GPIO_PIN_SET) ? 1 : 0;
    }
}

void fnd_input_update_value(void)
{
    int16_t di_result[16];
    fnd_input_gpio_read_user_di(di_result);
    for (uint8_t i = 0; i < 8; i++)
    {
        // panels[i].up_btn = di_result[2 * i + 0];
        // panels[i].dn_btn = di_result[2 * i + 1];
    }

    int16_t keys_result[3];
    fnd_input_gpio_read_user_keys(keys_result);
    for (uint8_t i = 0; i < 3; i++)
    {
        // sys_regs.inputs[22 - i] = keys_result[i];
    }
}
