/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2019 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under BSD 3-Clause license,
  * the "License"; You may not use this file except in compliance with the
  * License. You may obtain a copy of the License at:
  *                        opensource.org/licenses/BSD-3-Clause
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

#include "stm32f3xx_ll_i2c.h"
#include "stm32f3xx_ll_rcc.h"
#include "stm32f3xx_ll_bus.h"
#include "stm32f3xx_ll_system.h"
#include "stm32f3xx_ll_exti.h"
#include "stm32f3xx_ll_cortex.h"
#include "stm32f3xx_ll_utils.h"
#include "stm32f3xx_ll_pwr.h"
#include "stm32f3xx_ll_dma.h"
#include "stm32f3xx_ll_gpio.h"

#if defined(USE_FULL_ASSERT)
#include "stm32_assert.h"
#endif /* USE_FULL_ASSERT */

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
#ifndef NVIC_PRIORITYGROUP_0
#define NVIC_PRIORITYGROUP_0         ((uint32_t)0x00000007) /*!< 0 bit  for pre-emption priority,
                                                                 4 bits for subpriority */
#define NVIC_PRIORITYGROUP_1         ((uint32_t)0x00000006) /*!< 1 bit  for pre-emption priority,
                                                                 3 bits for subpriority */
#define NVIC_PRIORITYGROUP_2         ((uint32_t)0x00000005) /*!< 2 bits for pre-emption priority,
                                                                 2 bits for subpriority */
#define NVIC_PRIORITYGROUP_3         ((uint32_t)0x00000004) /*!< 3 bits for pre-emption priority,
                                                                 1 bit  for subpriority */
#define NVIC_PRIORITYGROUP_4         ((uint32_t)0x00000003) /*!< 4 bits for pre-emption priority,
                                                                 0 bit  for subpriority */
#endif
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */
//GPIOA peripheral base address
#define	GPIOA_BASE_ADDR			(uint32_t)(0x48000000U)

#define	GPIOA_MODER_REG			*(uint32_t *)(GPIOA_BASE_ADDR + 0x00U)
//OTYPER register
#define	GPIOA_OTYPER_REG		*(uint32_t *)(GPIOA_BASE_ADDR + 0x04U)
//OSPEEDER register
#define GPIOA_OSPEEDER_REG		*(uint32_t *)(GPIOA_BASE_ADDR + 0x08U)
//PUPDR register
#define GPIOA_PUPDR_REG			*(uint32_t *)(GPIOA_BASE_ADDR + 0x0CU)
//IDR register
#define GPIOA_IDR_REG			*(uint32_t *)(GPIOA_BASE_ADDR + 0x10U)
//ODR register
#define GPIOA_ODR_REG			*(uint32_t *)(GPIOA_BASE_ADDR + 0x14U)
//BSRR register
#define GPIOA_BSRR_REG			*(uint32_t *)(GPIOA_BASE_ADDR + 0x18U)
//BRR register
#define GPIOA_BRR_REG			*(uint32_t *)(GPIOA_BASE_ADDR + 0x28U)

//GPIOB peripheral base address
#define	GPIOB_BASE_ADDR			(uint32_t)(0x48000400U)
//MODER register
#define	GPIOB_MODER_REG			*(uint32_t *)(GPIOB_BASE_ADDR + 0x00U)
//OTYPER register
#define	GPIOB_OTYPER_REG		*(uint32_t *)(GPIOB_BASE_ADDR + 0x04U)
//OSPEEDER register
#define GPIOB_OSPEEDER_REG		*(uint32_t *)(GPIOB_BASE_ADDR + 0x08U)
//PUPDR register
#define GPIOB_PUPDR_REG			*(uint32_t *)(GPIOB_BASE_ADDR + 0x0CU)
//IDR register
#define GPIOB_IDR_REG			*(uint32_t *)(GPIOB_BASE_ADDR + 0x10U)
//ODR register
#define GPIOB_ODR_REG			*(uint32_t *)(GPIOB_BASE_ADDR + 0x14U)
//BSRR register
#define GPIOB_BSRR_REG			*(uint32_t *)(GPIOB_BASE_ADDR + 0x18U)
//BRR register
#define GPIOB_BRR_REG			*(uint32_t *)(GPIOB_BASE_ADDR + 0x28U)

//RCC base address
#define	RCC_BASE_ADDR			(uint32_t)(0x40021000U)
//AHBEN register
#define	RCC_AHBENR_REG			*((volatile uint32_t *) (uint32_t)(RCC_BASE_ADDR + 0x00000014U))


#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
