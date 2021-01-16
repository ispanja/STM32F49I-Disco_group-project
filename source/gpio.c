#include <gpio.h> 

/*
	Initialize GPIO
*/
void gpio_init() 
{ 
GPIO_InitTypeDef GPIO_InitStruct; 
 	
	//configure LED_RED GPIO pin
 	RCC_AHB1PeriphClockCmd(LED_RED_RCC_GPIOx, ENABLE); 	 
 	GPIO_InitStruct.GPIO_Pin   	= LED_RED_PinNumber; 
 	GPIO_InitStruct.GPIO_Mode  	= GPIO_Mode_OUT; 
 	GPIO_InitStruct.GPIO_Speed  = GPIO_Speed_50MHz;
	GPIO_InitStruct.GPIO_OType  = GPIO_OType_PP; 
 	GPIO_InitStruct.GPIO_PuPd  	= GPIO_PuPd_NOPULL; 
 	GPIO_Init(LED_RED_GPIOx, &GPIO_InitStruct);  
 	//configure LED_GREEN GPIO pin
 	RCC_AHB1PeriphClockCmd(LED_GREEN_RCC_GPIOx, ENABLE);
	GPIO_InitStruct.GPIO_Pin   	= LED_GREEN_PinNumber; 
 	GPIO_Init(LED_GREEN_GPIOx, &GPIO_InitStruct); 	 	 	 
} 

/*
	Change GPIO pin state to LOW(0) or HIGH(1)
*/
void gpio_led_state(uint8_t LED_ID, uint8_t state) 
{ 
BitAction bitValue; 
 
 	bitValue = (state == 1) ? Bit_SET : Bit_RESET;
	switch(LED_ID) 
 	{ 
 	 	case LED_RED_ID: 
 	 	 	GPIO_WriteBit(LED_RED_GPIOx, LED_RED_PinNumber, bitValue); 
 	 	 	break;
		case LED_GREEN_ID: 
 	 	 	GPIO_WriteBit(LED_GREEN_GPIOx, LED_GREEN_PinNumber, bitValue); 
 	 	 	break;
	} 
} 

void led_on(void)
{
	gpio_led_state(LED_GREEN_ID, HIGH);
}
void led_off(void)
{
	gpio_led_state(LED_GREEN_ID, LOW);
}
void error_led_on(void) 
{
		gpio_led_state(LED_RED_ID, HIGH);
}
