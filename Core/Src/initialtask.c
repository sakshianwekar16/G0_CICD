/*
 * initialtask.c
 *
 *  Created on: Oct 18, 2024
 *      Author: pc
 */
#include <initialconfig.h>
#include <sharedData.h>
#include"structs.h"
#include"dma.h"
#include"adc.h"
#include"usart.h"
#include"tim.h"
#include"main.h"

void InitalConfig(void) {

	ControlVals.stateMachine_state = SMS_INITIAL;
	MotorRun.runDirectionFlag = FORWARD;
//	CruiseMode.flags.isCruising = 1U;
	//set timer 3 In xor Mode And Enable Input Capture interrupt and Time Base interrupt
	LL_TIM_IC_SetFilter(TIM3, LL_TIM_CHANNEL_CH1, (uint32_t) (12) << 20);
	LL_TIM_SetPrescaler(TIM3, 146);
	LL_TIM_GenerateEvent_UPDATE(TIM3);
	WRITE_REG(TIM3->SR, 0);
	LL_TIM_SetUpdateSource(TIM3, LL_TIM_UPDATESOURCE_COUNTER);
	LL_TIM_EnableIT_CC1(TIM3);
	LL_TIM_EnableIT_UPDATE(TIM3);
	LL_TIM_SetCounter(TIM3, 0);
	LL_TIM_CC_EnableChannel(TIM3, LL_TIM_CHANNEL_CH1);
	LL_TIM_EnableCounter(TIM3);
	initialconfiguration();
	HAL_TIM_Base_Start_IT(&htim17);
	//enable ADC Calibration
	HAL_ADCEx_Calibration_Start(&hadc1);
	HAL_ADC_Start_DMA(&hadc1, HostVar.rawADCValues, 4);

	// Add DMC overrides here
	FixedValue.voltage_calibrationFactor = 1510;// for B4 hardware
	FixedValue.controlPI.speedPI_ki_highRPM = 10;
	FixedValue.controlPI.speedPI_ki_lowRPM = 10;
	// till here
	HAL_TIM_Base_Start_IT(&htim14);

	//Start Display/
	HAL_UART_Receive_IT(&huart1, Communication.rxBuf, DISPLAY_RXBUF_SIZE);

}


