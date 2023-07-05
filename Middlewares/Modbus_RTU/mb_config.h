#ifndef __MB_CONFIG_H
#define __MB_CONFIG_H

#include "stm32f1xx_hal.h"
#include "cmsis_os.h"

#define MODBUS_FC_READ_COILS 0x01
#define MODBUS_FC_READ_DISCRETE_INPUTS 0x02
#define MODBUS_FC_READ_HOLDING_REGISTERS 0x03
#define MODBUS_FC_READ_INPUT_REGISTERS 0x04
#define MODBUS_FC_WRITE_SINGLE_COIL 0x05
#define MODBUS_FC_WRITE_SINGLE_REGISTER 0x06
#define MODBUS_FC_READ_EXCEPTION_STATUS 0x07
#define MODBUS_FC_WRITE_MULTIPLE_COILS 0x0F
#define MODBUS_FC_WRITE_MULTIPLE_REGISTERS 0x10
#define MODBUS_FC_REPORT_SLAVE_ID 0x11
#define MODBUS_FC_MASK_WRITE_REGISTER 0x16
#define MODBUS_FC_WRITE_AND_READ_REGISTERS 0x17

#define MODBUS_REG_LENGTH 256

typedef struct
{
    uint8_t discs[16];
    uint8_t coils[16];
    int16_t inputs[64];
    int16_t holdings[128];
} modbus_regs;

typedef enum
{
    rx = 0,
    tx = 1
} uart_tx_rx_enum;

typedef struct
{
    UART_HandleTypeDef *uart;
    GPIO_TypeDef *gpio_port;
    uint16_t gpio_pin;
} modbus_port;

#endif
