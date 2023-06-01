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
#include "stm32l4xx_hal.h"

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

void HAL_TIM_MspPostInit(TIM_HandleTypeDef *htim);

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define DOUT_CAM_S_Pin GPIO_PIN_14
#define DOUT_CAM_S_GPIO_Port GPIOC
#define DOUT_CAM_F_Pin GPIO_PIN_15
#define DOUT_CAM_F_GPIO_Port GPIOC
#define ANIN_BAT__Pin GPIO_PIN_1
#define ANIN_BAT__GPIO_Port GPIOA
#define DO_BAT_ENA_Pin GPIO_PIN_2
#define DO_BAT_ENA_GPIO_Port GPIOA
#define LED1_Pin GPIO_PIN_3
#define LED1_GPIO_Port GPIOA
#define LED2_Pin GPIO_PIN_4
#define LED2_GPIO_Port GPIOA
#define I2C1_E0_Pin GPIO_PIN_5
#define I2C1_E0_GPIO_Port GPIOA
#define I2C1_E1_Pin GPIO_PIN_6
#define I2C1_E1_GPIO_Port GPIOA
#define I2C1_E2_Pin GPIO_PIN_7
#define I2C1_E2_GPIO_Port GPIOA
#define PIR_TRIG_Pin GPIO_PIN_0
#define PIR_TRIG_GPIO_Port GPIOB
#define I2C1_WP_Pin GPIO_PIN_8
#define I2C1_WP_GPIO_Port GPIOA
#define BTN1_Pin GPIO_PIN_15
#define BTN1_GPIO_Port GPIOA
#define DIP4_Pin GPIO_PIN_4
#define DIP4_GPIO_Port GPIOB
#define DIP3_Pin GPIO_PIN_5
#define DIP3_GPIO_Port GPIOB
#define DIP2_Pin GPIO_PIN_6
#define DIP2_GPIO_Port GPIOB
#define DIP1_Pin GPIO_PIN_7
#define DIP1_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
