/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2023 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f1xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define LED_DATA_Pin GPIO_PIN_0
#define LED_DATA_GPIO_Port GPIOA
#define EN2_Pin GPIO_PIN_1
#define EN2_GPIO_Port GPIOA
#define RLY_UP4_Pin GPIO_PIN_4
#define RLY_UP4_GPIO_Port GPIOA
#define RLY_DN4_Pin GPIO_PIN_5
#define RLY_DN4_GPIO_Port GPIOA
#define RLY_UP5_Pin GPIO_PIN_6
#define RLY_UP5_GPIO_Port GPIOA
#define RLY_DN5_Pin GPIO_PIN_7
#define RLY_DN5_GPIO_Port GPIOA
#define RLY_UP6_Pin GPIO_PIN_4
#define RLY_UP6_GPIO_Port GPIOC
#define RLY_DN6_Pin GPIO_PIN_5
#define RLY_DN6_GPIO_Port GPIOC
#define RF_SIG_Pin GPIO_PIN_0
#define RF_SIG_GPIO_Port GPIOB
#define RF_SIG_EXTI_IRQn EXTI0_IRQn
#define KEY3_Pin GPIO_PIN_1
#define KEY3_GPIO_Port GPIOB
#define KEY2_Pin GPIO_PIN_2
#define KEY2_GPIO_Port GPIOB
#define KEY1_Pin GPIO_PIN_10
#define KEY1_GPIO_Port GPIOB
#define DI_UP6_Pin GPIO_PIN_11
#define DI_UP6_GPIO_Port GPIOB
#define DI_DN6_Pin GPIO_PIN_12
#define DI_DN6_GPIO_Port GPIOB
#define DI_UP5_Pin GPIO_PIN_13
#define DI_UP5_GPIO_Port GPIOB
#define DI_DN5_Pin GPIO_PIN_14
#define DI_DN5_GPIO_Port GPIOB
#define DI_UP4_Pin GPIO_PIN_15
#define DI_UP4_GPIO_Port GPIOB
#define DI_DN4_Pin GPIO_PIN_6
#define DI_DN4_GPIO_Port GPIOC
#define DI_UP3_Pin GPIO_PIN_7
#define DI_UP3_GPIO_Port GPIOC
#define DI_DN3_Pin GPIO_PIN_8
#define DI_DN3_GPIO_Port GPIOC
#define DI_UP2_Pin GPIO_PIN_9
#define DI_UP2_GPIO_Port GPIOC
#define EN1_Pin GPIO_PIN_8
#define EN1_GPIO_Port GPIOA
#define DI_DN2_Pin GPIO_PIN_11
#define DI_DN2_GPIO_Port GPIOA
#define DI_UP1_Pin GPIO_PIN_12
#define DI_UP1_GPIO_Port GPIOA
#define SWDIO_Pin GPIO_PIN_13
#define SWDIO_GPIO_Port GPIOA
#define SWCLK_Pin GPIO_PIN_14
#define SWCLK_GPIO_Port GPIOA
#define DI_DN1_Pin GPIO_PIN_15
#define DI_DN1_GPIO_Port GPIOA
#define DI_UP7_Pin GPIO_PIN_10
#define DI_UP7_GPIO_Port GPIOC
#define DI_DN7_Pin GPIO_PIN_11
#define DI_DN7_GPIO_Port GPIOC
#define DI_UP8_Pin GPIO_PIN_12
#define DI_UP8_GPIO_Port GPIOC
#define DI_DN8_Pin GPIO_PIN_2
#define DI_DN8_GPIO_Port GPIOD
#define RLY_DN3_Pin GPIO_PIN_3
#define RLY_DN3_GPIO_Port GPIOB
#define RLY_UP3_Pin GPIO_PIN_4
#define RLY_UP3_GPIO_Port GPIOB
#define RLY_DN2_Pin GPIO_PIN_5
#define RLY_DN2_GPIO_Port GPIOB
#define RLY_UP2_Pin GPIO_PIN_6
#define RLY_UP2_GPIO_Port GPIOB
#define RLY_DN1_Pin GPIO_PIN_7
#define RLY_DN1_GPIO_Port GPIOB
#define RLY_UP1_Pin GPIO_PIN_8
#define RLY_UP1_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
