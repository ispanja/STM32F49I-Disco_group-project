#include <timers.h>

void nop(void){};

volatile uint32_t TIM1_Micros;
uint32_t TIM1_MicrosPerInterrupt;
void (*TIM1_UserInterruptFunctionPtr)() = &nop;
volatile uint8_t TIM1_CountdownFlag;
volatile uint32_t TIM1_Countdown;
uint32_t TIM1_CountdownTop;
	
volatile uint32_t TIM2_Micros;
uint32_t TIM2_MicrosPerInterrupt;
void (*TIM2_UserInterruptFunctionPtr)() = &nop;
volatile uint8_t TIM2_CountdownFlag;
volatile uint32_t TIM2_Countdown;
uint32_t TIM2_CountdownTop;
	
volatile uint32_t TIM3_Micros;
uint32_t TIM3_MicrosPerInterrupt;
void (*TIM3_UserInterruptFunctionPtr)() = &nop;
volatile uint8_t TIM3_CountdownFlag;
volatile uint32_t TIM3_Countdown;
uint32_t TIM3_CountdownTop;

volatile uint32_t TIM4_Micros;
uint32_t TIM4_MicrosPerInterrupt;
void (*TIM4_UserInterruptFunctionPtr)() = &nop;
volatile uint8_t TIM4_CountdownFlag;
volatile uint32_t TIM4_Countdown;
uint32_t TIM4_CountdownTop;

volatile uint32_t TIM5_Micros;
uint32_t TIM5_MicrosPerInterrupt;
void (*TIM5_UserInterruptFunctionPtr)() = &nop;
volatile uint8_t TIM5_CountdownFlag;
volatile uint32_t TIM5_Countdown;
uint32_t TIM5_CountdownTop;

volatile uint32_t TIM6_Micros;
uint32_t TIM6_MicrosPerInterrupt;
void (*TIM6_UserInterruptFunctionPtr)() = &nop;
volatile uint8_t TIM6_CountdownFlag;
volatile uint32_t TIM6_Countdown;
uint32_t TIM6_CountdownTop;

volatile uint32_t TIM7_Micros;
uint32_t TIM7_MicrosPerInterrupt;
void (*TIM7_UserInterruptFunctionPtr)() = &nop;
volatile uint8_t TIM7_CountdownFlag;
volatile uint32_t TIM7_Countdown;
uint32_t TIM7_CountdownTop;

volatile uint32_t TIM8_Micros;
uint32_t TIM8_MicrosPerInterrupt;
void (*TIM8_UserInterruptFunctionPtr)() = &nop;
volatile uint8_t TIM8_CountdownFlag;
volatile uint32_t TIM8_Countdown;
uint32_t TIM8_CountdownTop;

volatile uint32_t TIM9_Micros;
uint32_t TIM9_MicrosPerInterrupt;
void (*TIM9_UserInterruptFunctionPtr)() = &nop;
volatile uint8_t TIM9_CountdownFlag;
volatile uint32_t TIM9_Countdown;
uint32_t TIM9_CountdownTop;

volatile uint32_t TIM10_Micros;
uint32_t TIM10_MicrosPerInterrupt;
void (*TIM10_UserInterruptFunctionPtr)() = &nop;
volatile uint8_t TIM10_CountdownFlag;
volatile uint32_t TIM10_Countdown;
uint32_t TIM10_CountdownTop;

volatile uint32_t TIM11_Micros;
uint32_t TIM11_MicrosPerInterrupt;
void (*TIM11_UserInterruptFunctionPtr)() = &nop;
volatile uint8_t TIM11_CountdownFlag;
volatile uint32_t TIM11_Countdown;
uint32_t TIM11_CountdownTop;

volatile uint32_t TIM12_Micros;
uint32_t TIM12_MicrosPerInterrupt;
void (*TIM12_UserInterruptFunctionPtr)() = &nop;
volatile uint8_t TIM12_CountdownFlag;
volatile uint32_t TIM12_Countdown;
uint32_t TIM12_CountdownTop;

volatile uint32_t TIM13_Micros;
uint32_t TIM13_MicrosPerInterrupt;
void (*TIM13_UserInterruptFunctionPtr)() = &nop;
volatile uint8_t TIM13_CountdownFlag;
volatile uint32_t TIM13_Countdown;
uint32_t TIM13_CountdownTop;

volatile uint32_t TIM14_Micros;
uint32_t TIM14_MicrosPerInterrupt;
void (*TIM14_UserInterruptFunctionPtr)() = &nop;
volatile uint8_t TIM14_CountdownFlag;
volatile uint32_t TIM14_Countdown;
uint32_t TIM14_CountdownTop;

/**
  * @brief Initializes chosen timer
	*
	* @param TIMx: where x can be 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14 to select whitch timer to initialize.
	* @param TIM_Prescaler: can be value from 0 to 65535 and it is used to scale down frequency of clock to witch is timer conected.
	* @param TIM_Period: can be value from 0 to 65535
	*
	* @retval None
	*/
void TIM_Init(TIM_TypeDef* TIMx, uint16_t TIM_Prescaler, uint16_t TIM_Period){
	TIM_TimeBaseInitTypeDef TIM_BaseInitStruct;
	NVIC_InitTypeDef NVIC_InitStructure;
	RCC_ClocksTypeDef RCC_Clocks;
	uint32_t RCC_APB1Clock;
	uint32_t RCC_APB2Clock;
	uint8_t RCC_APB_TIM_Constant;
	
	RCC_GetClocksFreq(&RCC_Clocks);
	RCC_APB1Clock = RCC_Clocks.PCLK1_Frequency;
	RCC_APB2Clock = RCC_Clocks.PCLK2_Frequency;
	
	if(TIM_Prescaler == 1){
		RCC_APB_TIM_Constant = 1;
	}else{
		RCC_APB_TIM_Constant = 2;
	}

	//general parameters for all timers
	TIM_BaseInitStruct.TIM_CounterMode = TIM_CounterMode_Up;
	TIM_BaseInitStruct.TIM_ClockDivision = 0;
	TIM_BaseInitStruct.TIM_RepetitionCounter = 0;
	TIM_BaseInitStruct.TIM_Prescaler = TIM_Prescaler;
	TIM_BaseInitStruct.TIM_Period = TIM_Period;
	
	NVIC_InitStructure.NVIC_IRQChannelPreemptionPriority = 0;  
	NVIC_InitStructure.NVIC_IRQChannelSubPriority = 0;  
	NVIC_InitStructure.NVIC_IRQChannelCmd = ENABLE;  
	
	if(TIM_Prescaler == 0){
		TIM_Prescaler = 1;
	}
	
	//timer specific parameters
	if(TIMx == TIM1){
		RCC_APB2PeriphClockCmd(RCC_APB2Periph_TIM1, ENABLE);
		NVIC_InitStructure.NVIC_IRQChannel = TIM1_UP_TIM10_IRQn;
		TIM1_MicrosPerInterrupt = (1.0 / (double)((RCC_APB2Clock * RCC_APB_TIM_Constant) / TIM_Prescaler / TIM_Period)) * 1000000;
	}else if(TIMx == TIM2){
		RCC_APB1PeriphClockCmd(RCC_APB1Periph_TIM2, ENABLE);
		NVIC_InitStructure.NVIC_IRQChannel = TIM2_IRQn;
		TIM2_MicrosPerInterrupt = (1.0 / (double)((RCC_APB1Clock * RCC_APB_TIM_Constant) / TIM_Prescaler / TIM_Period)) * 1000000;
	}else if(TIMx == TIM3){
		RCC_APB1PeriphClockCmd(RCC_APB1Periph_TIM3, ENABLE);
		NVIC_InitStructure.NVIC_IRQChannel = TIM3_IRQn;
		TIM3_MicrosPerInterrupt = (1.0 / (double)((RCC_APB1Clock * RCC_APB_TIM_Constant) / TIM_Prescaler / TIM_Period)) * 1000000;
	}else if(TIMx == TIM4){
		RCC_APB1PeriphClockCmd(RCC_APB1Periph_TIM4, ENABLE);
		NVIC_InitStructure.NVIC_IRQChannel = TIM4_IRQn;
		TIM4_MicrosPerInterrupt = (1.0 / (double)((RCC_APB1Clock * RCC_APB_TIM_Constant) / TIM_Prescaler / TIM_Period)) * 1000000;
	}else if(TIMx == TIM5){
		RCC_APB1PeriphClockCmd(RCC_APB1Periph_TIM5, ENABLE);
		NVIC_InitStructure.NVIC_IRQChannel = TIM5_IRQn;
		TIM5_MicrosPerInterrupt = (1.0 / (double)((RCC_APB1Clock * RCC_APB_TIM_Constant) / TIM_Prescaler / TIM_Period)) * 1000000;
	}else if(TIMx == TIM6){
		RCC_APB1PeriphClockCmd(RCC_APB1Periph_TIM6, ENABLE);
		NVIC_InitStructure.NVIC_IRQChannel = TIM6_DAC_IRQn;
		TIM6_MicrosPerInterrupt = (1.0 / (double)((RCC_APB1Clock * RCC_APB_TIM_Constant) / TIM_Prescaler / TIM_Period)) * 1000000;
	}else if(TIMx == TIM7){
		RCC_APB1PeriphClockCmd(RCC_APB1Periph_TIM7, ENABLE);
		NVIC_InitStructure.NVIC_IRQChannel = TIM7_IRQn;
		TIM7_MicrosPerInterrupt = (1.0 / (double)((RCC_APB1Clock * RCC_APB_TIM_Constant) / TIM_Prescaler / TIM_Period)) * 1000000;
	}else if(TIMx == TIM8){
		RCC_APB2PeriphClockCmd(RCC_APB2Periph_TIM8, ENABLE);
		NVIC_InitStructure.NVIC_IRQChannel = TIM8_UP_TIM13_IRQn;
		TIM8_MicrosPerInterrupt = (1.0 / (double)((RCC_APB2Clock * RCC_APB_TIM_Constant) / TIM_Prescaler / TIM_Period)) * 1000000;
	}else if(TIMx == TIM9){
		RCC_APB2PeriphClockCmd(RCC_APB2Periph_TIM9, ENABLE);
		NVIC_InitStructure.NVIC_IRQChannel = TIM1_BRK_TIM9_IRQn;
		TIM9_MicrosPerInterrupt = (1.0 / (double)((RCC_APB2Clock * RCC_APB_TIM_Constant) / TIM_Prescaler / TIM_Period)) * 1000000;
	}else if(TIMx == TIM10){
		RCC_APB2PeriphClockCmd(RCC_APB2Periph_TIM10, ENABLE);
		NVIC_InitStructure.NVIC_IRQChannel = TIM1_UP_TIM10_IRQn;
		TIM10_MicrosPerInterrupt = (1.0 / (double)((RCC_APB2Clock * RCC_APB_TIM_Constant) / TIM_Prescaler / TIM_Period)) * 1000000;
	}else if(TIMx == TIM11){
		RCC_APB2PeriphClockCmd(RCC_APB2Periph_TIM11, ENABLE);
		NVIC_InitStructure.NVIC_IRQChannel = TIM1_TRG_COM_TIM11_IRQn;
		TIM11_MicrosPerInterrupt = (1.0 / (double)((RCC_APB2Clock * RCC_APB_TIM_Constant) / TIM_Prescaler / TIM_Period)) * 1000000;
	}else if(TIMx == TIM12){
		RCC_APB1PeriphClockCmd(RCC_APB1Periph_TIM12, ENABLE);
		NVIC_InitStructure.NVIC_IRQChannel = TIM8_BRK_TIM12_IRQn;
		TIM12_MicrosPerInterrupt = (1.0 / (double)((RCC_APB1Clock * RCC_APB_TIM_Constant) / TIM_Prescaler / TIM_Period)) * 1000000;
	}else if(TIMx == TIM13){
		RCC_APB1PeriphClockCmd(RCC_APB1Periph_TIM13, ENABLE);
		NVIC_InitStructure.NVIC_IRQChannel = TIM8_UP_TIM13_IRQn;
		TIM13_MicrosPerInterrupt = (1.0 / (double)((RCC_APB1Clock * RCC_APB_TIM_Constant) / TIM_Prescaler / TIM_Period)) * 1000000;
	}else if(TIMx == TIM14){
		RCC_APB1PeriphClockCmd(RCC_APB1Periph_TIM14, ENABLE);
		NVIC_InitStructure.NVIC_IRQChannel = TIM8_TRG_COM_TIM14_IRQn;
		TIM14_MicrosPerInterrupt = (1.0 / (double)((RCC_APB1Clock * RCC_APB_TIM_Constant) / TIM_Prescaler / TIM_Period)) * 1000000;
	}
	
	TIM_TimeBaseInit(TIMx, &TIM_BaseInitStruct);

	//all timers are set to generate interrupt on update event
	TIM_ITConfig(TIMx, TIM_IT_Update, ENABLE);
	NVIC_Init(&NVIC_InitStructure);
	
	TIM_Cmd(TIMx, ENABLE);
}

/**
	* @brief Disables timer.
	*
	* @param TIMx: timer to disable.
	*
	* @retval None.
	*/
void TIM_Disable(TIM_TypeDef* TIMx){
	TIM_Cmd(TIMx, DISABLE);
	
	__disable_irq();
	
	if(TIMx == TIM1){
		TIM1_Micros = 0;
	}else if(TIMx == TIM2){
		TIM2_Micros = 0;
	}else if(TIMx == TIM3){
		TIM3_Micros = 0;
	}else if(TIMx == TIM4){
		TIM4_Micros = 0;
	}else if(TIMx == TIM5){
		TIM5_Micros = 0;
	}else if(TIMx == TIM6){
		TIM6_Micros = 0;
	}else if(TIMx == TIM7){
		TIM7_Micros = 0;
	}else if(TIMx == TIM8){
		TIM8_Micros = 0;
	}else if(TIMx == TIM9){
		TIM9_Micros = 0;
	}else if(TIMx == TIM10){
		TIM10_Micros = 0;
	}else if(TIMx == TIM11){
		TIM11_Micros = 0;
	}else if(TIMx == TIM12){
		TIM12_Micros = 0;
	}else if(TIMx == TIM13){
		TIM13_Micros = 0;
	}else if(TIMx == TIM14){
		TIM14_Micros = 0;
	}
	
	__enable_irq();
	
	TIM_ResetCountdown(TIMx);
}

void TIM_Enable(TIM_TypeDef* TIMx){
	TIM_Cmd(TIMx, ENABLE);
}

/**
  * @brief Initializes chosen timer with default parameters (timer resolution is set to 1 ms).
	*
	* @param TIMx: where x can be 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14 to select whitch timer to initialize.
	*
	* @retval None.
	*/
void TIM_DefaultInit(TIM_TypeDef* TIMx){
	if(TIMx == TIM2 || TIMx == TIM3 || TIMx == TIM4 || TIMx == TIM5 || TIMx == TIM6 || TIMx == TIM7 || TIMx == TIM12 || TIMx == TIM13 || TIMx == TIM14){
		TIM_Init(TIMx, DEFAULT_APB1_PRESCALER, DEFAULT_APB1_PERIOD);
	}else{
		TIM_Init(TIMx, DEFAULT_APB2_PRESCALER, DEFAULT_APB2_PERIOD);
	}
}

/**
	* @brief Initializes timer using resolution parameter. It calculates prescaler and period values from frequency.
	*        Next table shows minimum acurucy of function to calculate right prescaler and period values from frequency (Hz):
	*
	*             [1 10]      = 99.984%
	*            [10 100]     = 99.905%
	*           [100 1000]    = 99.719%
	*          [1000 10000]   = 99.219%
	*         [10000 100000]  = 96.875%
	*        [100000 1000000] = 92.857%
	*
	* @param TIMx: where x can be 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14 to select whitch timer to initialize.
	* @param resolution: resolution of timer in Hz.
	*
	* @retval None.
	*/
void TIM_ResolutionInit(TIM_TypeDef* TIMx, uint32_t resolution){
	typedef enum {Prescaler = 0, Period = 1} toDivide;
	toDivide variableToDivide = Prescaler;
	
  uint32_t prescaler;
	uint32_t period;
	RCC_ClocksTypeDef RCC_Clocks;
	uint32_t RCC_APBClock;
	uint32_t RCC_APBClock_Temp;
	
	double resolution_temp;
	
	RCC_GetClocksFreq(&RCC_Clocks);
	
	if(TIMx == TIM2 || TIMx == TIM3 || TIMx == TIM4 || TIMx == TIM5 || TIMx == TIM6 || TIMx == TIM7 || TIMx == TIM12 || TIMx == TIM13 || TIMx == TIM14){
		RCC_APBClock = RCC_Clocks.PCLK1_Frequency;;
	}else{
		RCC_APBClock = RCC_Clocks.PCLK2_Frequency;;
	}
	
	prescaler = 65535;
	period = 65535;
	
	while(1){
		if(prescaler != 1){
			RCC_APBClock_Temp = 2 * RCC_APBClock;
		}else{
			RCC_APBClock_Temp = RCC_APBClock;
		}
		
		resolution_temp = (double)RCC_APBClock_Temp / (double)prescaler / (double)period;
		
		if((double)resolution > resolution_temp){
			if(variableToDivide == Prescaler){
				prescaler /= 2;
				variableToDivide = Period;
			}else{
				period /= 2;
				variableToDivide = Prescaler;
			}
		}else{
			break;
		}
	}
	
	for (; period < 65536; period++){
		resolution_temp = (double)RCC_APBClock_Temp / (double)prescaler / (double)period;
		if (resolution_temp <= (double)resolution){
			break;
		}
	}
	if (resolution_temp <= (double)resolution){
		for (; prescaler < 65536; prescaler++){
			resolution_temp = (double)RCC_APBClock_Temp / (double)prescaler / (double)period;
			if (resolution_temp <= (double)resolution){
				break;
			}
		}
	}
	
	TIM_Init(TIMx, prescaler, period);
}

/**
  * @brief Sets user defined function to be executed on evry interrupt of specefied timer.
	*
	* @param TIMx: where x can be 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14 to select whitch timer whil generate
	*			   interrupts for user defined function.
	* @param TIM_UserInterruptFunctionPtr: pointer to user defined function (function must be formated: void <function name>(void)).
	*
	* @retval None.
	*/
void TIM_AttachUserInterruptFunction(TIM_TypeDef* TIMx, void (*TIM_UserInterruptFunctionPtr)()){
	
	__disable_irq();
	
	if(TIMx == TIM1){
		TIM1_UserInterruptFunctionPtr = TIM_UserInterruptFunctionPtr;
	}else if(TIMx == TIM2){
		TIM2_UserInterruptFunctionPtr = TIM_UserInterruptFunctionPtr;
	}else if(TIMx == TIM3){
		TIM3_UserInterruptFunctionPtr = TIM_UserInterruptFunctionPtr;
	}else if(TIMx == TIM4){
		TIM4_UserInterruptFunctionPtr = TIM_UserInterruptFunctionPtr;
	}else if(TIMx == TIM5){
		TIM5_UserInterruptFunctionPtr = TIM_UserInterruptFunctionPtr;
	}else if(TIMx == TIM6){
		TIM6_UserInterruptFunctionPtr = TIM_UserInterruptFunctionPtr;
	}else if(TIMx == TIM7){
		TIM7_UserInterruptFunctionPtr = TIM_UserInterruptFunctionPtr;
	}else if(TIMx == TIM8){
		TIM8_UserInterruptFunctionPtr = TIM_UserInterruptFunctionPtr;
	}else if(TIMx == TIM9){
		TIM9_UserInterruptFunctionPtr = TIM_UserInterruptFunctionPtr;
	}else if(TIMx == TIM10){
		TIM10_UserInterruptFunctionPtr = TIM_UserInterruptFunctionPtr;
	}else if(TIMx == TIM11){
		TIM11_UserInterruptFunctionPtr = TIM_UserInterruptFunctionPtr;
	}else if(TIMx == TIM12){
		TIM12_UserInterruptFunctionPtr = TIM_UserInterruptFunctionPtr;
	}else if(TIMx == TIM13){
		TIM13_UserInterruptFunctionPtr = TIM_UserInterruptFunctionPtr;
	}else if(TIMx == TIM14){
		TIM14_UserInterruptFunctionPtr = TIM_UserInterruptFunctionPtr;
	}
	
	__enable_irq();
}

/**
  * @brief Disables user defined function to be executed on evry interrupt of specefied timer.
	*
	* @param TIMx: where x can be 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14 to select from witch timer to
	*        disable user defined interupt function execution.
	*
	* @retval None.
	*/
void TIM_DetachUserInterruptFunction(TIM_TypeDef* TIMx){
	
	__disable_irq();
	
	if(TIMx == TIM1){
		TIM1_UserInterruptFunctionPtr = &nop;
	}else if(TIMx == TIM2){
		TIM2_UserInterruptFunctionPtr = &nop;
	}else if(TIMx == TIM3){
		TIM3_UserInterruptFunctionPtr = &nop;
	}else if(TIMx == TIM4){
		TIM4_UserInterruptFunctionPtr = &nop;
	}else if(TIMx == TIM5){
		TIM5_UserInterruptFunctionPtr = &nop;
	}else if(TIMx == TIM6){
		TIM6_UserInterruptFunctionPtr = &nop;
	}else if(TIMx == TIM7){
		TIM7_UserInterruptFunctionPtr = &nop;
	}else if(TIMx == TIM8){
		TIM8_UserInterruptFunctionPtr = &nop;
	}else if(TIMx == TIM9){
		TIM9_UserInterruptFunctionPtr = &nop;
	}else if(TIMx == TIM10){
		TIM10_UserInterruptFunctionPtr = &nop;
	}else if(TIMx == TIM11){
		TIM11_UserInterruptFunctionPtr = &nop;
	}else if(TIMx == TIM12){
		TIM12_UserInterruptFunctionPtr = &nop;
	}else if(TIMx == TIM13){
		TIM13_UserInterruptFunctionPtr = &nop;
	}else if(TIMx == TIM14){
		TIM14_UserInterruptFunctionPtr = &nop;
	}
	
	__enable_irq();
}

/**
  * @brief Returns number of passed microsecondes from last restart
	*				 Chosen timer must be initialized first.
	*
	* @retval Microsecondes from last restart.
	*/
uint32_t TIM_GetMicros(TIM_TypeDef* TIMx){
	uint32_t micros;
	
	__disable_irq();
	
	if(TIMx == TIM1){
		micros = TIM1_Micros;
	}else if(TIMx == TIM2){
		micros = TIM2_Micros;
	}else if(TIMx == TIM3){
		micros = TIM3_Micros;
	}else if(TIMx == TIM4){
		micros = TIM4_Micros;
	}else if(TIMx == TIM5){
		micros = TIM5_Micros;
	}else if(TIMx == TIM6){
		micros = TIM6_Micros;
	}else if(TIMx == TIM7){
		micros = TIM7_Micros;
	}else if(TIMx == TIM8){
		micros = TIM8_Micros;
	}else if(TIMx == TIM9){
		micros = TIM9_Micros;
	}else if(TIMx == TIM10){
		micros = TIM10_Micros;
	}else if(TIMx == TIM11){
		micros = TIM11_Micros;
	}else if(TIMx == TIM12){
		micros = TIM12_Micros;
	}else if(TIMx == TIM13){
		micros = TIM13_Micros;
	}else if(TIMx == TIM14){
		micros = TIM14_Micros;
	}
	
	__enable_irq();
	
	return micros;
}

/**
  * @brief Delays program execution for specific amount of time.
	*
	* @param TIMx: where x can be 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14 to select timer with witch to perform wait function.
	* 			 Chosen timer must be initialized first.
	* @param us: number of microsecondes to wait.
	*
	* @retval None.
	*/
void TIM_WaitMicros(TIM_TypeDef* TIMx, uint32_t us){
	uint32_t time_1, time_2;
	
	time_1 = TIM_GetMicros(TIMx);
	
	while(1){
		time_2 = TIM_GetMicros(TIMx);
		if((time_2 - time_1) >= us){
			break;
		}else if(time_1 > time_2){
			continue;
		}
	}
}

/**
	* @brief Sets timers top counddown value.
	*
	* @param TIMx: where x can be 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14 to select which timers
	*				 top countdown value to set.
	* @param top: countdown top value in micro secondes.
	*
	* @retval None.
	*/
void TIM_SetCoundtownTop(TIM_TypeDef* TIMx, uint32_t top){
	__disable_irq();
	
	if(TIMx == TIM1){
		TIM1_CountdownTop = top;
	}else if(TIMx == TIM2){
		TIM2_CountdownTop = top;
	}else if(TIMx == TIM3){
		TIM3_CountdownTop = top;
	}else if(TIMx == TIM4){
		TIM4_CountdownTop = top;
	}else if(TIMx == TIM5){
		TIM5_CountdownTop = top;
	}else if(TIMx == TIM6){
		TIM6_CountdownTop = top;
	}else if(TIMx == TIM7){
		TIM7_CountdownTop = top;
	}else if(TIMx == TIM8){
		TIM8_CountdownTop = top;
	}else if(TIMx == TIM9){
		TIM9_CountdownTop = top;
	}else if(TIMx == TIM10){
		TIM10_CountdownTop = top;
	}else if(TIMx == TIM11){
		TIM11_CountdownTop = top;
	}else if(TIMx == TIM12){
		TIM12_CountdownTop = top;
	}else if(TIMx == TIM13){
		TIM13_CountdownTop = top;
	}else if(TIMx == TIM14){
		TIM14_CountdownTop = top;
	}
	
	__enable_irq();
}

/**
	* @brief Resets timers countdown fuction.
	*
	* @param TIMx: where x can be 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14 to select which timer to reset.
	*
	* @retval None.
	*/
void TIM_ResetCountdown(TIM_TypeDef* TIMx){
	__disable_irq();
	
	if(TIMx == TIM1){
		TIM1_Countdown = 0;
		TIM1_CountdownFlag = 0;
	}else if(TIMx == TIM2){
		TIM2_Countdown = 0;
		TIM2_CountdownFlag = 0;
	}else if(TIMx == TIM3){
		TIM3_Countdown = 0;
		TIM3_CountdownFlag = 0;
	}else if(TIMx == TIM4){
		TIM4_Countdown = 0;
		TIM4_CountdownFlag = 0;
	}else if(TIMx == TIM5){
		TIM5_Countdown = 0;
		TIM5_CountdownFlag = 0;
	}else if(TIMx == TIM6){
		TIM6_Countdown = 0;
		TIM6_CountdownFlag = 0;
	}else if(TIMx == TIM7){
		TIM7_Countdown = 0;
		TIM7_CountdownFlag = 0;
	}else if(TIMx == TIM8){
		TIM8_Countdown = 0;
		TIM8_CountdownFlag = 0;
	}else if(TIMx == TIM9){
		TIM9_Countdown = 0;
		TIM9_CountdownFlag = 0;
	}else if(TIMx == TIM10){
		TIM10_Countdown = 0;
		TIM10_CountdownFlag = 0;
	}else if(TIMx == TIM11){
		TIM11_Countdown = 0;
		TIM11_CountdownFlag = 0;
	}else if(TIMx == TIM12){
		TIM12_Countdown = 0;
		TIM12_CountdownFlag = 0;
	}else if(TIMx == TIM13){
		TIM13_Countdown = 0;
		TIM13_CountdownFlag = 0;
	}else if(TIMx == TIM14){
		TIM14_Countdown = 0;
		TIM14_CountdownFlag = 0;
	}
	
	__enable_irq();
}

uint8_t TIM_GetCountdownFlagStatus(TIM_TypeDef* TIMx){
	uint8_t flagStatus;
	
	__disable_irq();
	
	if(TIMx == TIM1){
		flagStatus = TIM1_CountdownFlag;
	}else if(TIMx == TIM2){
		flagStatus = TIM2_CountdownFlag;
	}else if(TIMx == TIM3){
		flagStatus = TIM3_CountdownFlag;
	}else if(TIMx == TIM4){
		flagStatus = TIM4_CountdownFlag;
	}else if(TIMx == TIM5){
		flagStatus = TIM5_CountdownFlag;
	}else if(TIMx == TIM6){
		flagStatus = TIM6_CountdownFlag;
	}else if(TIMx == TIM7){
		flagStatus = TIM7_CountdownFlag;
	}else if(TIMx == TIM8){
		flagStatus = TIM8_CountdownFlag;
	}else if(TIMx == TIM9){
		flagStatus = TIM9_CountdownFlag;
	}else if(TIMx == TIM10){
		flagStatus = TIM10_CountdownFlag;
	}else if(TIMx == TIM11){
		flagStatus = TIM11_CountdownFlag;
	}else if(TIMx == TIM12){
		flagStatus = TIM12_CountdownFlag;
	}else if(TIMx == TIM13){
		flagStatus = TIM13_CountdownFlag;
	}else if(TIMx == TIM14){
		flagStatus = TIM14_CountdownFlag;
	}
	
	__enable_irq();
	
	return flagStatus;
}

void TIM1_UP_TIM10_IRQHandler(void) {
	if (TIM_GetITStatus(TIM1, TIM_IT_Update) != RESET) {
		TIM_ClearITPendingBit(TIM1, TIM_IT_Update);   
		TIM1_Micros += TIM1_MicrosPerInterrupt;
		TIM1_Countdown += TIM1_MicrosPerInterrupt;
		if(TIM1_Countdown >= TIM1_CountdownTop){
			TIM1_CountdownFlag = 1;
		}
		(*TIM1_UserInterruptFunctionPtr)();
	}else if(TIM_GetITStatus(TIM10, TIM_IT_Update) != RESET) {
		TIM_ClearITPendingBit(TIM10, TIM_IT_Update);
		TIM10_Micros += TIM10_MicrosPerInterrupt;
		TIM10_Countdown += TIM10_MicrosPerInterrupt;
		if(TIM10_Countdown >= TIM10_CountdownTop){
			TIM10_CountdownFlag = 1;
		}
		(*TIM10_UserInterruptFunctionPtr)();
	}
}

void TIM2_IRQHandler(void) {
	if (TIM_GetITStatus(TIM2, TIM_IT_Update) != RESET) {
		TIM_ClearITPendingBit(TIM2, TIM_IT_Update);   
		TIM2_Micros += TIM2_MicrosPerInterrupt;
		TIM2_Countdown += TIM2_MicrosPerInterrupt;
		if(TIM2_Countdown >= TIM2_CountdownTop){
			TIM2_CountdownFlag = 1;
		}
		(*TIM2_UserInterruptFunctionPtr)();
	}
}

void TIM3_IRQHandler(void) {
	if (TIM_GetITStatus(TIM3, TIM_IT_Update) != RESET) {
		TIM_ClearITPendingBit(TIM3, TIM_IT_Update);   
		TIM3_Micros += TIM3_MicrosPerInterrupt;
		TIM3_Countdown += TIM3_MicrosPerInterrupt;
		if(TIM3_Countdown >= TIM3_CountdownTop){
			TIM3_CountdownFlag = 1;
		}
		(*TIM3_UserInterruptFunctionPtr)();
	}
}

void TIM4_IRQHandler(void) {
	if (TIM_GetITStatus(TIM4, TIM_IT_Update) != RESET) {
		TIM_ClearITPendingBit(TIM4, TIM_IT_Update);   
		TIM4_Micros += TIM4_MicrosPerInterrupt;
		TIM4_Countdown += TIM4_MicrosPerInterrupt;
		if(TIM4_Countdown >= TIM4_CountdownTop){
			TIM4_CountdownFlag = 1;
		}
		(*TIM4_UserInterruptFunctionPtr)();
	}
}

void TIM5_IRQHandler(void) {
	if (TIM_GetITStatus(TIM5, TIM_IT_Update) != RESET) {
		TIM_ClearITPendingBit(TIM5, TIM_IT_Update);   
		TIM5_Micros += TIM5_MicrosPerInterrupt;
		TIM5_Countdown += TIM5_MicrosPerInterrupt;
		if(TIM5_Countdown >= TIM5_CountdownTop){
			TIM5_CountdownFlag = 1;
		}
		(*TIM5_UserInterruptFunctionPtr)();
	}
}

void TIM6_DAC_IRQHandler(void) {
	if (TIM_GetITStatus(TIM6, TIM_IT_Update) != RESET) {
		TIM_ClearITPendingBit(TIM6, TIM_IT_Update);   
		TIM6_Micros += TIM6_MicrosPerInterrupt;
		TIM6_Countdown += TIM6_MicrosPerInterrupt;
		if(TIM6_Countdown >= TIM6_CountdownTop){
			TIM6_CountdownFlag = 1;
		}
		(*TIM6_UserInterruptFunctionPtr)();
	}
}

void TIM7_IRQHandler(void) {
	if (TIM_GetITStatus(TIM7, TIM_IT_Update) != RESET) {
		TIM_ClearITPendingBit(TIM7, TIM_IT_Update);   
		TIM7_Micros += TIM7_MicrosPerInterrupt;
		TIM7_Countdown += TIM7_MicrosPerInterrupt;
		if(TIM7_Countdown >= TIM7_CountdownTop){
			TIM7_CountdownFlag = 1;
		}
		(*TIM7_UserInterruptFunctionPtr)();
	}
}

void TIM8_UP_TIM13_IRQHandler(void) {
	if (TIM_GetITStatus(TIM8, TIM_IT_Update) != RESET) {
		TIM_ClearITPendingBit(TIM8, TIM_IT_Update);   
		TIM8_Micros += TIM8_MicrosPerInterrupt;
		TIM8_Countdown += TIM8_MicrosPerInterrupt;
		if(TIM8_Countdown >= TIM8_CountdownTop){
			TIM8_CountdownFlag = 1;
		}
		(*TIM8_UserInterruptFunctionPtr)();
	}else if (TIM_GetITStatus(TIM13, TIM_IT_Update) != RESET) {
		TIM_ClearITPendingBit(TIM13, TIM_IT_Update);   
		TIM13_Micros += TIM13_MicrosPerInterrupt;
		TIM13_Countdown += TIM13_MicrosPerInterrupt;
		if(TIM13_Countdown >= TIM13_CountdownTop){
			TIM13_CountdownFlag = 1;
		}
		(*TIM13_UserInterruptFunctionPtr)();
	}
}

void TIM1_BRK_TIM9_IRQHandler(void) {
	if (TIM_GetITStatus(TIM9, TIM_IT_Update) != RESET) {
		TIM_ClearITPendingBit(TIM9, TIM_IT_Update);   
		TIM9_Micros += TIM9_MicrosPerInterrupt;
		TIM9_Countdown += TIM9_MicrosPerInterrupt;
		if(TIM9_Countdown >= TIM9_CountdownTop){
			TIM9_CountdownFlag = 1;
		}
		(*TIM9_UserInterruptFunctionPtr)();
	}
}

void TIM1_TRG_COM_TIM11_IRQHandler(void) {
	if (TIM_GetITStatus(TIM11, TIM_IT_Update) != RESET) {
		TIM_ClearITPendingBit(TIM11, TIM_IT_Update);   
		TIM11_Micros += TIM11_MicrosPerInterrupt;
		TIM11_Countdown += TIM11_MicrosPerInterrupt;
		if(TIM11_Countdown >= TIM11_CountdownTop){
			TIM11_CountdownFlag = 1;
		}
		(*TIM11_UserInterruptFunctionPtr)();
	}
}

void TIM8_BRK_TIM12_IRQHandler(void) {
	if (TIM_GetITStatus(TIM12, TIM_IT_Update) != RESET) {
		TIM_ClearITPendingBit(TIM12, TIM_IT_Update);   
		TIM12_Micros += TIM12_MicrosPerInterrupt;
		TIM12_Countdown += TIM12_MicrosPerInterrupt;
		if(TIM12_Countdown >= TIM12_CountdownTop){
			TIM12_CountdownFlag = 1;
		}
		(*TIM12_UserInterruptFunctionPtr)();
	}
}

void TIM8_TRG_COM_TIM14_IRQHandler(void) {
	if (TIM_GetITStatus(TIM14, TIM_IT_Update) != RESET) {
		TIM_ClearITPendingBit(TIM14, TIM_IT_Update);   
		TIM14_Micros += TIM14_MicrosPerInterrupt;
		TIM14_Countdown += TIM14_MicrosPerInterrupt;
		if(TIM14_Countdown >= TIM14_CountdownTop){
			TIM14_CountdownFlag = 1;
		}
		(*TIM14_UserInterruptFunctionPtr)();
	}
}
