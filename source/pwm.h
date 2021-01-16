#ifndef PWM_H
#define PWM_H

#include <stm32f4xx.h>  				// common stuff  	
#include <stm32f4xx_gpio.h> 		// gpio control 
#include <stm32f4xx_rcc.h>  		// reset anc clocking

void config_PWM(void);

#define PWM_TIM_RCC 			RCC_APB1Periph_TIM4
#define PWM_PIN_RCC 			RCC_AHB1Periph_GPIOD
#define PWM_PIN						GPIO_Pin_12
#define PWM_PORT					GPIOD
#define PWM_PIN_SOURCE		GPIO_PinSource12
#define PWM_AF						GPIO_AF_TIM4

#endif
