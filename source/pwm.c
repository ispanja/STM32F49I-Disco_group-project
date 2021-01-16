#include "pwm.h"

void config_PWM(void)
	{
		//Structures for configuration
		GPIO_InitTypeDef					GPIO_InitStructure;		 
		TIM_TimeBaseInitTypeDef		TIM_TimeBaseStructure;
		TIM_OCInitTypeDef					TIM_OCInitStructure;

		// TIM4 Clock Enable
		RCC_APB1PeriphClockCmd(PWM_TIM_RCC, ENABLE);
		
		//GPIOB clock enable because we use PB6
		RCC_AHB1PeriphClockCmd(PWM_PIN_RCC, ENABLE);
		
		//Initialize PB6 (TIM4 Ch1)
		GPIO_InitStructure.GPIO_Pin		= PWM_PIN;
		GPIO_InitStructure.GPIO_Mode	= GPIO_Mode_AF;
		GPIO_InitStructure.GPIO_Speed	= GPIO_Speed_100MHz;  // HIGH speed
		GPIO_InitStructure.GPIO_OType	= GPIO_OType_PP;			// could open drain
		GPIO_InitStructure.GPIO_PuPd	= GPIO_PuPd_UP;				//Weak Pull-up for safety douring startup
		
		GPIO_Init(PWM_PORT, &GPIO_InitStructure);
		
		// Assign Alteranate Function to pin
		GPIO_PinAFConfig(PWM_PORT, PWM_PIN_SOURCE, PWM_AF);
		
		
		/* 	racunanje podataka za timer iz toga zakljucimo nastavak
				Timer_Freq je zeljena frekvencija TIM4
				Prescaler = APB1_ferq / Timer_Freq
				Prescaler = 84 MHz / 1 MHz
				Prescaler = 84
		
		*/
		uint16_t PrescalerValue = (uint16_t) 84 ;
		
		//Time Base Configration
		TIM_TimeBaseStructure.TIM_Period				= 999;								// For 1 us
		TIM_TimeBaseStructure.TIM_Prescaler			= PrescalerValue;
		TIM_TimeBaseStructure.TIM_ClockDivision	= 0;										// no clock DIV
		TIM_TimeBaseStructure.TIM_CounterMode		= TIM_CounterMode_Up;		// count 0-> CNT
		
		TIM_TimeBaseInit(TIM4, &TIM_TimeBaseStructure);
		
		// TIM Settings
		TIM_OCInitStructure.TIM_OCMode				= TIM_OCMode_PWM1;						// Set pulse when CNT==CCRx
		TIM_OCInitStructure.TIM_OutputState		= TIM_OutputState_Enable;
		TIM_OCInitStructure.TIM_Pulse					= 0;													// Initial duty cycle
		TIM_OCInitStructure.TIM_OCPolarity		= TIM_OCPolarity_High;				// Active High , 0 -> 1 starts duty cycle
		
		//PB6 use TIM4 on Ch1
		TIM_OC1Init(TIM4, &TIM_OCInitStructure);
		TIM_OC1PreloadConfig(TIM4, TIM_OCPreload_Enable);
		
		TIM_ARRPreloadConfig(TIM4, ENABLE);
		
		//Start timer
		TIM_Cmd(TIM4, ENABLE);
	}
