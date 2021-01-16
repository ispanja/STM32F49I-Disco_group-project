#include "systick.h"


static volatile uint32_t ticks;

/*
	systickInit function initialize systick timer 
	param frequency set frequency for timer
*/
void systickInit(uint16_t frequency) {
  RCC_ClocksTypeDef RCC_Clocks;
  RCC_GetClocksFreq(&RCC_Clocks);
	
	(void) SysTick_Config( RCC_Clocks.HCLK_Frequency/ frequency);

}
void SysTick_Handler(void) {
  ticks++;
}
 

// return the system clock as milliseconds
uint32_t millis(void) {
 
	return ticks;
	
}
 /*
		delay in miliseconds if frequency form systickInit is frequency = 1000
		param t is time in miliseconds.
*/
void delay_ms(uint32_t t) {
  uint32_t start, end;
  start = millis();
  end = start + t;
  if (start < end) { 
    while ((millis() >= start) && (millis() < end)) { 
      // do nothing 
    } 
  } else {   
    while ((millis() >= start) || (millis() < end)) {
      // do nothing
    };
  }
}
