#ifndef INTERRUPTS_H_
#define INTERRUPTS_H_

#include <stm32f4xx_rcc.h>
#include <stm32f4xx_gpio.h>
#include <stm32f4xx_exti.h>
#include <stm32f4xx_syscfg.h>

#define RISING					EXTI_Trigger_Rising
#define FALLING					EXTI_Trigger_Falling
#define RISING_FALLING	EXTI_Trigger_Rising_Falling

#define PULL_UP					GPIO_PuPd_UP
#define PULL_DOWN				GPIO_PuPd_DOWN
#define NO_PULL					GPIO_PuPd_NOPULL

#define Pin_0						GPIO_Pin_0
#define Pin_1						GPIO_Pin_1
#define Pin_2						GPIO_Pin_2
#define Pin_3						GPIO_Pin_3
#define Pin_4						GPIO_Pin_4
#define Pin_5						GPIO_Pin_5
#define Pin_6						GPIO_Pin_6
#define Pin_7						GPIO_Pin_7
#define Pin_8						GPIO_Pin_8
#define Pin_9						GPIO_Pin_9
#define Pin_10					GPIO_Pin_10
#define Pin_11					GPIO_Pin_11
#define Pin_12					GPIO_Pin_12
#define Pin_13					GPIO_Pin_13
#define Pin_14					GPIO_Pin_14
#define Pin_15					GPIO_Pin_15

#define A								GPIOA
#define B								GPIOB
#define C								GPIOC
#define D								GPIOD
#define E								GPIOE
#define F								GPIOF
#define G								GPIOG
#define H								GPIOH
#define I								GPIOI
#define J								GPIOJ
#define K								GPIOK

void EXT_INTERRUPT_Init(GPIO_TypeDef* port, uint32_t pin, GPIOPuPd_TypeDef pull, EXTITrigger_TypeDef trigger);
void EXT_INTERRUPT_AttachUserInterruptFunction(GPIO_TypeDef* port, uint32_t pin, void (*EXTI_UserInterruptFunctionPtr)());
void EXT_INTERRUPT_DetachUserInterruptFunction(GPIO_TypeDef* port, uint32_t pin);

#endif
