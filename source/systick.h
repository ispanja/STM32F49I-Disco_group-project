#ifndef SYSTICK_H
#define SYSTICK_H

#include <stm32f4xx_rcc.h>  		// reset anc clocking

#define MS_FREQUENCY 	1000

void systickInit(uint16_t frequency);
void delay_ms(uint32_t t);



#endif
