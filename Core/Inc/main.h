/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2024 STMicroelectronics.
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
#include "stm32g0xx_hal.h"

#include "stm32g0xx_ll_tim.h"
#include "stm32g0xx_ll_bus.h"
#include "stm32g0xx_ll_cortex.h"
#include "stm32g0xx_ll_rcc.h"
#include "stm32g0xx_ll_system.h"
#include "stm32g0xx_ll_utils.h"
#include "stm32g0xx_ll_pwr.h"
#include "stm32g0xx_ll_gpio.h"
#include "stm32g0xx_ll_dma.h"

#include "stm32g0xx_ll_exti.h"

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
#define VSENSE_Pin GPIO_PIN_0
#define VSENSE_GPIO_Port GPIOA
#define PAS_Pin GPIO_PIN_2
#define PAS_GPIO_Port GPIOA
#define PAS_EXTI_IRQn EXTI2_3_IRQn
#define THROTTLE_Pin GPIO_PIN_3
#define THROTTLE_GPIO_Port GPIOA
#define ISENSE_Pin GPIO_PIN_4
#define ISENSE_GPIO_Port GPIOA
#define VW_Pin GPIO_PIN_6
#define VW_GPIO_Port GPIOA
#define HW_Pin GPIO_PIN_0
#define HW_GPIO_Port GPIOB
#define VV_Pin GPIO_PIN_1
#define VV_GPIO_Port GPIOB
#define F_R_Pin GPIO_PIN_2
#define F_R_GPIO_Port GPIOB
#define VU_Pin GPIO_PIN_10
#define VU_GPIO_Port GPIOB
#define Buzzer_Pin GPIO_PIN_11
#define Buzzer_GPIO_Port GPIOB
#define BRAKE_Pin GPIO_PIN_12
#define BRAKE_GPIO_Port GPIOB
#define MOTOR_SPD_Pin GPIO_PIN_3
#define MOTOR_SPD_GPIO_Port GPIOB
#define MOTOR_SPD_EXTI_IRQn EXTI2_3_IRQn
#define HU_Pin GPIO_PIN_4
#define HU_GPIO_Port GPIOB
#define HV_Pin GPIO_PIN_5
#define HV_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
