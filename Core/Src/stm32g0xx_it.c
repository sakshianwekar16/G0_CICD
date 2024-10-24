/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file    stm32g0xx_it.c
  * @brief   Interrupt Service Routines.
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

/* Includes ------------------------------------------------------------------*/
#include "main.h"
#include "stm32g0xx_it.h"
/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */
#include "taskhandler.h"
#include "statemachine.h"
#include "SVM.h"
#include "sharedData.h"
#include"initialconfig.h"
#include "motor.h"
#include "Display.h"
#include "PedalAssist.h"
#include"cruisecontrol.h"
#include "brake.h"
#include"define.h"
#include "SWS.h"
#include"measurement.h"
#include"controlLoop.h"
#include"main.h"
#include"structs.h"
#include"string.h"
#include"initialtask.h"
/* USER CODE END Includes */

/* Private typedef -----------------------------------------------------------*/
/* USER CODE BEGIN TD */

/* USER CODE END TD */

/* Private define ------------------------------------------------------------*/
/* USER CODE BEGIN PD */

/* USER CODE END PD */

/* Private macro -------------------------------------------------------------*/
/* USER CODE BEGIN PM */

/* USER CODE END PM */

/* Private variables ---------------------------------------------------------*/
/* USER CODE BEGIN PV */
HOST_VAR_t HostVar;
COMMUNICATION_VAL_t Communication;

/* USER CODE END PV */

/* Private function prototypes -----------------------------------------------*/
/* USER CODE BEGIN PFP */

/* USER CODE END PFP */

/* Private user code ---------------------------------------------------------*/
/* USER CODE BEGIN 0 */

/* USER CODE END 0 */

/* External variables --------------------------------------------------------*/
extern DMA_HandleTypeDef hdma_adc1;
extern ADC_HandleTypeDef hadc1;
extern TIM_HandleTypeDef htim1;
extern TIM_HandleTypeDef htim14;
extern TIM_HandleTypeDef htim17;
extern UART_HandleTypeDef huart1;
/* USER CODE BEGIN EV */

/* USER CODE END EV */

/******************************************************************************/
/*           Cortex-M0+ Processor Interruption and Exception Handlers          */
/******************************************************************************/
/**
  * @brief This function handles Non maskable interrupt.
  */
void NMI_Handler(void)
{
  /* USER CODE BEGIN NonMaskableInt_IRQn 0 */

  /* USER CODE END NonMaskableInt_IRQn 0 */
  /* USER CODE BEGIN NonMaskableInt_IRQn 1 */
   while (1)
  {
  }
  /* USER CODE END NonMaskableInt_IRQn 1 */
}

/**
  * @brief This function handles Hard fault interrupt.
  */
void HardFault_Handler(void)
{
  /* USER CODE BEGIN HardFault_IRQn 0 */

  /* USER CODE END HardFault_IRQn 0 */
  while (1)
  {
    /* USER CODE BEGIN W1_HardFault_IRQn 0 */
    /* USER CODE END W1_HardFault_IRQn 0 */
  }
}

/**
  * @brief This function handles System service call via SWI instruction.
  */
void SVC_Handler(void)
{
  /* USER CODE BEGIN SVC_IRQn 0 */

  /* USER CODE END SVC_IRQn 0 */
  /* USER CODE BEGIN SVC_IRQn 1 */

  /* USER CODE END SVC_IRQn 1 */
}

/**
  * @brief This function handles Pendable request for system service.
  */
void PendSV_Handler(void)
{
  /* USER CODE BEGIN PendSV_IRQn 0 */

  /* USER CODE END PendSV_IRQn 0 */
  /* USER CODE BEGIN PendSV_IRQn 1 */

  /* USER CODE END PendSV_IRQn 1 */
}

/**
  * @brief This function handles System tick timer.
  */
void SysTick_Handler(void)
{
  /* USER CODE BEGIN SysTick_IRQn 0 */

  /* USER CODE END SysTick_IRQn 0 */
  HAL_IncTick();
  /* USER CODE BEGIN SysTick_IRQn 1 */

  /* USER CODE END SysTick_IRQn 1 */
}

/******************************************************************************/
/* STM32G0xx Peripheral Interrupt Handlers                                    */
/* Add here the Interrupt Handlers for the used peripherals.                  */
/* For the available peripheral interrupt handler names,                      */
/* please refer to the startup file (startup_stm32g0xx.s).                    */
/******************************************************************************/

/**
  * @brief This function handles EXTI line 2 and line 3 interrupts.
  */
void EXTI2_3_IRQHandler(void)
{
  /* USER CODE BEGIN EXTI2_3_IRQn 0 */

  /* USER CODE END EXTI2_3_IRQn 0 */
  HAL_GPIO_EXTI_IRQHandler(PAS_Pin);
  HAL_GPIO_EXTI_IRQHandler(MOTOR_SPD_Pin);
  /* USER CODE BEGIN EXTI2_3_IRQn 1 */

  /* USER CODE END EXTI2_3_IRQn 1 */
}

/**
  * @brief This function handles DMA1 channel 1 interrupt.
  */
void DMA1_Channel1_IRQHandler(void)
{
  /* USER CODE BEGIN DMA1_Channel1_IRQn 0 */

  /* USER CODE END DMA1_Channel1_IRQn 0 */
  HAL_DMA_IRQHandler(&hdma_adc1);
  /* USER CODE BEGIN DMA1_Channel1_IRQn 1 */

  /* USER CODE END DMA1_Channel1_IRQn 1 */
}

/**
  * @brief This function handles ADC1 interrupt.
  */
void ADC1_IRQHandler(void)
{
  /* USER CODE BEGIN ADC1_IRQn 0 */

  /* USER CODE END ADC1_IRQn 0 */
  HAL_ADC_IRQHandler(&hadc1);
  /* USER CODE BEGIN ADC1_IRQn 1 */

  /* USER CODE END ADC1_IRQn 1 */
}

/**
  * @brief This function handles TIM1 break, update, trigger and commutation interrupts.
  */
void TIM1_BRK_UP_TRG_COM_IRQHandler(void)
{
  /* USER CODE BEGIN TIM1_BRK_UP_TRG_COM_IRQn 0 */

  /* USER CODE END TIM1_BRK_UP_TRG_COM_IRQn 0 */
  HAL_TIM_IRQHandler(&htim1);
  /* USER CODE BEGIN TIM1_BRK_UP_TRG_COM_IRQn 1 */

  /* USER CODE END TIM1_BRK_UP_TRG_COM_IRQn 1 */
}

/**
  * @brief This function handles TIM1 capture compare interrupt.
  */
void TIM1_CC_IRQHandler(void)
{
  /* USER CODE BEGIN TIM1_CC_IRQn 0 */

  /* USER CODE END TIM1_CC_IRQn 0 */
  HAL_TIM_IRQHandler(&htim1);
  /* USER CODE BEGIN TIM1_CC_IRQn 1 */

  /* USER CODE END TIM1_CC_IRQn 1 */
}

/**
  * @brief This function handles TIM3 global interrupt.
  */
void TIM3_IRQHandler(void)
{
  /* USER CODE BEGIN TIM3_IRQn 0 */
	if (0U == LL_TIM_IsActiveFlag_UPDATE(TIM3)) {
		/* Nothing to do */
	} else {

		LL_TIM_ClearFlag_UPDATE(TIM3);
	  handleHallOverflow();
	}


	if (LL_TIM_IsActiveFlag_CC1(TIM3) != 0U) {
		LL_TIM_ClearFlag_CC1(TIM3);
		MotorRun.hall_overflowedFlag = 0;
//		HAL_GPIO_WritePin(Buzzer_GPIO_Port, Buzzer_Pin, GPIO_PIN_SET);
		        // Read hall value here
		        uint8_t hall = ((HAL_GPIO_ReadPin(HW_GPIO_Port, HW_Pin) << 2)
		                        | (HAL_GPIO_ReadPin(HV_GPIO_Port, HV_Pin) << 1)
		                        | HAL_GPIO_ReadPin(HU_GPIO_Port, HU_Pin));
		        MotorRun.hallstate = hall ^ FixedValue.hallmodifier;
		        MotorRun.phaseIncAcc =0;
				if (Measured.motorPeriod.firstCap == 1U){
					Measured.motorPeriod.firstCap = 0U;
					Measured.motorPeriod.capturedValue = MAX_HALL_PERIOD;
				}
				Measured.motorPeriod.lastInputCapturedTime = HAL_GetTick();
		        Measured.motorPeriod.inputCaptured = 1;
		        Measured.motorPeriod.capturedValue =(uint16_t) LL_TIM_IC_GetCaptureCH1(TIM3);
		        handle_hall(hall);
				calculateMotorPeriod(Measured.motorPeriod.capturedValue);
				calculateMotorSpeed(Measured.motorPeriod.periodBeforeClamp);
				getHallAngle(MotorRun.hallstate);
//				HAL_GPIO_WritePin(Buzzer_GPIO_Port, Buzzer_Pin, GPIO_PIN_RESET);
	} else {
		/* Nothing to do */
	}
  /* USER CODE END TIM3_IRQn 0 */
  /* USER CODE BEGIN TIM3_IRQn 1 */


  /* USER CODE END TIM3_IRQn 1 */
}

/**
  * @brief This function handles TIM14 global interrupt.
  */
void TIM14_IRQHandler(void)
{
  /* USER CODE BEGIN TIM14_IRQn 0 */
//	HAL_GPIO_WritePin(Buzzer_GPIO_Port, Buzzer_Pin, GPIO_PIN_SET);
		TIM1->CCR3 = MotorRun.PDC1Latch;
		TIM1->CCR2 = MotorRun.PDC3Latch;
		TIM1->CCR1 = MotorRun.PDC2Latch;
//	initialconfiguration();
	fast_loop();
//	updateSpeedPIValues();
//	phaseAdv_updateAngle();
	filterMotorPeriod();
	filterMotorSpeed();
	uint32_t brake = HAL_GPIO_ReadPin(BRAKE_GPIO_Port, BRAKE_Pin);
	update_brakevalue(brake);
	handleDrivingInputSource();
	stateMachine_handle();
//	HAL_GPIO_WritePin(Buzzer_GPIO_Port, Buzzer_Pin, GPIO_PIN_RESET);
  /* USER CODE END TIM14_IRQn 0 */
  HAL_TIM_IRQHandler(&htim14);
  /* USER CODE BEGIN TIM14_IRQn 1 */

  /* USER CODE END TIM14_IRQn 1 */
}

/**
  * @brief This function handles TIM17 global interrupt.
  */
void TIM17_IRQHandler(void)
{
  /* USER CODE BEGIN TIM17_IRQn 0 */
//	    updateSpeedPIValues();
//	    HAL_GPIO_WritePin(Buzzer_GPIO_Port, Buzzer_Pin, GPIO_PIN_SET);
	    slow_loop();
//	    phaseAdv_updateAngle();
//	    HAL_GPIO_WritePin(Buzzer_GPIO_Port, Buzzer_Pin, GPIO_PIN_RESET);
		SWS_calculateSpeed();
		pedal_handle(HAL_GetTick());
//		HAL_GPIO_WritePin(Buzzer_GPIO_Port, Buzzer_Pin, GPIO_PIN_RESET);
//		uint32_t sec = HAL_GetTick();
//		update_time(sec);
//		cruise_handle();
//		static uint8_t tx_data[14] = { 0x02, 0x0E, 0x01, 0x00, 0x00, 0x00, 0x00,
//				0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 13 };
//		transmit(tx_data);
//		display_handleTransmission();
//		HAL_UART_Transmit_IT(&huart1, tx_data, 14);
//		display_handleReception();
  /* USER CODE END TIM17_IRQn 0 */
  HAL_TIM_IRQHandler(&htim17);
  /* USER CODE BEGIN TIM17_IRQn 1 */

  /* USER CODE END TIM17_IRQn 1 */
}

/**
  * @brief This function handles USART1 global interrupt / USART1 wake-up interrupt through EXTI line 25.
  */
void USART1_IRQHandler(void)
{
  /* USER CODE BEGIN USART1_IRQn 0 */

  /* USER CODE END USART1_IRQn 0 */
  HAL_UART_IRQHandler(&huart1);
  /* USER CODE BEGIN USART1_IRQn 1 */

  /* USER CODE END USART1_IRQn 1 */
}

/* USER CODE BEGIN 1 */
void motorenable() {
	HAL_TIM_PWM_Start(&htim1, TIM_CHANNEL_1);
	HAL_TIM_PWM_Start(&htim1, TIM_CHANNEL_2);
	HAL_TIM_PWM_Start(&htim1, TIM_CHANNEL_3);
	HAL_TIMEx_PWMN_Start(&htim1, TIM_CHANNEL_1);
	HAL_TIMEx_PWMN_Start(&htim1, TIM_CHANNEL_2);
	HAL_TIMEx_PWMN_Start(&htim1, TIM_CHANNEL_3);
}

void motordisable() {
	HAL_TIM_PWM_Stop(&htim1, TIM_CHANNEL_1);
	HAL_TIM_PWM_Stop(&htim1, TIM_CHANNEL_2);
	HAL_TIM_PWM_Stop(&htim1, TIM_CHANNEL_3);
	HAL_TIMEx_PWMN_Stop(&htim1, TIM_CHANNEL_1);
	HAL_TIMEx_PWMN_Stop(&htim1, TIM_CHANNEL_2);
	HAL_TIMEx_PWMN_Stop(&htim1, TIM_CHANNEL_3);
}


void HAL_GPIO_EXTI_Rising_Callback(uint16_t GPIO_Pin) {
    if (GPIO_Pin == PAS_Pin) {
    	pedal_riseIntHandler(HAL_GetTick());
    }
    if (GPIO_Pin == MOTOR_SPD_Pin) {
    	SWS_intHandler(HAL_GetTick());
    }
}

void handleHallOverflow(void){
	Measured.motorSpeed.speedWithoutFilter = 0;
//		measured.motorSpeed.speed = 0;
	Measured.motorPeriod.periodBeforeFilter = MAX_HALL_PERIOD;
	Measured.motorPeriod.period = MAX_HALL_PERIOD;
//		calculateMotorSpeed(measured.motorPeriod.period);
//	filterMotorSpeed();
//	getHallPos();
	handle_hall(Measured.hallPosition);
	getHallAngle(MotorRun.hallstate);
//	Fixedvalue.phaseIncAcc = 0;
	Measured.motorPeriod.firstCap = 1U;
}

void HAL_ADC_ConvCpltCallback(ADC_HandleTypeDef* hadc) {

    if (hadc->Instance == ADC1) {
        // Process ADC values
    	uint32_t current = HostVar.rawADCValues[1];
    	uint32_t voltage = HostVar.rawADCValues[2];
    	uint32_t throttle = HostVar.rawADCValues[0];
    	uint32_t temperature = HostVar.rawADCValues[3];
//        process_adc_values();
    	// Call the function to process ADC values and check protections

    	update_ADC(current,voltage,throttle,temperature);

    }
}

static uint8_t validAddress[3] = { 0x01, 0x14, 0x01 };
void acceptDataIfAddressMatch() {
	if (Communication.rxBuf[0] == validAddress[0]
			&& Communication.rxBuf[1] == validAddress[1]
			&& Communication.rxBuf[2] == validAddress[2]) {
		memcpy(Communication.rawData, Communication.rxBuf, DISPLAY_RX_SIZE);
		display_parse();
		Communication.source = 0;
	}
}

void HAL_UART_RxCpltCallback(UART_HandleTypeDef *huart) {
	if (huart->Instance == USART1) {
		acceptDataIfAddressMatch();
//		acceptFrontendAdress();
		HAL_UART_Receive_IT(&huart1, Communication.rxBuf, DISPLAY_RX_SIZE);
		Display.lastReceptionTime = HAL_GetTick();
	}
}

void display_handleReception() {
	if (HAL_GetTick() > Display.lastReceptionTime + DISPLAY_RECONNECT_TIMEOUT) {
		if (HAL_GetTick() > Display.lastReconnectionAttempt + 100) {
			HAL_UART_AbortReceive_IT(&huart1);
			HAL_UART_Receive_IT(&huart1, Communication.rxBuf, DISPLAY_RX_SIZE);
			Display.lastReconnectionAttempt = HAL_GetTick();
		}
	}
}

void display_parse() {
	Display.in.parsed.pedalAssist = Communication.rawData[4];
	Display.in.parsed.multiParam.value = Communication.rawData[5];
	if (Display.in.parsed.multiParam.cruiseSignal == 1) {
		cruise_toggle();
	}
}

/* USER CODE END 1 */
