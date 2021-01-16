#ifndef TIMERS_H_
#define TIMERS_H_

#include <stm32f4xx_rcc.h>
#include <stm32f4xx_gpio.h>
#include <stm32f4xx_tim.h>

/** TIMER_ON_APB1_PERIOD = ((SystemCoreClock / APB1_Prescaler) * PLL_P) / 1000000
	* 90 = ((180000000 / 4) * 2) / 1000000
	* TIMER_ON_APB1 has frequency 1 MHz
	*/
#define DEFAULT_APB1_PRESCALER				0
#define DEFAULT_APB1_PERIOD						90

/** TIMER_ON_APB2_PERIOD = ((SystemCoreClock / APB2_Prescaler) * PLL_P) / 1000000
	* 180 = ((180000000 / 2) * 2) / 1000000
	* TIMER_ON_APB2 has frequency 1 MHz
	*/
#define DEFAULT_APB2_PRESCALER				0
#define DEFAULT_APB2_PERIOD						180

void TIM_Init(TIM_TypeDef* TIMx, uint16_t prescaler, uint16_t period);
void TIM_DefaultInit(TIM_TypeDef* TIMx);
void TIM_ResolutionInit(TIM_TypeDef* TIMx, uint32_t resolution);
void TIM_Disable(TIM_TypeDef* TIMx);
void TIM_Enable(TIM_TypeDef* TIMx);
void TIM_AttachUserInterruptFunction(TIM_TypeDef* TIMx, void (*TIM_UserInterruptFunctionPtr)(void));
void TIM_DetachUserInterruptFunction(TIM_TypeDef* TIMx);
uint32_t TIM_GetMicros(TIM_TypeDef* TIMx);
void TIM_WaitMicros(TIM_TypeDef* TIMx, uint32_t us);
void TIM_ResetCountdown(TIM_TypeDef* TIMx);
void TIM_SetCoundtownTop(TIM_TypeDef* TIMx, uint32_t top);
uint8_t TIM_GetCountdownFlagStatus(TIM_TypeDef* TIMx);

#endif
