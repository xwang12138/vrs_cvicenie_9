/**
  ******************************************************************************
  * @file    gpio.c
  * @brief   This file provides code for the configuration
  *          of all used GPIO pins.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2021 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under BSD 3-Clause license,
  * the "License"; You may not use this file except in compliance with the
  * License. You may obtain a copy of the License at:
  *                        opensource.org/licenses/BSD-3-Clause
  *
  ******************************************************************************
  */

/* Includes ------------------------------------------------------------------*/
#include "gpio.h"

/* USER CODE BEGIN 0 */

/* USER CODE END 0 */

/*----------------------------------------------------------------------------*/
/* Configure GPIO                                                             */
/*----------------------------------------------------------------------------*/
/* USER CODE BEGIN 1 */

/* USER CODE END 1 */

/** Configure pins
*/
void LED_ON(uint8_t num)
{
	switch(num)
	{
	case 0 :
		GPIOA_ODR_REG=0x0000090B;
		GPIOB_ODR_REG=0x00000020;
		break;
	case 1 :
		GPIOA_ODR_REG=0x00000101;
		GPIOB_ODR_REG=0x00;
		break;
	case 2 :
		GPIOA_ODR_REG=0x00000803;
		GPIOB_ODR_REG=0x00000030;
		break;
	case 3 :
		GPIOA_ODR_REG=0x00000103;
		GPIOB_ODR_REG=0x00000030;
		break;
	case 4 :
		GPIOA_ODR_REG=0x00000109;
		GPIOB_ODR_REG=0x00000010;
		break;
	case 5 :
		GPIOA_ODR_REG=0x0000010A;
		GPIOB_ODR_REG=0x00000030;
		break;
	case 6 :
		GPIOA_ODR_REG=0x0000090A;
		GPIOB_ODR_REG=0x00000030;
		break;
	case 7 :
		GPIOA_ODR_REG=0x00000103;
		GPIOB_ODR_REG=0x00;
		break;
	case 8 :
		GPIOA_ODR_REG=0x0000090B;
		GPIOB_ODR_REG=0x00000030;
		break;
	case 9 :
		GPIOA_ODR_REG=0x0000010B;
		GPIOB_ODR_REG=0x00000030;
		break;
	}
	return;
}
void LED2_ON(uint8_t num)
{
	switch(num)
	{
	case 0 :
		GPIOA_ODR_REG=0x0000090B;
		GPIOB_ODR_REG=0x00000022;
		break;
	case 1 :
		GPIOA_ODR_REG=0x00000101;
		GPIOB_ODR_REG=0x00000002;
		break;
	case 2 :
		GPIOA_ODR_REG=0x00000803;
		GPIOB_ODR_REG=0x00000032;
		break;
	case 3 :
		GPIOA_ODR_REG=0x00000103;
		GPIOB_ODR_REG=0x00000032;
		break;
	case 4 :
		GPIOA_ODR_REG=0x00000109;
		GPIOB_ODR_REG=0x00000012;
		break;
	case 5 :
		GPIOA_ODR_REG=0x0000010A;
		GPIOB_ODR_REG=0x00000032;
		break;
	case 6 :
		GPIOA_ODR_REG=0x0000090A;
		GPIOB_ODR_REG=0x00000032;
		break;
	case 7 :
		GPIOA_ODR_REG=0x00000103;
		GPIOB_ODR_REG=0x00000002;
		break;
	case 8 :
		GPIOA_ODR_REG=0x0000090B;
		GPIOB_ODR_REG=0x00000030;
		break;
	case 9 :
		GPIOA_ODR_REG=0x0000010B;
		GPIOB_ODR_REG=0x00000032;
		break;
	}
	return;
}
void MX_GPIO_Init(void)
{

  LL_EXTI_InitTypeDef EXTI_InitStruct = {0};
  LL_GPIO_InitTypeDef GPIO_InitStruct = {0};

  /* GPIO Ports Clock Enable */
  LL_AHB1_GRP1_EnableClock(LL_AHB1_GRP1_PERIPH_GPIOA);
  LL_AHB1_GRP1_EnableClock(LL_AHB1_GRP1_PERIPH_GPIOB);

  /**/
  LL_GPIO_ResetOutputPin(GPIOA, LL_GPIO_PIN_0|LL_GPIO_PIN_1|LL_GPIO_PIN_2|LL_GPIO_PIN_3
                          |LL_GPIO_PIN_4|LL_GPIO_PIN_7|LL_GPIO_PIN_11|LL_GPIO_PIN_12);

  /**/
  LL_GPIO_ResetOutputPin(GPIOB, LL_GPIO_PIN_0|LL_GPIO_PIN_1|LL_GPIO_PIN_4|LL_GPIO_PIN_5);

  /**/
  GPIO_InitStruct.Pin = LL_GPIO_PIN_0|LL_GPIO_PIN_1|LL_GPIO_PIN_2|LL_GPIO_PIN_3
                          |LL_GPIO_PIN_4|LL_GPIO_PIN_7|LL_GPIO_PIN_11|LL_GPIO_PIN_12;
  GPIO_InitStruct.Mode = LL_GPIO_MODE_OUTPUT;
  GPIO_InitStruct.Speed = LL_GPIO_SPEED_FREQ_LOW;
  GPIO_InitStruct.OutputType = LL_GPIO_OUTPUT_PUSHPULL;
  GPIO_InitStruct.Pull = LL_GPIO_PULL_UP;
  LL_GPIO_Init(GPIOA, &GPIO_InitStruct);

  /**/
  GPIO_InitStruct.Pin = LL_GPIO_PIN_0|LL_GPIO_PIN_1|LL_GPIO_PIN_4|LL_GPIO_PIN_5;
  GPIO_InitStruct.Mode = LL_GPIO_MODE_OUTPUT;
  GPIO_InitStruct.Speed = LL_GPIO_SPEED_FREQ_LOW;
  GPIO_InitStruct.OutputType = LL_GPIO_OUTPUT_PUSHPULL;
  GPIO_InitStruct.Pull = LL_GPIO_PULL_UP;
  LL_GPIO_Init(GPIOB, &GPIO_InitStruct);

  /**/
  LL_SYSCFG_SetEXTISource(LL_SYSCFG_EXTI_PORTB, LL_SYSCFG_EXTI_LINE3);

  /**/
  LL_GPIO_SetPinPull(GPIOB, LL_GPIO_PIN_3, LL_GPIO_PULL_DOWN);

  /**/
  LL_GPIO_SetPinMode(GPIOB, LL_GPIO_PIN_3, LL_GPIO_MODE_INPUT);

  /**/
  EXTI_InitStruct.Line_0_31 = LL_EXTI_LINE_3;
  EXTI_InitStruct.Line_32_63 = LL_EXTI_LINE_NONE;
  EXTI_InitStruct.LineCommand = ENABLE;
  EXTI_InitStruct.Mode = LL_EXTI_MODE_IT;
  EXTI_InitStruct.Trigger = LL_EXTI_TRIGGER_RISING;
  LL_EXTI_Init(&EXTI_InitStruct);

}

/* USER CODE BEGIN 2 */

/* USER CODE END 2 */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
