/* gpio.h */ 
#ifndef GPIO_H 
#define GPIO_H 
 
#include <stm32f4xx.h>  		// common stuff  	
#include <stm32f4xx_gpio.h> 		// gpio control 
#include <stm32f4xx_rcc.h>  		// reset anc clocking

#define LED_RED_RCC_GPIOx 		RCC_AHB1Periph_GPIOG 
#define LED_GREEN_RCC_GPIOx 		RCC_AHB1Periph_GPIOG
 
#define LED_RED_GPIOx  					GPIOG 
#define LED_GREEN_GPIOx  				GPIOG 

#define LED_GREEN_PinNumber 	  GPIO_Pin_13
#define LED_RED_PinNumber 	  GPIO_Pin_14
 
#define LED_RED_ID 		1 
#define LED_GREEN_ID  		2

#define HIGH			1
#define LOW			0


void gpio_init(void); 
void gpio_led_state(uint8_t LED_ID, uint8_t state); 
void led_on(void);
void led_off(void);
void error_led_on(void);

#endif 	   
