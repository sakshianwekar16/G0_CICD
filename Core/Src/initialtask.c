/*
 * initialtask.c
 *
 *  Created on: Oct 18, 2024
 *      Author: pc
 */
#include"sharedData.h"
#include"initialconfig.h"
#include"structs.h"
#include"dma.h"
#include"adc.h"
#include"usart.h"
#include"tim.h"
#include"main.h"

void InitalConfig(void) {

	FixedValue.stateMachine_state = SMS_INITIAL;
	MotorRun.runDirectionFlag = REVERSE;
	//set timer 3 In xor Mode And Enable Input Capture interrupt and Time Base interrupt
//	LL_TIM_IC_SetFilter(TIM3, LL_TIM_CHANNEL_CH1, (uint32_t) (12) << 20);
//	LL_TIM_SetPrescaler(TIM3, 146);
//	LL_TIM_GenerateEvent_UPDATE(TIM3);
//	WRITE_REG(TIM3->SR, 0);
//	LL_TIM_SetUpdateSource(TIM3, LL_TIM_UPDATESOURCE_COUNTER);
//	LL_TIM_EnableIT_CC1(TIM3);
//	LL_TIM_EnableIT_UPDATE(TIM3);
//	LL_TIM_SetCounter(TIM3, 0);
//	LL_TIM_CC_EnableChannel(TIM3, LL_TIM_CHANNEL_CH1);
//	LL_TIM_EnableCounter(TIM3);

	//enable ADC Calibration
	HAL_ADCEx_Calibration_Start(&hadc1);
	HAL_ADC_Start_DMA(&hadc1, (uint32_t*) HostVar.rawADCValues, 4);

	HAL_TIM_Base_Start_IT(&htim14);
	HAL_TIM_Base_Start_IT(&htim17);
	//Start Display
	HAL_UART_Receive_IT(&huart1, Communication.rxBuf, DISPLAY_RXBUF_SIZE);

}


