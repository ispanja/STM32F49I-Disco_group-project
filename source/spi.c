#include "spi.h"

/* Private typedef -----------------------------------------------------------*/
/* Private define ------------------------------------------------------------*/
/* Private macro -------------------------------------------------------------*/
/* Private variables ---------------------------------------------------------*/
/* Private function prototypes -----------------------------------------------*/

/* Private functions ---------------------------------------------------------*/
static void SPIx_Init(SPI_TypeDef* SPIx, SPI_PinsPack_t pinspack, uint16_t SPI_Clock_Polarity, uint16_t SPI_Clock_Phase , uint16_t SPI_BaudRatePrescaler, uint16_t SPI_MasterSlave, uint16_t SPI_FirstBit);
void SPI1_INT_InitPins(SPI_PinsPack_t pinspack);
void SPI2_INT_InitPins(SPI_PinsPack_t pinspack);
void SPI3_INT_InitPins(SPI_PinsPack_t pinspack);
void SPI4_INT_InitPins(SPI_PinsPack_t pinspack);
void SPI5_INT_InitPins(SPI_PinsPack_t pinspack);
void SPI6_INT_InitPins(SPI_PinsPack_t pinspack);

void GPIO_INT_EnableClock(GPIO_TypeDef* GPIOx);
void GPIO_InitAlternate(GPIO_TypeDef* GPIOx, uint16_t GPIO_Pin, GPIOOType_TypeDef GPIO_OType, GPIOPuPd_TypeDef GPIO_PuPd, GPIOSpeed_TypeDef GPIO_Speed, uint8_t Alternate);

/******************************************************************************/

void SPI_Init_lowLevel(SPI_TypeDef* SPIx, SPI_PinsPack_t pinspack) {
	/* Init with default settings */
#ifdef USE_SPI1
	if (SPIx == SPI1) {
		SPIx_Init(SPI1, pinspack, SPI1_CLOCK_POLARITY, SPI1_CLOCK_PHASE, SPI1_PRESCALER, SPI1_MASTERSLAVE, SPI1_FIRSTBIT);
	}
#endif
#ifdef USE_SPI2
	if (SPIx == SPI2) {
		SPIx_Init(SPI2, pinspack, SPI2_CLOCK_POLARITY, SPI2_CLOCK_PHASE, SPI2_PRESCALER, SPI2_MASTERSLAVE, SPI2_FIRSTBIT);
	}
#endif
#ifdef USE_SPI3
	if (SPIx == SPI3) {
		SPIx_Init(SPI3, pinspack, SPI3_CLOCK_POLARITY, SPI3_CLOCK_PHASE, SPI3_PRESCALER, SPI3_MASTERSLAVE, SPI3_FIRSTBIT);
	}
#endif
#ifdef USE_SPI4
	if (SPIx == SPI4) {
		SPIx_Init(SPI4, pinspack, SPI4_CLOCK_POLARITY, SPI4_CLOCK_PHASE, SPI4_PRESCALER, SPI4_MASTERSLAVE, SPI4_FIRSTBIT);
	}
#endif
#ifdef USE_SPI5
	if (SPIx == SPI5) {
		SPIx_Init(SPI5, pinspack, SPI5_CLOCK_POLARITY, SPI5_CLOCK_PHASE, SPI5_PRESCALER, SPI5_MASTERSLAVE, SPI5_FIRSTBIT);
	}
#endif
#ifdef USE_SPI6
	if (SPIx == SPI6) {
		SPIx_Init(SPI6, pinspack, SPI6_CLOCK_POLARITY, SPI6_CLOCK_PHASE, SPI6_PRESCALER, SPI6_MASTERSLAVE, SPI6_FIRSTBIT);
	}
#endif
}
/**
  * @}
  */
/**
  * @}
  */
void TM_SPI_InitFull(
	SPI_TypeDef* SPIx, \
	SPI_PinsPack_t pinspack, \
	uint16_t SPI_Clock_Polarity, \
	uint16_t SPI_Clock_Phase, \
	uint16_t SPI_BaudRatePrescaler,	\
	uint16_t SPI_MasterSlave, \
	uint16_t SPI_FirstBit
) {
	/* Init FULL SPI settings by user */
#ifdef USE_SPI1
	if (SPIx == SPI1) {
		SPIx_Init(SPI1, pinspack, SPI_Clock_Polarity, SPI_Clock_Phase, SPI_BaudRatePrescaler, SPI_MasterSlave, SPI_FirstBit);
	}
#endif
#ifdef USE_SPI2
	if (SPIx == SPI2) {
		SPIx_Init(SPI2, pinspack, SPI_Clock_Polarity, SPI_Clock_Phase, SPI_BaudRatePrescaler, SPI_MasterSlave, SPI_FirstBit);
	}
#endif
#ifdef USE_SPI3
	if (SPIx == SPI3) {
		SPIx_Init(SPI3, pinspack, SPI_Clock_Polarity, SPI_Clock_Phase, SPI_BaudRatePrescaler, SPI_MasterSlave, SPI_FirstBit);
	}
#endif
#ifdef USE_SPI4
	if (SPIx == SPI4) {
		SPIx_Init(SPI4, pinspack, SPI_Clock_Polarity, SPI_Clock_Phase, SPI_BaudRatePrescaler, SPI_MasterSlave, SPI_FirstBit);
	}
#endif
#ifdef USE_SPI5
	if (SPIx == SPI5) {
		SPIx_Init(SPI5, pinspack, SPI_Clock_Polarity, SPI_Clock_Phase, SPI_BaudRatePrescaler, SPI_MasterSlave, SPI_FirstBit);
	}
#endif
#ifdef USE_SPI6
	if (SPIx == SPI6) {
		SPIx_Init(SPI6, pinspack, SPI_Clock_Polarity, SPI_Clock_Phase, SPI_BaudRatePrescaler, SPI_MasterSlave, SPI_FirstBit);
	}
#endif
}

/**
  * @}
  */
/**
  * @}
  */
uint16_t SPI_GetPrescalerFromMaxFrequency(SPI_TypeDef* SPIx, uint32_t MAX_SPI_Frequency) {
	RCC_ClocksTypeDef RCC_Clocks;
	uint32_t APB_Frequency;
	uint8_t i;
	
	/* Prevent false input */
	if (MAX_SPI_Frequency == 0) {
		return SPI_BaudRatePrescaler_256;
	}
	
	/* Get clock values from RCC */
	RCC_GetClocksFreq(&RCC_Clocks);
	
	/* Calculate max SPI clock */
	if (0
#ifdef USE_SPI1	
		|| SPIx == SPI1
#endif
#ifdef USE_SPI4
		|| SPIx == SPI4
#endif
#ifdef USE_SPI5
		|| SPIx == SPI5
#endif
#ifdef USE_SPI6
		|| SPIx == SPI6
#endif
	) {
		APB_Frequency = RCC_Clocks.PCLK2_Frequency;
	} else {
		APB_Frequency = RCC_Clocks.PCLK1_Frequency;
	}
	
	/* Calculate prescaler value */
	/* Bits 5:3 in CR1 SPI registers are prescalers */
	/* 000 = 2, 001 = 4, 002 = 8, ..., 111 = 256 */
	for (i = 0; i < 8; i++) {
		if (APB_Frequency / (1 << (i + 1)) <= MAX_SPI_Frequency) {
			/* Bits for BP are 5:3 in CR1 register */
			return (i << 3);
		}
	}
	
	/* Use max prescaler possible */
	return SPI_BaudRatePrescaler_256;
}


/**
  * @}
  */
/**
  * @}
  */
uint16_t TM_SPI_SetDataSize(SPI_TypeDef* SPIx, uint16_t DataSize) {
	uint16_t status = (SPIx->CR1 & SPI_CR1_DFF) ? SPI_DataSize_16b : SPI_DataSize_8b;
	
	/* Disable SPI first */
	SPIx->CR1 &= ~SPI_CR1_SPE;
	
	/* Set proper value */
	if (DataSize == SPI_DataSize_16b) {
		/* Set bit for frame */
		SPIx->CR1 |= SPI_CR1_DFF;
	} else {
		/* Clear bit for frame */
		SPIx->CR1 &= ~SPI_CR1_DFF;
	}
	
	/* Enable SPI back */
	SPIx->CR1 |= SPI_CR1_SPE;
	
	/* Return status */
	return status;
}

/**
  * @}
  */
/**
  * @}
  */
void SPI_SendMulti(SPI_TypeDef* SPIx, uint8_t* dataOut, uint8_t* dataIn, uint32_t count) {
	uint32_t i;
	
	/* Check if SPI is enabled */
	SPI_CHECK_ENABLED(SPIx);
	
	/* Wait for previous transmissions to complete if DMA TX enabled for SPI */
	SPI_WAIT(SPIx);
	
	for (i = 0; i < count; i++) {
		/* Fill output buffer with data */
		SPIx->DR = dataOut[i];
		
		/* Wait for SPI to end everything */
		SPI_WAIT(SPIx);
		
		/* Read data register */
		dataIn[i] = SPIx->DR;
	}
}

/**
  * @}
  */
/**
  * @}
  */
void SPI_WriteMulti(SPI_TypeDef* SPIx, uint8_t* dataOut, uint32_t count) {
	uint32_t i;	
	
	/* Check if SPI is enabled */
	SPI_CHECK_ENABLED(SPIx);
	
	/* Wait for previous transmissions to complete if DMA TX enabled for SPI */
	SPI_WAIT(SPIx);
	
	for (i = 0; i < count; i++) {
		/* Fill output buffer with data */
		SPIx->DR = dataOut[i];
		
		/* Wait for SPI to end everything */
		SPI_WAIT(SPIx);
		
		/* Read data register */
		(void)SPIx->DR;
	}
}

/**
  * @}
  */
/**
  * @}
  */
void SPI_ReadMulti(SPI_TypeDef* SPIx, uint8_t* dataIn, uint8_t dummy, uint32_t count) {
	uint32_t i;
	
	/* Check if SPI is enabled */
	SPI_CHECK_ENABLED(SPIx);
	
	/* Wait for previous transmissions to complete if DMA TX enabled for SPI */
	SPI_WAIT(SPIx);
	
	for (i = 0; i < count; i++) {
		/* Fill output buffer with data */
		SPIx->DR = dummy;
		
		/* Wait for SPI to end everything */
		SPI_WAIT(SPIx);
		
		/* Save data to buffer */
		dataIn[i] = SPIx->DR;
	}
}

/**
  * @}
  */
/**
  * @}
  */
void SPI_SendMulti16(SPI_TypeDef* SPIx, uint16_t* dataOut, uint16_t* dataIn, uint32_t count) {
	uint32_t i;	
	
	/* Check if SPI is enabled */
	SPI_CHECK_ENABLED(SPIx);
	
	/* Wait for previous transmissions to complete if DMA TX enabled for SPI */
	SPI_WAIT(SPIx);
	
	for (i = 0; i < count; i++) {
		/* Fill output buffer with data */
		SPIx->DR = dataOut[i];
		
		/* Wait for SPI to end everything */
		SPI_WAIT(SPIx);
		
		/* Read data register */
		dataIn[i] = SPIx->DR;
	}
}

/**
  * @}
  */
/**
  * @}
  */
void SPI_WriteMulti16(SPI_TypeDef* SPIx, uint16_t* dataOut, uint32_t count) {
	uint32_t i;
	
	/* Check if SPI is enabled */
	SPI_CHECK_ENABLED(SPIx);
	
	/* Wait for previous transmissions to complete if DMA TX enabled for SPI */
	SPI_WAIT(SPIx);
	
	for (i = 0; i < count; i++) {
		/* Fill output buffer with data */
		SPIx->DR = dataOut[i];
		
		/* Wait for SPI to end everything */
		SPI_WAIT(SPIx);
		
		/* Read data register */
		(void)SPIx->DR;
	}
}

/**
  * @}
  */
/**
  * @}
  */
void SPI_ReadMulti16(SPI_TypeDef* SPIx, uint16_t* dataIn, uint16_t dummy, uint32_t count) {
	uint32_t i;
	
	/* Check if SPI is enabled */
	SPI_CHECK_ENABLED(SPIx);
	
	/* Wait for previous transmissions to complete if DMA TX enabled for SPI */
	SPI_WAIT(SPIx);
	
	for (i = 0; i < count; i++) {
		/* Fill output buffer with data */
		SPIx->DR = dummy;
		
		/* Wait for SPI to end everything */
		SPI_WAIT(SPIx);
		
		/* Save data to buffer */
		dataIn[i] = SPIx->DR;
	}
}

/*---------------------------------------------------------------------------*/
/*Private functions*/

/**
  * @}
  */
/**
  * @}
  */
static void SPIx_Init(SPI_TypeDef* SPIx, SPI_PinsPack_t pinspack, uint16_t SPI_Clock_Polarity, uint16_t SPI_Clock_Phase , uint16_t SPI_BaudRatePrescaler, uint16_t SPI_MasterSlave, uint16_t SPI_FirstBit) {
	SPI_InitTypeDef SPI_InitStruct;

	/* Set default settings */
	SPI_StructInit(&SPI_InitStruct);
#ifdef USE_SPI1	
	if (SPIx == SPI1) {
		/* Enable SPI clock */
		RCC->APB2ENR |= RCC_APB2ENR_SPI1EN;
		
		/* Init pins */
		SPI1_INT_InitPins(pinspack);
		
		/* Set options */
		SPI_InitStruct.SPI_DataSize = SPI1_DATASIZE;
		SPI_InitStruct.SPI_CPOL 		= SPI1_CLOCK_POLARITY;
		SPI_InitStruct.SPI_CPHA 		= SPI1_CLOCK_PHASE;
	}
#endif
#ifdef USE_SPI2
	if (SPIx == SPI2) {
		/* Enable SPI clock */
		RCC->APB1ENR |= RCC_APB1ENR_SPI2EN;
		
		/* Init pins */
		SPI2_INT_InitPins(pinspack);
		
		/* Set options */
		SPI_InitStruct.SPI_DataSize = SPI2_DATASIZE;
		SPI_InitStruct.SPI_CPOL 		= SPI2_CLOCK_POLARITY;
		SPI_InitStruct.SPI_CPHA 		= SPI2_CLOCK_PHASE;
	}
#endif
#ifdef USE_SPI3
	if (SPIx == SPI3) {
		/* Enable SPI clock */
		RCC->APB1ENR |= RCC_APB1ENR_SPI3EN;
		
		/* Init pins */
		SPI3_INT_InitPins(pinspack);
		
		/* Set options */
		SPI_InitStruct.SPI_DataSize = SPI3_DATASIZE;
		SPI_InitStruct.SPI_CPOL 		= SPI3_CLOCK_POLARITY;
		SPI_InitStruct.SPI_CPHA 		= SPI3_CLOCK_PHASE;
	
	}
#endif
#ifdef USE_SPI4
	if (SPIx == SPI4) {
		/* Enable SPI clock */
		RCC->APB2ENR |= RCC_APB2ENR_SPI4EN;
		
		/* Init pins */
		SPI4_INT_InitPins(pinspack);
		
		/* Set options */
		SPI_InitStruct.SPI_DataSize = SPI4_DATASIZE;
		SPI_InitStruct.SPI_CPOL 		= SPI4_CLOCK_POLARITY;
		SPI_InitStruct.SPI_CPHA 		= SPI4_CLOCK_PHASE;
	}
#endif
#ifdef USE_SPI5
	if (SPIx == SPI5) {
		/* Enable SPI clock */
		RCC->APB2ENR |= RCC_APB2ENR_SPI5EN;
		
		/* Init pins */
		SPI5_INT_InitPins(pinspack);
		
		/* Set options */
		SPI_InitStruct.SPI_DataSize = SPI5_DATASIZE;
		SPI_InitStruct.SPI_CPOL 		= SPI5_CLOCK_POLARITY;
		SPI_InitStruct.SPI_CPHA 		= SPI5_CLOCK_PHASE;
	}
#endif
#ifdef USE_SPI6
	if (SPIx == SPI6) {
		/* Enable SPI clock */
		RCC->APB2ENR |= RCC_APB2ENR_SPI6EN;
		
		/* Init pins */
		SPI6_INT_InitPins(pinspack);
		
		/* Set options */
		SPI_InitStruct.SPI_DataSize = SPI6_DATASIZE;
		SPI_InitStruct.SPI_CPOL 		= SPI6_CLOCK_POLARITY;
		SPI_InitStruct.SPI_CPHA 		= SPI6_CLOCK_PHASE;
	}
#endif

	/* Fill SPI settings */
	SPI_InitStruct.SPI_BaudRatePrescaler = SPI_BaudRatePrescaler;
	SPI_InitStruct.SPI_Direction = SPI_Direction_2Lines_FullDuplex;
	SPI_InitStruct.SPI_FirstBit = SPI_FirstBit;
	SPI_InitStruct.SPI_Mode = SPI_MasterSlave;
	SPI_InitStruct.SPI_NSS = SPI_NSS_Soft;
	
	/* Disable first */
	SPIx->CR1 &= ~SPI_CR1_SPE;
	
	/* Init SPI */
	SPI_Init(SPIx, &SPI_InitStruct);
	
	/* Enable SPI */
	SPIx->CR1 |= SPI_CR1_SPE;
}

#ifdef USE_SPI1
void SPI1_INT_InitPins(SPI_PinsPack_t pinspack) {
	/* Init SPI pins */
#if defined(GPIOA)
	if (pinspack == SPI_PinsPack_1) {
		GPIO_InitAlternate(GPIOA, GPIO_Pin_5 | GPIO_Pin_6 | GPIO_Pin_7, GPIO_OType_PP, GPIO_PuPd_NOPULL, GPIO_High_Speed, GPIO_AF_SPI1);
		GPIO_PinAFConfig(GPIOA, GPIO_PinSource5, GPIO_AF_SPI1);
		GPIO_PinAFConfig(GPIOA, GPIO_PinSource6, GPIO_AF_SPI1);
		GPIO_PinAFConfig(GPIOA, GPIO_PinSource7, GPIO_AF_SPI1);
		
	}
#endif
#if defined(GPIOB)
	if (pinspack == SPI_PinsPack_2) {
		GPIO_InitAlternate(GPIOB, GPIO_Pin_3 | GPIO_Pin_4 | GPIO_Pin_5, GPIO_OType_PP, GPIO_PuPd_NOPULL,  GPIO_High_Speed, GPIO_AF_SPI1);
		GPIO_PinAFConfig(GPIOB, GPIO_PinSource3, GPIO_AF_SPI1);
		GPIO_PinAFConfig(GPIOB, GPIO_PinSource4, GPIO_AF_SPI1);
		GPIO_PinAFConfig(GPIOB, GPIO_PinSource5, GPIO_AF_SPI1);
	}
#endif
	if (pinspack == SPI_PinsPack_Custom) {
		/* Call user function */
		//SPI_InitCustomPinsCallback(SPI1, GPIO_AF_SPI1);
	}
}
#endif

#ifdef USE_SPI2
void SPI2_INT_InitPins(SPI_PinsPack_t pinspack) {
	/* Init SPI pins */
#if defined(GPIOB) && defined(GPIOC)
	if (pinspack == SPI_PinsPack_1) {
		GPIO_InitAlternate(GPIOB, GPIO_Pin_10, GPIO_OType_PP, GPIO_PuPd_NOPULL,  GPIO_High_Speed, GPIO_AF_SPI2);
		GPIO_InitAlternate(GPIOC, GPIO_Pin_2 | GPIO_Pin_3, GPIO_OType_PP, GPIO_PuPd_NOPULL,  GPIO_High_Speed, GPIO_AF_SPI2);
		GPIO_PinAFConfig(GPIOB, GPIO_PinSource10, GPIO_AF_SPI2);
		GPIO_PinAFConfig(GPIOC, GPIO_PinSource2, GPIO_AF_SPI2);
		GPIO_PinAFConfig(GPIOC, GPIO_PinSource3, GPIO_AF_SPI2);
	}
#endif
#if defined(GPIOB)
	if (pinspack == SPI_PinsPack_2) {
		GPIO_InitAlternate(GPIOB, GPIO_Pin_13 | GPIO_Pin_14 | GPIO_Pin_15,  GPIO_OType_PP,  GPIO_PuPd_NOPULL,  GPIO_High_Speed, GPIO_AF_SPI2);
		GPIO_PinAFConfig(GPIOB, GPIO_PinSource13, GPIO_AF_SPI2);
		GPIO_PinAFConfig(GPIOB, GPIO_PinSource14, GPIO_AF_SPI2);
		GPIO_PinAFConfig(GPIOB, GPIO_PinSource15, GPIO_AF_SPI2);
	}
#endif
#if defined(GPIOI)
	if (pinspack == SPI_PinsPack_3) {
		GPIO_InitAlternate(GPIOI, GPIO_Pin_0 | GPIO_Pin_2 | GPIO_Pin_3,  GPIO_OType_PP,  GPIO_PuPd_NOPULL,  GPIO_High_Speed, GPIO_AF_SPI2);
		GPIO_PinAFConfig(GPIOI, GPIO_PinSource0, GPIO_AF_SPI2);
		GPIO_PinAFConfig(GPIOI, GPIO_PinSource2, GPIO_AF_SPI2);
		GPIO_PinAFConfig(GPIOI, GPIO_PinSource3, GPIO_AF_SPI2);
	}
#endif
	if (pinspack == SPI_PinsPack_Custom) {
		/* Call user function */
		//SPI_InitCustomPinsCallback(SPI2, GPIO_AF_SPI2);
	}
}
#endif

#ifdef USE_SPI3
void SPI3_INT_InitPins(SPI_PinsPack_t pinspack) {
	/* Enable SPI pins */
#if defined(GPIOB)
	if (pinspack == SPI_PinsPack_1) {
		GPIO_InitAlternate(GPIOB, GPIO_Pin_3 | GPIO_Pin_4 | GPIO_Pin_5,  GPIO_OType_PP,  GPIO_PuPd_NOPULL,  GPIO_High_Speed, GPIO_AF_SPI3);
		GPIO_PinAFConfig(GPIOB, GPIO_PinSource3, GPIO_AF_SPI3);
		GPIO_PinAFConfig(GPIOB, GPIO_PinSource4, GPIO_AF_SPI3);
		GPIO_PinAFConfig(GPIOB, GPIO_PinSource5, GPIO_AF_SPI3);
	}
#endif
#if defined(GPIOC)
	if (pinspack == SPI_PinsPack_2) {
		GPIO_InitAlternate(GPIOC, GPIO_Pin_10 | GPIO_Pin_11 | GPIO_Pin_12,  GPIO_OType_PP,  GPIO_PuPd_NOPULL,  GPIO_High_Speed, GPIO_AF_SPI3);
		GPIO_PinAFConfig(GPIOC, GPIO_PinSource10, GPIO_AF_SPI3);
		GPIO_PinAFConfig(GPIOC, GPIO_PinSource11, GPIO_AF_SPI3);
		GPIO_PinAFConfig(GPIOC, GPIO_PinSource12, GPIO_AF_SPI3);
	}
#endif
	if (pinspack == SPI_PinsPack_Custom) {
		/* Call user function */
		//SPI_InitCustomPinsCallback(SPI3, GPIO_AF_SPI3);
	}
}
#endif

#ifdef USE_SPI4
void SPI4_INT_InitPins(SPI_PinsPack_t pinspack) {
	/* Init SPI pins */
#if defined(GPIOE)
	if (pinspack == SPI_PinsPack_1) {
		GPIO_InitAlternate(GPIOE, GPIO_Pin_2 | GPIO_Pin_5 | GPIO_Pin_6,  GPIO_OType_PP,  GPIO_PuPd_NOPULL,  GPIO_High_Speed, GPIO_AF_SPI4);
		GPIO_PinAFConfig(GPIOE, GPIO_PinSource2, GPIO_AF_SPI4);
		GPIO_PinAFConfig(GPIOE, GPIO_PinSource5, GPIO_AF_SPI4);
		GPIO_PinAFConfig(GPIOE, GPIO_PinSource6, GPIO_AF_SPI4);
	}
#endif
#if defined(GPIOE)
	if (pinspack == SPI_PinsPack_2) {
		GPIO_InitAlternate(GPIOE, GPIO_Pin_12 | GPIO_Pin_13 | GPIO_Pin_14,  GPIO_OType_PP,  GPIO_PuPd_NOPULL,  GPIO_High_Speed, GPIO_AF_SPI4);
		GPIO_PinAFConfig(GPIOE, GPIO_PinSource12, GPIO_AF_SPI4);
		GPIO_PinAFConfig(GPIOE, GPIO_PinSource13, GPIO_AF_SPI4);
		GPIO_PinAFConfig(GPIOE, GPIO_PinSource14, GPIO_AF_SPI4);
	}
#endif
	if (pinspack == SPI_PinsPack_Custom) {
		/* Call user function */
		//SPI_InitCustomPinsCallback(SPI4, GPIO_AF_SPI4);
	}
}
#endif

#ifdef USE_SPI5
void SPI5_INT_InitPins(SPI_PinsPack_t pinspack) {
	/* Init SPI pins */
#if defined(GPIOF)
	if (pinspack == SPI_PinsPack_1) {
		GPIO_InitAlternate(GPIOF, GPIO_Pin_7 | GPIO_Pin_8 | GPIO_Pin_9,  GPIO_OType_PP,  GPIO_PuPd_NOPULL,  GPIO_High_Speed, GPIO_AF_SPI5);
		GPIO_PinAFConfig(GPIOF, GPIO_PinSource7, GPIO_AF_SPI5);
		GPIO_PinAFConfig(GPIOF, GPIO_PinSource8, GPIO_AF_SPI5);
		GPIO_PinAFConfig(GPIOF, GPIO_PinSource9, GPIO_AF_SPI5);
	}
#endif
#if defined(GPIOF) && defined(GPIOH)
	if (pinspack == SPI_PinsPack_2) {
		GPIO_InitAlternate(GPIOF, GPIO_Pin_11,  GPIO_OType_PP,  GPIO_PuPd_NOPULL,  GPIO_High_Speed, GPIO_AF_SPI5);
		GPIO_InitAlternate(GPIOH, GPIO_Pin_6 | GPIO_Pin_7,  GPIO_OType_PP,  GPIO_PuPd_NOPULL,  GPIO_High_Speed, GPIO_AF_SPI5);
		GPIO_PinAFConfig(GPIOF, GPIO_PinSource11 , GPIO_AF_SPI5);
		GPIO_PinAFConfig(GPIOH, GPIO_PinSource6, GPIO_AF_SPI5);
		GPIO_PinAFConfig(GPIOH, GPIO_PinSource7, GPIO_AF_SPI5);
	}
#endif
	if (pinspack == SPI_PinsPack_Custom) {
		/* Call user function */
		//SPI_InitCustomPinsCallback(SPI5, GPIO_AF_SPI5);
	}
}
#endif

#ifdef USE_SPI6
void SPI6_INT_InitPins(SPI_PinsPack_t pinspack) {
#if defined(GPIOG)
	if (pinspack == SPI_PinsPack_1) {
		/* Init SPI pins */
		GPIO_InitAlternate(GPIOG, GPIO_Pin_12 | GPIO_Pin_13 | GPIO_Pin_14,  GPIO_OType_PP,  GPIO_PuPd_NOPULL,  GPIO_High_Speed, GPIO_AF_SPI6);
		GPIO_PinAFConfig(GPIOG, GPIO_PinSource12, GPIO_AF_SPI6);
		GPIO_PinAFConfig(GPIOG, GPIO_PinSource13, GPIO_AF_SPI6);
		GPIO_PinAFConfig(GPIOG, GPIO_PinSource14, GPIO_AF_SPI6);
	}
#endif
	if (pinspack == SPI_PinsPack_Custom) {
		/* Call user function */
		//SPI_InitCustomPinsCallback(SPI6, GPIO_AF_SPI6);
	}
}

/**
  * @}
  */
void GPIO_InitAlternate(GPIO_TypeDef* GPIOx, uint16_t GPIO_Pin, GPIOOType_TypeDef GPIO_OType, GPIOPuPd_TypeDef GPIO_PuPd, GPIOSpeed_TypeDef GPIO_Speed, uint8_t Alternate) {
	GPIO_InitTypeDef GPIO_InitStruct;

	/* Check input */
	if (GPIO_Pin == 0x00) {
		return;
	}
	
	/* Enable GPIOx clock */
	GPIO_INT_EnableClock(GPIOx);
	
	/* Do initialization */
 	GPIO_InitStruct.GPIO_Pin   	= GPIO_Pin; 
 	GPIO_InitStruct.GPIO_Mode  	= GPIO_Mode_AF; 
 	GPIO_InitStruct.GPIO_Speed  = GPIO_Speed;
	GPIO_InitStruct.GPIO_OType  = GPIO_OType; 
 	GPIO_InitStruct.GPIO_PuPd  	= GPIO_PuPd; 
 	GPIO_Init(GPIOx, &GPIO_InitStruct);
}

/**
  * @}
  */
void GPIO_INT_EnableClock(GPIO_TypeDef* GPIOx) 
{
		if(GPIOx == GPIOA) {
			RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOA, ENABLE); 	 
		}
		else if(GPIOx == GPIOB) {
			RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOB, ENABLE); 	 
		}
		else if(GPIOx == GPIOC) {
			RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOC, ENABLE); 	 
		}
		else if(GPIOx == GPIOD) {
			RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOD, ENABLE); 	 
		}
		else if(GPIOx == GPIOE) {
			RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOE, ENABLE); 	 
		}
		else if(GPIOx == GPIOF) {
			RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOF, ENABLE); 	 
		}
		else if(GPIOx == GPIOG) {
			RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOG, ENABLE); 	 
		}
		else if(GPIOx == GPIOH) {
			RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOH, ENABLE); 	 
		}
		else if(GPIOx == GPIOI) {
			RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOI, ENABLE); 	 
		}
}
#endif
