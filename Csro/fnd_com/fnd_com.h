#ifndef FND_COM_H_
#define FND_COM_H_

#include "stm32f1xx_hal.h"
#include "mb_slave.h"
#include "mb_master.h"

extern modbus_slave slaves[2];

void fnd_com_modbus_rtu_init(void);
void fnd_com_modbus_rtu_uart_idle_irq(UART_HandleTypeDef *huart);
void fnd_com_modbus_rtu_slave1_wait(void);
void fnd_com_modbus_rtu_slave2_wait(void);

#endif
