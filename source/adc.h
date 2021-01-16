#ifndef ADC_H
#define ADC_H

#include <stm32f4xx.h> // common stuff
#include <stm32f4xx_gpio.h> // gpio control
#include <stm32f4xx_rcc.h> // reset anc clocking
#include <stm32f4xx_adc.h>
#include <stdio.h>


#define ADCx   			 ADC3
#define ADC_CHANNEL   		 ADC_Channel_13
#define ADCx_CLK      		 RCC_APB2Periph_ADC3
#define ADCx_CHANNEL_GPIO_CLK    RCC_AHB1Periph_GPIOC
#define GPIO_PIN                 GPIO_Pin_3
#define GPIO_PORT                GPIOC
	
void ADC_init(void);
int ADC_convert(void);
void ADC_print(void);

#endif
