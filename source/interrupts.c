#include "interrupts.h"

void int_nop(void){};

void (*A0_UserInterruptFunctionPtr)() = &int_nop;
void (*A1_UserInterruptFunctionPtr)() = &int_nop;
void (*A2_UserInterruptFunctionPtr)() = &int_nop;
void (*A3_UserInterruptFunctionPtr)() = &int_nop;
void (*A4_UserInterruptFunctionPtr)() = &int_nop;
void (*A5_UserInterruptFunctionPtr)() = &int_nop;
void (*A6_UserInterruptFunctionPtr)() = &int_nop;
void (*A7_UserInterruptFunctionPtr)() = &int_nop;
void (*A8_UserInterruptFunctionPtr)() = &int_nop;
void (*A9_UserInterruptFunctionPtr)() = &int_nop;
void (*A10_UserInterruptFunctionPtr)() = &int_nop;
void (*A11_UserInterruptFunctionPtr)() = &int_nop;
void (*A12_UserInterruptFunctionPtr)() = &int_nop;
void (*A13_UserInterruptFunctionPtr)() = &int_nop;
void (*A14_UserInterruptFunctionPtr)() = &int_nop;
void (*A15_UserInterruptFunctionPtr)() = &int_nop;

void (*B0_UserInterruptFunctionPtr)() = &int_nop;
void (*B1_UserInterruptFunctionPtr)() = &int_nop;
void (*B2_UserInterruptFunctionPtr)() = &int_nop;
void (*B3_UserInterruptFunctionPtr)() = &int_nop;
void (*B4_UserInterruptFunctionPtr)() = &int_nop;
void (*B5_UserInterruptFunctionPtr)() = &int_nop;
void (*B6_UserInterruptFunctionPtr)() = &int_nop;
void (*B7_UserInterruptFunctionPtr)() = &int_nop;
void (*B8_UserInterruptFunctionPtr)() = &int_nop;
void (*B9_UserInterruptFunctionPtr)() = &int_nop;
void (*B10_UserInterruptFunctionPtr)() = &int_nop;
void (*B11_UserInterruptFunctionPtr)() = &int_nop;
void (*B12_UserInterruptFunctionPtr)() = &int_nop;
void (*B13_UserInterruptFunctionPtr)() = &int_nop;
void (*B14_UserInterruptFunctionPtr)() = &int_nop;
void (*B15_UserInterruptFunctionPtr)() = &int_nop;

void (*C0_UserInterruptFunctionPtr)() = &int_nop;
void (*C1_UserInterruptFunctionPtr)() = &int_nop;
void (*C2_UserInterruptFunctionPtr)() = &int_nop;
void (*C3_UserInterruptFunctionPtr)() = &int_nop;
void (*C4_UserInterruptFunctionPtr)() = &int_nop;
void (*C5_UserInterruptFunctionPtr)() = &int_nop;
void (*C6_UserInterruptFunctionPtr)() = &int_nop;
void (*C7_UserInterruptFunctionPtr)() = &int_nop;
void (*C8_UserInterruptFunctionPtr)() = &int_nop;
void (*C9_UserInterruptFunctionPtr)() = &int_nop;
void (*C10_UserInterruptFunctionPtr)() = &int_nop;
void (*C11_UserInterruptFunctionPtr)() = &int_nop;
void (*C12_UserInterruptFunctionPtr)() = &int_nop;
void (*C13_UserInterruptFunctionPtr)() = &int_nop;
void (*C14_UserInterruptFunctionPtr)() = &int_nop;
void (*C15_UserInterruptFunctionPtr)() = &int_nop;

void (*D0_UserInterruptFunctionPtr)() = &int_nop;
void (*D1_UserInterruptFunctionPtr)() = &int_nop;
void (*D2_UserInterruptFunctionPtr)() = &int_nop;
void (*D3_UserInterruptFunctionPtr)() = &int_nop;
void (*D4_UserInterruptFunctionPtr)() = &int_nop;
void (*D5_UserInterruptFunctionPtr)() = &int_nop;
void (*D6_UserInterruptFunctionPtr)() = &int_nop;
void (*D7_UserInterruptFunctionPtr)() = &int_nop;
void (*D8_UserInterruptFunctionPtr)() = &int_nop;
void (*D9_UserInterruptFunctionPtr)() = &int_nop;
void (*D10_UserInterruptFunctionPtr)() = &int_nop;
void (*D11_UserInterruptFunctionPtr)() = &int_nop;
void (*D12_UserInterruptFunctionPtr)() = &int_nop;
void (*D13_UserInterruptFunctionPtr)() = &int_nop;
void (*D14_UserInterruptFunctionPtr)() = &int_nop;
void (*D15_UserInterruptFunctionPtr)() = &int_nop;

void (*E0_UserInterruptFunctionPtr)() = &int_nop;
void (*E1_UserInterruptFunctionPtr)() = &int_nop;
void (*E2_UserInterruptFunctionPtr)() = &int_nop;
void (*E3_UserInterruptFunctionPtr)() = &int_nop;
void (*E4_UserInterruptFunctionPtr)() = &int_nop;
void (*E5_UserInterruptFunctionPtr)() = &int_nop;
void (*E6_UserInterruptFunctionPtr)() = &int_nop;
void (*E7_UserInterruptFunctionPtr)() = &int_nop;
void (*E8_UserInterruptFunctionPtr)() = &int_nop;
void (*E9_UserInterruptFunctionPtr)() = &int_nop;
void (*E10_UserInterruptFunctionPtr)() = &int_nop;
void (*E11_UserInterruptFunctionPtr)() = &int_nop;
void (*E12_UserInterruptFunctionPtr)() = &int_nop;
void (*E13_UserInterruptFunctionPtr)() = &int_nop;
void (*E14_UserInterruptFunctionPtr)() = &int_nop;
void (*E15_UserInterruptFunctionPtr)() = &int_nop;

void (*F0_UserInterruptFunctionPtr)() = &int_nop;
void (*F1_UserInterruptFunctionPtr)() = &int_nop;
void (*F2_UserInterruptFunctionPtr)() = &int_nop;
void (*F3_UserInterruptFunctionPtr)() = &int_nop;
void (*F4_UserInterruptFunctionPtr)() = &int_nop;
void (*F5_UserInterruptFunctionPtr)() = &int_nop;
void (*F6_UserInterruptFunctionPtr)() = &int_nop;
void (*F7_UserInterruptFunctionPtr)() = &int_nop;
void (*F8_UserInterruptFunctionPtr)() = &int_nop;
void (*F9_UserInterruptFunctionPtr)() = &int_nop;
void (*F10_UserInterruptFunctionPtr)() = &int_nop;
void (*F11_UserInterruptFunctionPtr)() = &int_nop;
void (*F12_UserInterruptFunctionPtr)() = &int_nop;
void (*F13_UserInterruptFunctionPtr)() = &int_nop;
void (*F14_UserInterruptFunctionPtr)() = &int_nop;
void (*F15_UserInterruptFunctionPtr)() = &int_nop;

void (*G0_UserInterruptFunctionPtr)() = &int_nop;
void (*G1_UserInterruptFunctionPtr)() = &int_nop;
void (*G2_UserInterruptFunctionPtr)() = &int_nop;
void (*G3_UserInterruptFunctionPtr)() = &int_nop;
void (*G4_UserInterruptFunctionPtr)() = &int_nop;
void (*G5_UserInterruptFunctionPtr)() = &int_nop;
void (*G6_UserInterruptFunctionPtr)() = &int_nop;
void (*G7_UserInterruptFunctionPtr)() = &int_nop;
void (*G8_UserInterruptFunctionPtr)() = &int_nop;
void (*G9_UserInterruptFunctionPtr)() = &int_nop;
void (*G10_UserInterruptFunctionPtr)() = &int_nop;
void (*G11_UserInterruptFunctionPtr)() = &int_nop;
void (*G12_UserInterruptFunctionPtr)() = &int_nop;
void (*G13_UserInterruptFunctionPtr)() = &int_nop;
void (*G14_UserInterruptFunctionPtr)() = &int_nop;
void (*G15_UserInterruptFunctionPtr)() = &int_nop;

void (*H0_UserInterruptFunctionPtr)() = &int_nop;
void (*H1_UserInterruptFunctionPtr)() = &int_nop;
void (*H2_UserInterruptFunctionPtr)() = &int_nop;
void (*H3_UserInterruptFunctionPtr)() = &int_nop;
void (*H4_UserInterruptFunctionPtr)() = &int_nop;
void (*H5_UserInterruptFunctionPtr)() = &int_nop;
void (*H6_UserInterruptFunctionPtr)() = &int_nop;
void (*H7_UserInterruptFunctionPtr)() = &int_nop;
void (*H8_UserInterruptFunctionPtr)() = &int_nop;
void (*H9_UserInterruptFunctionPtr)() = &int_nop;
void (*H10_UserInterruptFunctionPtr)() = &int_nop;
void (*H11_UserInterruptFunctionPtr)() = &int_nop;
void (*H12_UserInterruptFunctionPtr)() = &int_nop;
void (*H13_UserInterruptFunctionPtr)() = &int_nop;
void (*H14_UserInterruptFunctionPtr)() = &int_nop;
void (*H15_UserInterruptFunctionPtr)() = &int_nop;

void (*I0_UserInterruptFunctionPtr)() = &int_nop;
void (*I1_UserInterruptFunctionPtr)() = &int_nop;
void (*I2_UserInterruptFunctionPtr)() = &int_nop;
void (*I3_UserInterruptFunctionPtr)() = &int_nop;
void (*I4_UserInterruptFunctionPtr)() = &int_nop;
void (*I5_UserInterruptFunctionPtr)() = &int_nop;
void (*I6_UserInterruptFunctionPtr)() = &int_nop;
void (*I7_UserInterruptFunctionPtr)() = &int_nop;
void (*I8_UserInterruptFunctionPtr)() = &int_nop;
void (*I9_UserInterruptFunctionPtr)() = &int_nop;
void (*I10_UserInterruptFunctionPtr)() = &int_nop;
void (*I11_UserInterruptFunctionPtr)() = &int_nop;
void (*I12_UserInterruptFunctionPtr)() = &int_nop;
void (*I13_UserInterruptFunctionPtr)() = &int_nop;
void (*I14_UserInterruptFunctionPtr)() = &int_nop;
void (*I15_UserInterruptFunctionPtr)() = &int_nop;

void (*J0_UserInterruptFunctionPtr)() = &int_nop;
void (*J1_UserInterruptFunctionPtr)() = &int_nop;
void (*J2_UserInterruptFunctionPtr)() = &int_nop;
void (*J3_UserInterruptFunctionPtr)() = &int_nop;
void (*J4_UserInterruptFunctionPtr)() = &int_nop;
void (*J5_UserInterruptFunctionPtr)() = &int_nop;
void (*J6_UserInterruptFunctionPtr)() = &int_nop;
void (*J7_UserInterruptFunctionPtr)() = &int_nop;
void (*J8_UserInterruptFunctionPtr)() = &int_nop;
void (*J9_UserInterruptFunctionPtr)() = &int_nop;
void (*J10_UserInterruptFunctionPtr)() = &int_nop;
void (*J11_UserInterruptFunctionPtr)() = &int_nop;
void (*J12_UserInterruptFunctionPtr)() = &int_nop;
void (*J13_UserInterruptFunctionPtr)() = &int_nop;
void (*J14_UserInterruptFunctionPtr)() = &int_nop;
void (*J15_UserInterruptFunctionPtr)() = &int_nop;

void (*K0_UserInterruptFunctionPtr)() = &int_nop;
void (*K1_UserInterruptFunctionPtr)() = &int_nop;
void (*K2_UserInterruptFunctionPtr)() = &int_nop;
void (*K3_UserInterruptFunctionPtr)() = &int_nop;
void (*K4_UserInterruptFunctionPtr)() = &int_nop;
void (*K5_UserInterruptFunctionPtr)() = &int_nop;
void (*K6_UserInterruptFunctionPtr)() = &int_nop;
void (*K7_UserInterruptFunctionPtr)() = &int_nop;
void (*K8_UserInterruptFunctionPtr)() = &int_nop;
void (*K9_UserInterruptFunctionPtr)() = &int_nop;
void (*K10_UserInterruptFunctionPtr)() = &int_nop;
void (*K11_UserInterruptFunctionPtr)() = &int_nop;
void (*K12_UserInterruptFunctionPtr)() = &int_nop;
void (*K13_UserInterruptFunctionPtr)() = &int_nop;
void (*K14_UserInterruptFunctionPtr)() = &int_nop;
void (*K15_UserInterruptFunctionPtr)() = &int_nop;

/**
	* @brief Initializes interrupt on specified pin.
	*
	* @param port: port of specefied pin, can be A, B, C, D, E, F, G, I, J, K.
	* @param pin: number of pin on witch to initialize external interrupt, can be value from 0 to 15.
	* @param pull: specefies on whitch potencial conect interrupt pin, can be PULL_UP, PULL_DOWN, NO_PULL.
	* @param triger: specefies whitch event whil triger  interrupt, can be RISING, FALLING, RISING_FALLING.
	*
	* @retval None.
	*/
void EXT_INTERRUPT_Init(GPIO_TypeDef* port, uint32_t pin, GPIOPuPd_TypeDef pull, EXTITrigger_TypeDef trigger){
	GPIO_InitTypeDef GPIO_InitStruct;
	EXTI_InitTypeDef EXTI_InitStruct;
	NVIC_InitTypeDef NVIC_InitStruct;
	uint8_t EXTI_PortSourceGPIOx;
	uint8_t EXTI_PinSourcex;
	
	if(port == GPIOA){
		RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOA, ENABLE);
		EXTI_PortSourceGPIOx = EXTI_PortSourceGPIOA;
	}else if(port == GPIOB){
		RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOB, ENABLE);
		EXTI_PortSourceGPIOx = EXTI_PortSourceGPIOB;
	}else if(port == GPIOC){
		RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOC, ENABLE);
		EXTI_PortSourceGPIOx = EXTI_PortSourceGPIOC;
	}else if(port == GPIOD){
		RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOD, ENABLE);
		EXTI_PortSourceGPIOx = EXTI_PortSourceGPIOD;
	}else if(port == GPIOE){
		RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOE, ENABLE);
		EXTI_PortSourceGPIOx = EXTI_PortSourceGPIOE;
	}else if(port == GPIOF){
		RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOF, ENABLE);
		EXTI_PortSourceGPIOx = EXTI_PortSourceGPIOF;
	}else if(port == GPIOG){
		RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOG, ENABLE);
		EXTI_PortSourceGPIOx = EXTI_PortSourceGPIOG;
	}else if(port == GPIOH){
		RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOH, ENABLE);
		EXTI_PortSourceGPIOx = EXTI_PortSourceGPIOH;
	}else if(port == GPIOI){
		RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOI, ENABLE);
		EXTI_PortSourceGPIOx = EXTI_PortSourceGPIOI;
	}else if(port == GPIOJ){
		RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOJ, ENABLE);
		EXTI_PortSourceGPIOx = EXTI_PortSourceGPIOJ;
	}else if(port == GPIOK){
		RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOK, ENABLE);
		EXTI_PortSourceGPIOx = EXTI_PortSourceGPIOK;
	}
	GPIO_InitStruct.GPIO_Mode = GPIO_Mode_IN;
	GPIO_InitStruct.GPIO_OType = GPIO_OType_PP;
	GPIO_InitStruct.GPIO_Speed = GPIO_Speed_100MHz;
	GPIO_InitStruct.GPIO_PuPd = pull;
	GPIO_InitStruct.GPIO_Pin = pin;
	GPIO_Init(port, &GPIO_InitStruct);
	
	if(pin == Pin_0){
		EXTI_InitStruct.EXTI_Line = EXTI_Line0;
		NVIC_InitStruct.NVIC_IRQChannel = EXTI0_IRQn;
		EXTI_PinSourcex = EXTI_PinSource0;
	}else if(pin == Pin_1){
		EXTI_InitStruct.EXTI_Line = EXTI_Line1;
		NVIC_InitStruct.NVIC_IRQChannel = EXTI1_IRQn;
		EXTI_PinSourcex = EXTI_PinSource1;
	}else if(pin == Pin_2){
		EXTI_InitStruct.EXTI_Line = EXTI_Line2;
		NVIC_InitStruct.NVIC_IRQChannel = EXTI2_IRQn;
		EXTI_PinSourcex = EXTI_PinSource2;
	}else if(pin == Pin_3){
		EXTI_InitStruct.EXTI_Line = EXTI_Line3;
		NVIC_InitStruct.NVIC_IRQChannel = EXTI3_IRQn;
		EXTI_PinSourcex = EXTI_PinSource3;
	}else if(pin == Pin_4){
		EXTI_InitStruct.EXTI_Line = EXTI_Line4;
		NVIC_InitStruct.NVIC_IRQChannel = EXTI4_IRQn;
		EXTI_PinSourcex = EXTI_PinSource4;
	}else if(pin == Pin_5){
		EXTI_InitStruct.EXTI_Line = EXTI_Line5;
		NVIC_InitStruct.NVIC_IRQChannel = EXTI9_5_IRQn;
		EXTI_PinSourcex = EXTI_PinSource5;
	}else if(pin == Pin_6){
		EXTI_InitStruct.EXTI_Line = EXTI_Line6;
		NVIC_InitStruct.NVIC_IRQChannel = EXTI9_5_IRQn;
		EXTI_PinSourcex = EXTI_PinSource6;
	}else if(pin == Pin_7){
		EXTI_InitStruct.EXTI_Line = EXTI_Line7;
		NVIC_InitStruct.NVIC_IRQChannel = EXTI9_5_IRQn;
		EXTI_PinSourcex = EXTI_PinSource7;
	}else if(pin == Pin_8){
		EXTI_InitStruct.EXTI_Line = EXTI_Line8;
		NVIC_InitStruct.NVIC_IRQChannel = EXTI9_5_IRQn;
		EXTI_PinSourcex = EXTI_PinSource8;
	}else if(pin == Pin_9){
		EXTI_InitStruct.EXTI_Line = EXTI_Line9;
		NVIC_InitStruct.NVIC_IRQChannel = EXTI9_5_IRQn;
		EXTI_PinSourcex = EXTI_PinSource9;
	}else if(pin == Pin_10){
		EXTI_InitStruct.EXTI_Line = EXTI_Line10;
		NVIC_InitStruct.NVIC_IRQChannel = EXTI15_10_IRQn;
		EXTI_PinSourcex = EXTI_PinSource10;
	}else if(pin == Pin_11){
		EXTI_InitStruct.EXTI_Line = EXTI_Line11;
		NVIC_InitStruct.NVIC_IRQChannel = EXTI15_10_IRQn;
		EXTI_PinSourcex = EXTI_PinSource11;
	}else if(pin == Pin_12){
		EXTI_InitStruct.EXTI_Line = EXTI_Line12;
		NVIC_InitStruct.NVIC_IRQChannel = EXTI15_10_IRQn;
		EXTI_PinSourcex = EXTI_PinSource12;
	}else if(pin == Pin_13){
		EXTI_InitStruct.EXTI_Line = EXTI_Line13;
		NVIC_InitStruct.NVIC_IRQChannel = EXTI15_10_IRQn;
		EXTI_PinSourcex = EXTI_PinSource13;
	}else if(pin == Pin_14){
		EXTI_InitStruct.EXTI_Line = EXTI_Line14;
		NVIC_InitStruct.NVIC_IRQChannel = EXTI15_10_IRQn;
		EXTI_PinSourcex = EXTI_PinSource14;
	}else if(pin == Pin_15){
		EXTI_InitStruct.EXTI_Line = EXTI_Line15;
		NVIC_InitStruct.NVIC_IRQChannel = EXTI15_10_IRQn;
		EXTI_PinSourcex = EXTI_PinSource15;
	}
	EXTI_InitStruct.EXTI_Mode = EXTI_Mode_Interrupt;
	EXTI_InitStruct.EXTI_Trigger = trigger;
	EXTI_InitStruct.EXTI_LineCmd = ENABLE;
	EXTI_Init(&EXTI_InitStruct);
	
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_SYSCFG, ENABLE);
	SYSCFG_EXTILineConfig(EXTI_PortSourceGPIOx, EXTI_PinSourcex);
	
	NVIC_InitStruct.NVIC_IRQChannelCmd = ENABLE;
	NVIC_InitStruct.NVIC_IRQChannelPreemptionPriority = 0;
	NVIC_InitStruct.NVIC_IRQChannelSubPriority = 0;
	NVIC_Init(&NVIC_InitStruct);
}

/**
  * @brief sets user defined function to be executed on interrupt event.
	*
	* @param port: port of specefied pin, can be A, B, C, D, E, F, G, I, J, K.
	* @param pin: number of pin on whos interrupt event whil user defined function be executed.
	* @param EXTI_UserInterruptFunctionPtr: pointer to user defined function.
	*
	* @retval None.
	*/
void EXT_INTERRUPT_AttachUserInterruptFunction(GPIO_TypeDef* port, uint32_t pin, void (*EXTI_UserInterruptFunctionPtr)()){
	__disable_irq();
	
	if(port == A){
		if(pin == Pin_0){
			A0_UserInterruptFunctionPtr = EXTI_UserInterruptFunctionPtr;
		}else if(pin == Pin_1){
			A1_UserInterruptFunctionPtr = EXTI_UserInterruptFunctionPtr;
		}else if(pin == Pin_2){
			A2_UserInterruptFunctionPtr = EXTI_UserInterruptFunctionPtr;
		}else if(pin == Pin_3){
			A3_UserInterruptFunctionPtr = EXTI_UserInterruptFunctionPtr;
		}else if(pin == Pin_4){
			A4_UserInterruptFunctionPtr = EXTI_UserInterruptFunctionPtr;
		}else if(pin == Pin_5){
			A5_UserInterruptFunctionPtr = EXTI_UserInterruptFunctionPtr;
		}else if(pin == Pin_6){
			A6_UserInterruptFunctionPtr = EXTI_UserInterruptFunctionPtr;
		}else if(pin == Pin_7){
			A7_UserInterruptFunctionPtr = EXTI_UserInterruptFunctionPtr;
		}else if(pin == Pin_8){
			A8_UserInterruptFunctionPtr = EXTI_UserInterruptFunctionPtr;
		}else if(pin == Pin_9){
			A9_UserInterruptFunctionPtr = EXTI_UserInterruptFunctionPtr;
		}else if(pin == Pin_10){
			A10_UserInterruptFunctionPtr = EXTI_UserInterruptFunctionPtr;
		}else if(pin == Pin_11){
			A11_UserInterruptFunctionPtr = EXTI_UserInterruptFunctionPtr;
		}else if(pin == Pin_12){
			A12_UserInterruptFunctionPtr = EXTI_UserInterruptFunctionPtr;
		}else if(pin == Pin_13){
			A13_UserInterruptFunctionPtr = EXTI_UserInterruptFunctionPtr;
		}else if(pin == Pin_14){
			A14_UserInterruptFunctionPtr = EXTI_UserInterruptFunctionPtr;
		}else if(pin == Pin_15){
			A15_UserInterruptFunctionPtr = EXTI_UserInterruptFunctionPtr;
		}
	}else if(port == B){
		if(pin == Pin_0){
			B0_UserInterruptFunctionPtr = EXTI_UserInterruptFunctionPtr;
		}else if(pin == Pin_1){
			B1_UserInterruptFunctionPtr = EXTI_UserInterruptFunctionPtr;
		}else if(pin == Pin_2){
			B2_UserInterruptFunctionPtr = EXTI_UserInterruptFunctionPtr;
		}else if(pin == Pin_3){
			B3_UserInterruptFunctionPtr = EXTI_UserInterruptFunctionPtr;
		}else if(pin == Pin_4){
			B4_UserInterruptFunctionPtr = EXTI_UserInterruptFunctionPtr;
		}else if(pin == Pin_5){
			B5_UserInterruptFunctionPtr = EXTI_UserInterruptFunctionPtr;
		}else if(pin == Pin_6){
			B6_UserInterruptFunctionPtr = EXTI_UserInterruptFunctionPtr;
		}else if(pin == Pin_7){
			B7_UserInterruptFunctionPtr = EXTI_UserInterruptFunctionPtr;
		}else if(pin == Pin_8){
			B8_UserInterruptFunctionPtr = EXTI_UserInterruptFunctionPtr;
		}else if(pin == Pin_9){
			B9_UserInterruptFunctionPtr = EXTI_UserInterruptFunctionPtr;
		}else if(pin == Pin_10){
			B10_UserInterruptFunctionPtr = EXTI_UserInterruptFunctionPtr;
		}else if(pin == Pin_11){
			B11_UserInterruptFunctionPtr = EXTI_UserInterruptFunctionPtr;
		}else if(pin == Pin_12){
			B12_UserInterruptFunctionPtr = EXTI_UserInterruptFunctionPtr;
		}else if(pin == Pin_13){
			B13_UserInterruptFunctionPtr = EXTI_UserInterruptFunctionPtr;
		}else if(pin == Pin_14){
			B14_UserInterruptFunctionPtr = EXTI_UserInterruptFunctionPtr;
		}else if(pin == Pin_15){
			B15_UserInterruptFunctionPtr = EXTI_UserInterruptFunctionPtr;
		}
	}else if(port == C){
		if(pin == Pin_0){
			C0_UserInterruptFunctionPtr = EXTI_UserInterruptFunctionPtr;
		}else if(pin == Pin_1){
			C1_UserInterruptFunctionPtr = EXTI_UserInterruptFunctionPtr;
		}else if(pin == Pin_2){
			C2_UserInterruptFunctionPtr = EXTI_UserInterruptFunctionPtr;
		}else if(pin == Pin_3){
			C3_UserInterruptFunctionPtr = EXTI_UserInterruptFunctionPtr;
		}else if(pin == Pin_4){
			C4_UserInterruptFunctionPtr = EXTI_UserInterruptFunctionPtr;
		}else if(pin == Pin_5){
			C5_UserInterruptFunctionPtr = EXTI_UserInterruptFunctionPtr;
		}else if(pin == Pin_6){
			C6_UserInterruptFunctionPtr = EXTI_UserInterruptFunctionPtr;
		}else if(pin == Pin_7){
			C7_UserInterruptFunctionPtr = EXTI_UserInterruptFunctionPtr;
		}else if(pin == Pin_8){
			C8_UserInterruptFunctionPtr = EXTI_UserInterruptFunctionPtr;
		}else if(pin == Pin_9){
			C9_UserInterruptFunctionPtr = EXTI_UserInterruptFunctionPtr;
		}else if(pin == Pin_10){
			C10_UserInterruptFunctionPtr = EXTI_UserInterruptFunctionPtr;
		}else if(pin == Pin_11){
			C11_UserInterruptFunctionPtr = EXTI_UserInterruptFunctionPtr;
		}else if(pin == Pin_12){
			C12_UserInterruptFunctionPtr = EXTI_UserInterruptFunctionPtr;
		}else if(pin == Pin_13){
			C13_UserInterruptFunctionPtr = EXTI_UserInterruptFunctionPtr;
		}else if(pin == Pin_14){
			C14_UserInterruptFunctionPtr = EXTI_UserInterruptFunctionPtr;
		}else if(pin == Pin_15){
			C15_UserInterruptFunctionPtr = EXTI_UserInterruptFunctionPtr;
		}
	}else if(port == D){
		if(pin == Pin_0){
			D0_UserInterruptFunctionPtr = EXTI_UserInterruptFunctionPtr;
		}else if(pin == Pin_1){
			D1_UserInterruptFunctionPtr = EXTI_UserInterruptFunctionPtr;
		}else if(pin == Pin_2){
			D2_UserInterruptFunctionPtr = EXTI_UserInterruptFunctionPtr;
		}else if(pin == Pin_3){
			D3_UserInterruptFunctionPtr = EXTI_UserInterruptFunctionPtr;
		}else if(pin == Pin_4){
			D4_UserInterruptFunctionPtr = EXTI_UserInterruptFunctionPtr;
		}else if(pin == Pin_5){
			D5_UserInterruptFunctionPtr = EXTI_UserInterruptFunctionPtr;
		}else if(pin == Pin_6){
			D6_UserInterruptFunctionPtr = EXTI_UserInterruptFunctionPtr;
		}else if(pin == Pin_7){
			D7_UserInterruptFunctionPtr = EXTI_UserInterruptFunctionPtr;
		}else if(pin == Pin_8){
			D8_UserInterruptFunctionPtr = EXTI_UserInterruptFunctionPtr;
		}else if(pin == Pin_9){
			D9_UserInterruptFunctionPtr = EXTI_UserInterruptFunctionPtr;
		}else if(pin == Pin_10){
			D10_UserInterruptFunctionPtr = EXTI_UserInterruptFunctionPtr;
		}else if(pin == Pin_11){
			D11_UserInterruptFunctionPtr = EXTI_UserInterruptFunctionPtr;
		}else if(pin == Pin_12){
			D12_UserInterruptFunctionPtr = EXTI_UserInterruptFunctionPtr;
		}else if(pin == Pin_13){
			D13_UserInterruptFunctionPtr = EXTI_UserInterruptFunctionPtr;
		}else if(pin == Pin_14){
			D14_UserInterruptFunctionPtr = EXTI_UserInterruptFunctionPtr;
		}else if(pin == Pin_15){
			D15_UserInterruptFunctionPtr = EXTI_UserInterruptFunctionPtr;
		}
	}else if(port == E){
		if(pin == Pin_0){
			E0_UserInterruptFunctionPtr = EXTI_UserInterruptFunctionPtr;
		}else if(pin == Pin_1){
			E1_UserInterruptFunctionPtr = EXTI_UserInterruptFunctionPtr;
		}else if(pin == Pin_2){
			E2_UserInterruptFunctionPtr = EXTI_UserInterruptFunctionPtr;
		}else if(pin == Pin_3){
			E3_UserInterruptFunctionPtr = EXTI_UserInterruptFunctionPtr;
		}else if(pin == Pin_4){
			E4_UserInterruptFunctionPtr = EXTI_UserInterruptFunctionPtr;
		}else if(pin == Pin_5){
			E5_UserInterruptFunctionPtr = EXTI_UserInterruptFunctionPtr;
		}else if(pin == Pin_6){
			E6_UserInterruptFunctionPtr = EXTI_UserInterruptFunctionPtr;
		}else if(pin == Pin_7){
			E7_UserInterruptFunctionPtr = EXTI_UserInterruptFunctionPtr;
		}else if(pin == Pin_8){
			E8_UserInterruptFunctionPtr = EXTI_UserInterruptFunctionPtr;
		}else if(pin == Pin_9){
			E9_UserInterruptFunctionPtr = EXTI_UserInterruptFunctionPtr;
		}else if(pin == Pin_10){
			E10_UserInterruptFunctionPtr = EXTI_UserInterruptFunctionPtr;
		}else if(pin == Pin_11){
			E11_UserInterruptFunctionPtr = EXTI_UserInterruptFunctionPtr;
		}else if(pin == Pin_12){
			E12_UserInterruptFunctionPtr = EXTI_UserInterruptFunctionPtr;
		}else if(pin == Pin_13){
			E13_UserInterruptFunctionPtr = EXTI_UserInterruptFunctionPtr;
		}else if(pin == Pin_14){
			E14_UserInterruptFunctionPtr = EXTI_UserInterruptFunctionPtr;
		}else if(pin == Pin_15){
			E15_UserInterruptFunctionPtr = EXTI_UserInterruptFunctionPtr;
		}
	}else if(port == F){
		if(pin == Pin_0){
			F0_UserInterruptFunctionPtr = EXTI_UserInterruptFunctionPtr;
		}else if(pin == Pin_1){
			F1_UserInterruptFunctionPtr = EXTI_UserInterruptFunctionPtr;
		}else if(pin == Pin_2){
			F2_UserInterruptFunctionPtr = EXTI_UserInterruptFunctionPtr;
		}else if(pin == Pin_3){
			F3_UserInterruptFunctionPtr = EXTI_UserInterruptFunctionPtr;
		}else if(pin == Pin_4){
			F4_UserInterruptFunctionPtr = EXTI_UserInterruptFunctionPtr;
		}else if(pin == Pin_5){
			F5_UserInterruptFunctionPtr = EXTI_UserInterruptFunctionPtr;
		}else if(pin == Pin_6){
			F6_UserInterruptFunctionPtr = EXTI_UserInterruptFunctionPtr;
		}else if(pin == Pin_7){
			F7_UserInterruptFunctionPtr = EXTI_UserInterruptFunctionPtr;
		}else if(pin == Pin_8){
			F8_UserInterruptFunctionPtr = EXTI_UserInterruptFunctionPtr;
		}else if(pin == Pin_9){
			F9_UserInterruptFunctionPtr = EXTI_UserInterruptFunctionPtr;
		}else if(pin == Pin_10){
			F10_UserInterruptFunctionPtr = EXTI_UserInterruptFunctionPtr;
		}else if(pin == Pin_11){
			F11_UserInterruptFunctionPtr = EXTI_UserInterruptFunctionPtr;
		}else if(pin == Pin_12){
			F12_UserInterruptFunctionPtr = EXTI_UserInterruptFunctionPtr;
		}else if(pin == Pin_13){
			F13_UserInterruptFunctionPtr = EXTI_UserInterruptFunctionPtr;
		}else if(pin == Pin_14){
			F14_UserInterruptFunctionPtr = EXTI_UserInterruptFunctionPtr;
		}else if(pin == Pin_15){
			F15_UserInterruptFunctionPtr = EXTI_UserInterruptFunctionPtr;
		}
	}else if(port == G){
		if(pin == Pin_0){
			G0_UserInterruptFunctionPtr = EXTI_UserInterruptFunctionPtr;
		}else if(pin == Pin_1){
			G1_UserInterruptFunctionPtr = EXTI_UserInterruptFunctionPtr;
		}else if(pin == Pin_2){
			G2_UserInterruptFunctionPtr = EXTI_UserInterruptFunctionPtr;
		}else if(pin == Pin_3){
			G3_UserInterruptFunctionPtr = EXTI_UserInterruptFunctionPtr;
		}else if(pin == Pin_4){
			G4_UserInterruptFunctionPtr = EXTI_UserInterruptFunctionPtr;
		}else if(pin == Pin_5){
			G5_UserInterruptFunctionPtr = EXTI_UserInterruptFunctionPtr;
		}else if(pin == Pin_6){
			G6_UserInterruptFunctionPtr = EXTI_UserInterruptFunctionPtr;
		}else if(pin == Pin_7){
			G7_UserInterruptFunctionPtr = EXTI_UserInterruptFunctionPtr;
		}else if(pin == Pin_8){
			G8_UserInterruptFunctionPtr = EXTI_UserInterruptFunctionPtr;
		}else if(pin == Pin_9){
			G9_UserInterruptFunctionPtr = EXTI_UserInterruptFunctionPtr;
		}else if(pin == Pin_10){
			G10_UserInterruptFunctionPtr = EXTI_UserInterruptFunctionPtr;
		}else if(pin == Pin_11){
			G11_UserInterruptFunctionPtr = EXTI_UserInterruptFunctionPtr;
		}else if(pin == Pin_12){
			G12_UserInterruptFunctionPtr = EXTI_UserInterruptFunctionPtr;
		}else if(pin == Pin_13){
			G13_UserInterruptFunctionPtr = EXTI_UserInterruptFunctionPtr;
		}else if(pin == Pin_14){
			G14_UserInterruptFunctionPtr = EXTI_UserInterruptFunctionPtr;
		}else if(pin == Pin_15){
			G15_UserInterruptFunctionPtr = EXTI_UserInterruptFunctionPtr;
		}
	}else if(port == H){
		if(pin == Pin_0){
			H0_UserInterruptFunctionPtr = EXTI_UserInterruptFunctionPtr;
		}else if(pin == Pin_1){
			H1_UserInterruptFunctionPtr = EXTI_UserInterruptFunctionPtr;
		}else if(pin == Pin_2){
			H2_UserInterruptFunctionPtr = EXTI_UserInterruptFunctionPtr;
		}else if(pin == Pin_3){
			H3_UserInterruptFunctionPtr = EXTI_UserInterruptFunctionPtr;
		}else if(pin == Pin_4){
			H4_UserInterruptFunctionPtr = EXTI_UserInterruptFunctionPtr;
		}else if(pin == Pin_5){
			H5_UserInterruptFunctionPtr = EXTI_UserInterruptFunctionPtr;
		}else if(pin == Pin_6){
			H6_UserInterruptFunctionPtr = EXTI_UserInterruptFunctionPtr;
		}else if(pin == Pin_7){
			H7_UserInterruptFunctionPtr = EXTI_UserInterruptFunctionPtr;
		}else if(pin == Pin_8){
			H8_UserInterruptFunctionPtr = EXTI_UserInterruptFunctionPtr;
		}else if(pin == Pin_9){
			H9_UserInterruptFunctionPtr = EXTI_UserInterruptFunctionPtr;
		}else if(pin == Pin_10){
			H10_UserInterruptFunctionPtr = EXTI_UserInterruptFunctionPtr;
		}else if(pin == Pin_11){
			H11_UserInterruptFunctionPtr = EXTI_UserInterruptFunctionPtr;
		}else if(pin == Pin_12){
			H12_UserInterruptFunctionPtr = EXTI_UserInterruptFunctionPtr;
		}else if(pin == Pin_13){
			H13_UserInterruptFunctionPtr = EXTI_UserInterruptFunctionPtr;
		}else if(pin == Pin_14){
			H14_UserInterruptFunctionPtr = EXTI_UserInterruptFunctionPtr;
		}else if(pin == Pin_15){
			H15_UserInterruptFunctionPtr = EXTI_UserInterruptFunctionPtr;
		}
	}else if(port == I){
		if(pin == Pin_0){
			I0_UserInterruptFunctionPtr = EXTI_UserInterruptFunctionPtr;
		}else if(pin == Pin_1){
			I1_UserInterruptFunctionPtr = EXTI_UserInterruptFunctionPtr;
		}else if(pin == Pin_2){
			I2_UserInterruptFunctionPtr = EXTI_UserInterruptFunctionPtr;
		}else if(pin == Pin_3){
			I3_UserInterruptFunctionPtr = EXTI_UserInterruptFunctionPtr;
		}else if(pin == Pin_4){
			I4_UserInterruptFunctionPtr = EXTI_UserInterruptFunctionPtr;
		}else if(pin == Pin_5){
			I5_UserInterruptFunctionPtr = EXTI_UserInterruptFunctionPtr;
		}else if(pin == Pin_6){
			I6_UserInterruptFunctionPtr = EXTI_UserInterruptFunctionPtr;
		}else if(pin == Pin_7){
			I7_UserInterruptFunctionPtr = EXTI_UserInterruptFunctionPtr;
		}else if(pin == Pin_8){
			I8_UserInterruptFunctionPtr = EXTI_UserInterruptFunctionPtr;
		}else if(pin == Pin_9){
			I9_UserInterruptFunctionPtr = EXTI_UserInterruptFunctionPtr;
		}else if(pin == Pin_10){
			I10_UserInterruptFunctionPtr = EXTI_UserInterruptFunctionPtr;
		}else if(pin == Pin_11){
			I11_UserInterruptFunctionPtr = EXTI_UserInterruptFunctionPtr;
		}else if(pin == Pin_12){
			I12_UserInterruptFunctionPtr = EXTI_UserInterruptFunctionPtr;
		}else if(pin == Pin_13){
			I13_UserInterruptFunctionPtr = EXTI_UserInterruptFunctionPtr;
		}else if(pin == Pin_14){
			I14_UserInterruptFunctionPtr = EXTI_UserInterruptFunctionPtr;
		}else if(pin == Pin_15){
			I15_UserInterruptFunctionPtr = EXTI_UserInterruptFunctionPtr;
		}
	}else if(port == J){
		if(pin == Pin_0){
			J0_UserInterruptFunctionPtr = EXTI_UserInterruptFunctionPtr;
		}else if(pin == Pin_1){
			J1_UserInterruptFunctionPtr = EXTI_UserInterruptFunctionPtr;
		}else if(pin == Pin_2){
			J2_UserInterruptFunctionPtr = EXTI_UserInterruptFunctionPtr;
		}else if(pin == Pin_3){
			J3_UserInterruptFunctionPtr = EXTI_UserInterruptFunctionPtr;
		}else if(pin == Pin_4){
			J4_UserInterruptFunctionPtr = EXTI_UserInterruptFunctionPtr;
		}else if(pin == Pin_5){
			J5_UserInterruptFunctionPtr = EXTI_UserInterruptFunctionPtr;
		}else if(pin == Pin_6){
			J6_UserInterruptFunctionPtr = EXTI_UserInterruptFunctionPtr;
		}else if(pin == Pin_7){
			J7_UserInterruptFunctionPtr = EXTI_UserInterruptFunctionPtr;
		}else if(pin == Pin_8){
			J8_UserInterruptFunctionPtr = EXTI_UserInterruptFunctionPtr;
		}else if(pin == Pin_9){
			J9_UserInterruptFunctionPtr = EXTI_UserInterruptFunctionPtr;
		}else if(pin == Pin_10){
			J10_UserInterruptFunctionPtr = EXTI_UserInterruptFunctionPtr;
		}else if(pin == Pin_11){
			J11_UserInterruptFunctionPtr = EXTI_UserInterruptFunctionPtr;
		}else if(pin == Pin_12){
			J12_UserInterruptFunctionPtr = EXTI_UserInterruptFunctionPtr;
		}else if(pin == Pin_13){
			J13_UserInterruptFunctionPtr = EXTI_UserInterruptFunctionPtr;
		}else if(pin == Pin_14){
			J14_UserInterruptFunctionPtr = EXTI_UserInterruptFunctionPtr;
		}else if(pin == Pin_15){
			J15_UserInterruptFunctionPtr = EXTI_UserInterruptFunctionPtr;
		}
	}else if(port == K){
		if(pin == Pin_0){
			K0_UserInterruptFunctionPtr = EXTI_UserInterruptFunctionPtr;
		}else if(pin == Pin_1){
			K1_UserInterruptFunctionPtr = EXTI_UserInterruptFunctionPtr;
		}else if(pin == Pin_2){
			K2_UserInterruptFunctionPtr = EXTI_UserInterruptFunctionPtr;
		}else if(pin == Pin_3){
			K3_UserInterruptFunctionPtr = EXTI_UserInterruptFunctionPtr;
		}else if(pin == Pin_4){
			K4_UserInterruptFunctionPtr = EXTI_UserInterruptFunctionPtr;
		}else if(pin == Pin_5){
			K5_UserInterruptFunctionPtr = EXTI_UserInterruptFunctionPtr;
		}else if(pin == Pin_6){
			K6_UserInterruptFunctionPtr = EXTI_UserInterruptFunctionPtr;
		}else if(pin == Pin_7){
			K7_UserInterruptFunctionPtr = EXTI_UserInterruptFunctionPtr;
		}else if(pin == Pin_8){
			K8_UserInterruptFunctionPtr = EXTI_UserInterruptFunctionPtr;
		}else if(pin == Pin_9){
			K9_UserInterruptFunctionPtr = EXTI_UserInterruptFunctionPtr;
		}else if(pin == Pin_10){
			K10_UserInterruptFunctionPtr = EXTI_UserInterruptFunctionPtr;
		}else if(pin == Pin_11){
			K11_UserInterruptFunctionPtr = EXTI_UserInterruptFunctionPtr;
		}else if(pin == Pin_12){
			K12_UserInterruptFunctionPtr = EXTI_UserInterruptFunctionPtr;
		}else if(pin == Pin_13){
			K13_UserInterruptFunctionPtr = EXTI_UserInterruptFunctionPtr;
		}else if(pin == Pin_14){
			K14_UserInterruptFunctionPtr = EXTI_UserInterruptFunctionPtr;
		}else if(pin == Pin_15){
			K15_UserInterruptFunctionPtr = EXTI_UserInterruptFunctionPtr;
		}
	}
	
	__enable_irq();
}

/**
  * @brief disables user defined function to be executed on interrupt event.
	*
	* @param port: port of specefied pin, can be A, B, C, D, E, F, G, I, J, K.
	* @param pin: number of pin whitch user defined interrupt function to disable.
	*
	* @retval None.
	*/
void EXT_INTERRUPT_DetachUserInterruptFunction(GPIO_TypeDef* port, uint32_t pin){
	__disable_irq();
	
	if(port == A){
		if(pin == Pin_0){
			A0_UserInterruptFunctionPtr = int_nop;
		}else if(pin == Pin_1){
			A1_UserInterruptFunctionPtr = int_nop;
		}else if(pin == Pin_2){
			A2_UserInterruptFunctionPtr = int_nop;
		}else if(pin == Pin_3){
			A3_UserInterruptFunctionPtr = int_nop;
		}else if(pin == Pin_4){
			A4_UserInterruptFunctionPtr = int_nop;
		}else if(pin == Pin_5){
			A5_UserInterruptFunctionPtr = int_nop;
		}else if(pin == Pin_6){
			A6_UserInterruptFunctionPtr = int_nop;
		}else if(pin == Pin_7){
			A7_UserInterruptFunctionPtr = int_nop;
		}else if(pin == Pin_8){
			A8_UserInterruptFunctionPtr = int_nop;
		}else if(pin == Pin_9){
			A9_UserInterruptFunctionPtr = int_nop;
		}else if(pin == Pin_10){
			A10_UserInterruptFunctionPtr = int_nop;
		}else if(pin == Pin_11){
			A11_UserInterruptFunctionPtr = int_nop;
		}else if(pin == Pin_12){
			A12_UserInterruptFunctionPtr = int_nop;
		}else if(pin == Pin_13){
			A13_UserInterruptFunctionPtr = int_nop;
		}else if(pin == Pin_14){
			A14_UserInterruptFunctionPtr = int_nop;
		}else if(pin == Pin_15){
			A15_UserInterruptFunctionPtr = int_nop;
		}
	}else if(port == B){
		if(pin == Pin_0){
			B0_UserInterruptFunctionPtr = int_nop;
		}else if(pin == Pin_1){
			B1_UserInterruptFunctionPtr = int_nop;
		}else if(pin == Pin_2){
			B2_UserInterruptFunctionPtr = int_nop;
		}else if(pin == Pin_3){
			B3_UserInterruptFunctionPtr = int_nop;
		}else if(pin == Pin_4){
			B4_UserInterruptFunctionPtr = int_nop;
		}else if(pin == Pin_5){
			B5_UserInterruptFunctionPtr = int_nop;
		}else if(pin == Pin_6){
			B6_UserInterruptFunctionPtr = int_nop;
		}else if(pin == Pin_7){
			B7_UserInterruptFunctionPtr = int_nop;
		}else if(pin == Pin_8){
			B8_UserInterruptFunctionPtr = int_nop;
		}else if(pin == Pin_9){
			B9_UserInterruptFunctionPtr = int_nop;
		}else if(pin == Pin_10){
			B10_UserInterruptFunctionPtr = int_nop;
		}else if(pin == Pin_11){
			B11_UserInterruptFunctionPtr = int_nop;
		}else if(pin == Pin_12){
			B12_UserInterruptFunctionPtr = int_nop;
		}else if(pin == Pin_13){
			B13_UserInterruptFunctionPtr = int_nop;
		}else if(pin == Pin_14){
			B14_UserInterruptFunctionPtr = int_nop;
		}else if(pin == Pin_15){
			B15_UserInterruptFunctionPtr = int_nop;
		}
	}else if(port == C){
		if(pin == Pin_0){
			C0_UserInterruptFunctionPtr = int_nop;
		}else if(pin == Pin_1){
			C1_UserInterruptFunctionPtr = int_nop;
		}else if(pin == Pin_2){
			C2_UserInterruptFunctionPtr = int_nop;
		}else if(pin == Pin_3){
			C3_UserInterruptFunctionPtr = int_nop;
		}else if(pin == Pin_4){
			C4_UserInterruptFunctionPtr = int_nop;
		}else if(pin == Pin_5){
			C5_UserInterruptFunctionPtr = int_nop;
		}else if(pin == Pin_6){
			C6_UserInterruptFunctionPtr = int_nop;
		}else if(pin == Pin_7){
			C7_UserInterruptFunctionPtr = int_nop;
		}else if(pin == Pin_8){
			C8_UserInterruptFunctionPtr = int_nop;
		}else if(pin == Pin_9){
			C9_UserInterruptFunctionPtr = int_nop;
		}else if(pin == Pin_10){
			C10_UserInterruptFunctionPtr = int_nop;
		}else if(pin == Pin_11){
			C11_UserInterruptFunctionPtr = int_nop;
		}else if(pin == Pin_12){
			C12_UserInterruptFunctionPtr = int_nop;
		}else if(pin == Pin_13){
			C13_UserInterruptFunctionPtr = int_nop;
		}else if(pin == Pin_14){
			C14_UserInterruptFunctionPtr = int_nop;
		}else if(pin == Pin_15){
			C15_UserInterruptFunctionPtr = int_nop;
		}
	}else if(port == D){
		if(pin == Pin_0){
			D0_UserInterruptFunctionPtr = int_nop;
		}else if(pin == Pin_1){
			D1_UserInterruptFunctionPtr = int_nop;
		}else if(pin == Pin_2){
			D2_UserInterruptFunctionPtr = int_nop;
		}else if(pin == Pin_3){
			D3_UserInterruptFunctionPtr = int_nop;
		}else if(pin == Pin_4){
			D4_UserInterruptFunctionPtr = int_nop;
		}else if(pin == Pin_5){
			D5_UserInterruptFunctionPtr = int_nop;
		}else if(pin == Pin_6){
			D6_UserInterruptFunctionPtr = int_nop;
		}else if(pin == Pin_7){
			D7_UserInterruptFunctionPtr = int_nop;
		}else if(pin == Pin_8){
			D8_UserInterruptFunctionPtr = int_nop;
		}else if(pin == Pin_9){
			D9_UserInterruptFunctionPtr = int_nop;
		}else if(pin == Pin_10){
			D10_UserInterruptFunctionPtr = int_nop;
		}else if(pin == Pin_11){
			D11_UserInterruptFunctionPtr = int_nop;
		}else if(pin == Pin_12){
			D12_UserInterruptFunctionPtr = int_nop;
		}else if(pin == Pin_13){
			D13_UserInterruptFunctionPtr = int_nop;
		}else if(pin == Pin_14){
			D14_UserInterruptFunctionPtr = int_nop;
		}else if(pin == Pin_15){
			D15_UserInterruptFunctionPtr = int_nop;
		}
	}else if(port == E){
		if(pin == Pin_0){
			E0_UserInterruptFunctionPtr = int_nop;
		}else if(pin == Pin_1){
			E1_UserInterruptFunctionPtr = int_nop;
		}else if(pin == Pin_2){
			E2_UserInterruptFunctionPtr = int_nop;
		}else if(pin == Pin_3){
			E3_UserInterruptFunctionPtr = int_nop;
		}else if(pin == Pin_4){
			E4_UserInterruptFunctionPtr = int_nop;
		}else if(pin == Pin_5){
			E5_UserInterruptFunctionPtr = int_nop;
		}else if(pin == Pin_6){
			E6_UserInterruptFunctionPtr = int_nop;
		}else if(pin == Pin_7){
			E7_UserInterruptFunctionPtr = int_nop;
		}else if(pin == Pin_8){
			E8_UserInterruptFunctionPtr = int_nop;
		}else if(pin == Pin_9){
			E9_UserInterruptFunctionPtr = int_nop;
		}else if(pin == Pin_10){
			E10_UserInterruptFunctionPtr = int_nop;
		}else if(pin == Pin_11){
			E11_UserInterruptFunctionPtr = int_nop;
		}else if(pin == Pin_12){
			E12_UserInterruptFunctionPtr = int_nop;
		}else if(pin == Pin_13){
			E13_UserInterruptFunctionPtr = int_nop;
		}else if(pin == Pin_14){
			E14_UserInterruptFunctionPtr = int_nop;
		}else if(pin == Pin_15){
			E15_UserInterruptFunctionPtr = int_nop;
		}
	}else if(port == F){
		if(pin == Pin_0){
			F0_UserInterruptFunctionPtr = int_nop;
		}else if(pin == Pin_1){
			F1_UserInterruptFunctionPtr = int_nop;
		}else if(pin == Pin_2){
			F2_UserInterruptFunctionPtr = int_nop;
		}else if(pin == Pin_3){
			F3_UserInterruptFunctionPtr = int_nop;
		}else if(pin == Pin_4){
			F4_UserInterruptFunctionPtr = int_nop;
		}else if(pin == Pin_5){
			F5_UserInterruptFunctionPtr = int_nop;
		}else if(pin == Pin_6){
			F6_UserInterruptFunctionPtr = int_nop;
		}else if(pin == Pin_7){
			F7_UserInterruptFunctionPtr = int_nop;
		}else if(pin == Pin_8){
			F8_UserInterruptFunctionPtr = int_nop;
		}else if(pin == Pin_9){
			F9_UserInterruptFunctionPtr = int_nop;
		}else if(pin == Pin_10){
			F10_UserInterruptFunctionPtr = int_nop;
		}else if(pin == Pin_11){
			F11_UserInterruptFunctionPtr = int_nop;
		}else if(pin == Pin_12){
			F12_UserInterruptFunctionPtr = int_nop;
		}else if(pin == Pin_13){
			F13_UserInterruptFunctionPtr = int_nop;
		}else if(pin == Pin_14){
			F14_UserInterruptFunctionPtr = int_nop;
		}else if(pin == Pin_15){
			F15_UserInterruptFunctionPtr = int_nop;
		}
	}else if(port == G){
		if(pin == Pin_0){
			G0_UserInterruptFunctionPtr = int_nop;
		}else if(pin == Pin_1){
			G1_UserInterruptFunctionPtr = int_nop;
		}else if(pin == Pin_2){
			G2_UserInterruptFunctionPtr = int_nop;
		}else if(pin == Pin_3){
			G3_UserInterruptFunctionPtr = int_nop;
		}else if(pin == Pin_4){
			G4_UserInterruptFunctionPtr = int_nop;
		}else if(pin == Pin_5){
			G5_UserInterruptFunctionPtr = int_nop;
		}else if(pin == Pin_6){
			G6_UserInterruptFunctionPtr = int_nop;
		}else if(pin == Pin_7){
			G7_UserInterruptFunctionPtr = int_nop;
		}else if(pin == Pin_8){
			G8_UserInterruptFunctionPtr = int_nop;
		}else if(pin == Pin_9){
			G9_UserInterruptFunctionPtr = int_nop;
		}else if(pin == Pin_10){
			G10_UserInterruptFunctionPtr = int_nop;
		}else if(pin == Pin_11){
			G11_UserInterruptFunctionPtr = int_nop;
		}else if(pin == Pin_12){
			G12_UserInterruptFunctionPtr = int_nop;
		}else if(pin == Pin_13){
			G13_UserInterruptFunctionPtr = int_nop;
		}else if(pin == Pin_14){
			G14_UserInterruptFunctionPtr = int_nop;
		}else if(pin == Pin_15){
			G15_UserInterruptFunctionPtr = int_nop;
		}
	}else if(port == H){
		if(pin == Pin_0){
			H0_UserInterruptFunctionPtr = int_nop;
		}else if(pin == Pin_1){
			H1_UserInterruptFunctionPtr = int_nop;
		}else if(pin == Pin_2){
			H2_UserInterruptFunctionPtr = int_nop;
		}else if(pin == Pin_3){
			H3_UserInterruptFunctionPtr = int_nop;
		}else if(pin == Pin_4){
			H4_UserInterruptFunctionPtr = int_nop;
		}else if(pin == Pin_5){
			H5_UserInterruptFunctionPtr = int_nop;
		}else if(pin == Pin_6){
			H6_UserInterruptFunctionPtr = int_nop;
		}else if(pin == Pin_7){
			H7_UserInterruptFunctionPtr = int_nop;
		}else if(pin == Pin_8){
			H8_UserInterruptFunctionPtr = int_nop;
		}else if(pin == Pin_9){
			H9_UserInterruptFunctionPtr = int_nop;
		}else if(pin == Pin_10){
			H10_UserInterruptFunctionPtr = int_nop;
		}else if(pin == Pin_11){
			H11_UserInterruptFunctionPtr = int_nop;
		}else if(pin == Pin_12){
			H12_UserInterruptFunctionPtr = int_nop;
		}else if(pin == Pin_13){
			H13_UserInterruptFunctionPtr = int_nop;
		}else if(pin == Pin_14){
			H14_UserInterruptFunctionPtr = int_nop;
		}else if(pin == Pin_15){
			H15_UserInterruptFunctionPtr = int_nop;
		}
	}else if(port == I){
		if(pin == Pin_0){
			I0_UserInterruptFunctionPtr = int_nop;
		}else if(pin == Pin_1){
			I1_UserInterruptFunctionPtr = int_nop;
		}else if(pin == Pin_2){
			I2_UserInterruptFunctionPtr = int_nop;
		}else if(pin == Pin_3){
			I3_UserInterruptFunctionPtr = int_nop;
		}else if(pin == Pin_4){
			I4_UserInterruptFunctionPtr = int_nop;
		}else if(pin == Pin_5){
			I5_UserInterruptFunctionPtr = int_nop;
		}else if(pin == Pin_6){
			I6_UserInterruptFunctionPtr = int_nop;
		}else if(pin == Pin_7){
			I7_UserInterruptFunctionPtr = int_nop;
		}else if(pin == Pin_8){
			I8_UserInterruptFunctionPtr = int_nop;
		}else if(pin == Pin_9){
			I9_UserInterruptFunctionPtr = int_nop;
		}else if(pin == Pin_10){
			I10_UserInterruptFunctionPtr = int_nop;
		}else if(pin == Pin_11){
			I11_UserInterruptFunctionPtr = int_nop;
		}else if(pin == Pin_12){
			I12_UserInterruptFunctionPtr = int_nop;
		}else if(pin == Pin_13){
			I13_UserInterruptFunctionPtr = int_nop;
		}else if(pin == Pin_14){
			I14_UserInterruptFunctionPtr = int_nop;
		}else if(pin == Pin_15){
			I15_UserInterruptFunctionPtr = int_nop;
		}
	}else if(port == J){
		if(pin == Pin_0){
			J0_UserInterruptFunctionPtr = int_nop;
		}else if(pin == Pin_1){
			J1_UserInterruptFunctionPtr = int_nop;
		}else if(pin == Pin_2){
			J2_UserInterruptFunctionPtr = int_nop;
		}else if(pin == Pin_3){
			J3_UserInterruptFunctionPtr = int_nop;
		}else if(pin == Pin_4){
			J4_UserInterruptFunctionPtr = int_nop;
		}else if(pin == Pin_5){
			J5_UserInterruptFunctionPtr = int_nop;
		}else if(pin == Pin_6){
			J6_UserInterruptFunctionPtr = int_nop;
		}else if(pin == Pin_7){
			J7_UserInterruptFunctionPtr = int_nop;
		}else if(pin == Pin_8){
			J8_UserInterruptFunctionPtr = int_nop;
		}else if(pin == Pin_9){
			J9_UserInterruptFunctionPtr = int_nop;
		}else if(pin == Pin_10){
			J10_UserInterruptFunctionPtr = int_nop;
		}else if(pin == Pin_11){
			J11_UserInterruptFunctionPtr = int_nop;
		}else if(pin == Pin_12){
			J12_UserInterruptFunctionPtr = int_nop;
		}else if(pin == Pin_13){
			J13_UserInterruptFunctionPtr = int_nop;
		}else if(pin == Pin_14){
			J14_UserInterruptFunctionPtr = int_nop;
		}else if(pin == Pin_15){
			J15_UserInterruptFunctionPtr = int_nop;
		}
	}else if(port == K){
		if(pin == Pin_0){
			K0_UserInterruptFunctionPtr = int_nop;
		}else if(pin == Pin_1){
			K1_UserInterruptFunctionPtr = int_nop;
		}else if(pin == Pin_2){
			K2_UserInterruptFunctionPtr = int_nop;
		}else if(pin == Pin_3){
			K3_UserInterruptFunctionPtr = int_nop;
		}else if(pin == Pin_4){
			K4_UserInterruptFunctionPtr = int_nop;
		}else if(pin == Pin_5){
			K5_UserInterruptFunctionPtr = int_nop;
		}else if(pin == Pin_6){
			K6_UserInterruptFunctionPtr = int_nop;
		}else if(pin == Pin_7){
			K7_UserInterruptFunctionPtr = int_nop;
		}else if(pin == Pin_8){
			K8_UserInterruptFunctionPtr = int_nop;
		}else if(pin == Pin_9){
			K9_UserInterruptFunctionPtr = int_nop;
		}else if(pin == Pin_10){
			K10_UserInterruptFunctionPtr = int_nop;
		}else if(pin == Pin_11){
			K11_UserInterruptFunctionPtr = int_nop;
		}else if(pin == Pin_12){
			K12_UserInterruptFunctionPtr = int_nop;
		}else if(pin == Pin_13){
			K13_UserInterruptFunctionPtr = int_nop;
		}else if(pin == Pin_14){
			K14_UserInterruptFunctionPtr = int_nop;
		}else if(pin == Pin_15){
			K15_UserInterruptFunctionPtr = int_nop;
		}
	}
	
	__enable_irq();
}

void EXTI0_IRQHandler(void) {
	if (EXTI_GetITStatus(EXTI_Line0) != RESET) {
		(*A0_UserInterruptFunctionPtr)();
		(*B0_UserInterruptFunctionPtr)();
		(*C0_UserInterruptFunctionPtr)();
		(*D0_UserInterruptFunctionPtr)();
		(*E0_UserInterruptFunctionPtr)();
		(*F0_UserInterruptFunctionPtr)();
		(*G0_UserInterruptFunctionPtr)();
		(*H0_UserInterruptFunctionPtr)();
		(*I0_UserInterruptFunctionPtr)();
		(*J0_UserInterruptFunctionPtr)();
		(*K0_UserInterruptFunctionPtr)();
    EXTI_ClearITPendingBit(EXTI_Line0);
	}
}

void EXTI1_IRQHandler(void){
	if(EXTI_GetITStatus(EXTI_Line1) != RESET){
		(*A1_UserInterruptFunctionPtr)();
		(*B1_UserInterruptFunctionPtr)();
		(*C1_UserInterruptFunctionPtr)();
		(*D1_UserInterruptFunctionPtr)();
		(*E1_UserInterruptFunctionPtr)();
		(*F1_UserInterruptFunctionPtr)();
		(*G1_UserInterruptFunctionPtr)();
		(*H1_UserInterruptFunctionPtr)();
		(*I1_UserInterruptFunctionPtr)();
		(*J1_UserInterruptFunctionPtr)();
		(*K1_UserInterruptFunctionPtr)();
		EXTI_ClearITPendingBit(EXTI_Line1);
	}
}

void EXTI2_IRQHandler(void){
	if(EXTI_GetITStatus(EXTI_Line2) != RESET){
		(*A2_UserInterruptFunctionPtr)();
		(*B2_UserInterruptFunctionPtr)();
		(*C2_UserInterruptFunctionPtr)();
		(*D2_UserInterruptFunctionPtr)();
		(*E2_UserInterruptFunctionPtr)();
		(*F2_UserInterruptFunctionPtr)();
		(*G2_UserInterruptFunctionPtr)();
		(*H2_UserInterruptFunctionPtr)();
		(*I2_UserInterruptFunctionPtr)();
		(*J2_UserInterruptFunctionPtr)();
		(*K2_UserInterruptFunctionPtr)();
		EXTI_ClearITPendingBit(EXTI_Line2);
	}
}

void EXTI3_IRQHandler(void){
	if(EXTI_GetITStatus(EXTI_Line3) != RESET){
		(*A3_UserInterruptFunctionPtr)();
		(*B3_UserInterruptFunctionPtr)();
		(*C3_UserInterruptFunctionPtr)();
		(*D3_UserInterruptFunctionPtr)();
		(*E3_UserInterruptFunctionPtr)();
		(*F3_UserInterruptFunctionPtr)();
		(*G3_UserInterruptFunctionPtr)();
		(*H3_UserInterruptFunctionPtr)();
		(*I3_UserInterruptFunctionPtr)();
		(*J3_UserInterruptFunctionPtr)();
		(*K3_UserInterruptFunctionPtr)();
		EXTI_ClearITPendingBit(EXTI_Line3);
	}
}

void EXTI4_IRQHandler(void){
	if(EXTI_GetITStatus(EXTI_Line4) != RESET){
		(*A4_UserInterruptFunctionPtr)();
		(*B4_UserInterruptFunctionPtr)();
		(*C4_UserInterruptFunctionPtr)();
		(*D4_UserInterruptFunctionPtr)();
		(*E4_UserInterruptFunctionPtr)();
		(*F4_UserInterruptFunctionPtr)();
		(*G4_UserInterruptFunctionPtr)();
		(*H4_UserInterruptFunctionPtr)();
		(*I4_UserInterruptFunctionPtr)();
		(*J4_UserInterruptFunctionPtr)();
		(*K4_UserInterruptFunctionPtr)();
		EXTI_ClearITPendingBit(EXTI_Line4);
	}
}

void EXTI9_5_IRQHandler(void){
	if(EXTI_GetITStatus(EXTI_Line5) != RESET){
		(*A5_UserInterruptFunctionPtr)();
		(*B5_UserInterruptFunctionPtr)();
		(*C5_UserInterruptFunctionPtr)();
		(*D5_UserInterruptFunctionPtr)();
		(*E5_UserInterruptFunctionPtr)();
		(*F5_UserInterruptFunctionPtr)();
		(*G5_UserInterruptFunctionPtr)();
		(*H5_UserInterruptFunctionPtr)();
		(*I5_UserInterruptFunctionPtr)();
		(*J5_UserInterruptFunctionPtr)();
		(*K5_UserInterruptFunctionPtr)();
		EXTI_ClearITPendingBit(EXTI_Line5);
	}else if(EXTI_GetITStatus(EXTI_Line6) != RESET){
		(*A6_UserInterruptFunctionPtr)();
		(*B6_UserInterruptFunctionPtr)();
		(*C6_UserInterruptFunctionPtr)();
		(*D6_UserInterruptFunctionPtr)();
		(*E6_UserInterruptFunctionPtr)();
		(*F6_UserInterruptFunctionPtr)();
		(*G6_UserInterruptFunctionPtr)();
		(*H6_UserInterruptFunctionPtr)();
		(*I6_UserInterruptFunctionPtr)();
		(*J6_UserInterruptFunctionPtr)();
		(*K6_UserInterruptFunctionPtr)();
		EXTI_ClearITPendingBit(EXTI_Line6);
	}else if(EXTI_GetITStatus(EXTI_Line7) != RESET){
		(*A7_UserInterruptFunctionPtr)();
		(*B7_UserInterruptFunctionPtr)();
		(*C7_UserInterruptFunctionPtr)();
		(*D7_UserInterruptFunctionPtr)();
		(*E7_UserInterruptFunctionPtr)();
		(*F7_UserInterruptFunctionPtr)();
		(*G7_UserInterruptFunctionPtr)();
		(*H7_UserInterruptFunctionPtr)();
		(*I7_UserInterruptFunctionPtr)();
		(*J7_UserInterruptFunctionPtr)();
		(*K7_UserInterruptFunctionPtr)();
		EXTI_ClearITPendingBit(EXTI_Line7);
	}else if(EXTI_GetITStatus(EXTI_Line8) != RESET){
		(*A8_UserInterruptFunctionPtr)();
		(*B8_UserInterruptFunctionPtr)();
		(*C8_UserInterruptFunctionPtr)();
		(*D8_UserInterruptFunctionPtr)();
		(*E8_UserInterruptFunctionPtr)();
		(*F8_UserInterruptFunctionPtr)();
		(*G8_UserInterruptFunctionPtr)();
		(*H8_UserInterruptFunctionPtr)();
		(*I8_UserInterruptFunctionPtr)();
		(*J8_UserInterruptFunctionPtr)();
		(*K8_UserInterruptFunctionPtr)();
		EXTI_ClearITPendingBit(EXTI_Line8);
	}else if(EXTI_GetITStatus(EXTI_Line9) != RESET){
		(*A9_UserInterruptFunctionPtr)();
		(*B9_UserInterruptFunctionPtr)();
		(*C9_UserInterruptFunctionPtr)();
		(*D9_UserInterruptFunctionPtr)();
		(*E9_UserInterruptFunctionPtr)();
		(*F9_UserInterruptFunctionPtr)();
		(*G9_UserInterruptFunctionPtr)();
		(*H9_UserInterruptFunctionPtr)();
		(*I9_UserInterruptFunctionPtr)();
		(*J9_UserInterruptFunctionPtr)();
		(*K9_UserInterruptFunctionPtr)();
		EXTI_ClearITPendingBit(EXTI_Line9);
	}
}

void EXTI15_10_IRQHandler(void){
	if(EXTI_GetITStatus(EXTI_Line10) != RESET){
		(*A10_UserInterruptFunctionPtr)();
		(*B10_UserInterruptFunctionPtr)();
		(*C10_UserInterruptFunctionPtr)();
		(*D10_UserInterruptFunctionPtr)();
		(*E10_UserInterruptFunctionPtr)();
		(*F10_UserInterruptFunctionPtr)();
		(*G10_UserInterruptFunctionPtr)();
		(*H10_UserInterruptFunctionPtr)();
		(*I10_UserInterruptFunctionPtr)();
		(*J10_UserInterruptFunctionPtr)();
		(*K10_UserInterruptFunctionPtr)();
		EXTI_ClearITPendingBit(EXTI_Line10);
	}else if(EXTI_GetITStatus(EXTI_Line11) != RESET){
		(*A11_UserInterruptFunctionPtr)();
		(*B11_UserInterruptFunctionPtr)();
		(*C11_UserInterruptFunctionPtr)();
		(*D11_UserInterruptFunctionPtr)();
		(*E11_UserInterruptFunctionPtr)();
		(*F11_UserInterruptFunctionPtr)();
		(*G11_UserInterruptFunctionPtr)();
		(*H11_UserInterruptFunctionPtr)();
		(*I11_UserInterruptFunctionPtr)();
		(*J11_UserInterruptFunctionPtr)();
		(*K11_UserInterruptFunctionPtr)();
		EXTI_ClearITPendingBit(EXTI_Line11);
	}else if(EXTI_GetITStatus(EXTI_Line12) != RESET){
		(*A12_UserInterruptFunctionPtr)();
		(*B12_UserInterruptFunctionPtr)();
		(*C12_UserInterruptFunctionPtr)();
		(*D12_UserInterruptFunctionPtr)();
		(*E12_UserInterruptFunctionPtr)();
		(*F12_UserInterruptFunctionPtr)();
		(*G12_UserInterruptFunctionPtr)();
		(*H12_UserInterruptFunctionPtr)();
		(*I12_UserInterruptFunctionPtr)();
		(*J12_UserInterruptFunctionPtr)();
		(*K12_UserInterruptFunctionPtr)();
		EXTI_ClearITPendingBit(EXTI_Line12);
	}else if(EXTI_GetITStatus(EXTI_Line13) != RESET){
		(*A13_UserInterruptFunctionPtr)();
		(*B13_UserInterruptFunctionPtr)();
		(*C13_UserInterruptFunctionPtr)();
		(*D13_UserInterruptFunctionPtr)();
		(*E13_UserInterruptFunctionPtr)();
		(*F13_UserInterruptFunctionPtr)();
		(*G13_UserInterruptFunctionPtr)();
		(*H13_UserInterruptFunctionPtr)();
		(*I13_UserInterruptFunctionPtr)();
		(*J13_UserInterruptFunctionPtr)();
		(*K13_UserInterruptFunctionPtr)();
		EXTI_ClearITPendingBit(EXTI_Line13);
	}else if(EXTI_GetITStatus(EXTI_Line14) != RESET){
		(*A14_UserInterruptFunctionPtr)();
		(*B14_UserInterruptFunctionPtr)();
		(*C14_UserInterruptFunctionPtr)();
		(*D14_UserInterruptFunctionPtr)();
		(*E14_UserInterruptFunctionPtr)();
		(*F14_UserInterruptFunctionPtr)();
		(*G14_UserInterruptFunctionPtr)();
		(*H14_UserInterruptFunctionPtr)();
		(*I14_UserInterruptFunctionPtr)();
		(*J14_UserInterruptFunctionPtr)();
		(*K14_UserInterruptFunctionPtr)();
		EXTI_ClearITPendingBit(EXTI_Line14);
	}else if(EXTI_GetITStatus(EXTI_Line15) != RESET){
		(*A15_UserInterruptFunctionPtr)();
		(*B15_UserInterruptFunctionPtr)();
		(*C15_UserInterruptFunctionPtr)();
		(*D15_UserInterruptFunctionPtr)();
		(*E15_UserInterruptFunctionPtr)();
		(*F15_UserInterruptFunctionPtr)();
		(*G15_UserInterruptFunctionPtr)();
		(*H15_UserInterruptFunctionPtr)();
		(*I15_UserInterruptFunctionPtr)();
		(*J15_UserInterruptFunctionPtr)();
		(*K15_UserInterruptFunctionPtr)();
		EXTI_ClearITPendingBit(EXTI_Line15);
	}
}
