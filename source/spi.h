#ifndef __SPI_H
#define __SPI_H

#ifdef __cplusplus
 extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include <stm32f4xx.h>
#include <stm32f4xx_spi.h>
#include <stm32f4xx_rcc.h>


/* Exported typedefs ------------------------------------------------------------*/

/**
 * @brief  SPI modes selection
 */
typedef enum {
	SPI_Mode_0, /*!< Clock polarity low, clock phase 1st edge */
	SPI_Mode_1, /*!< Clock polarity low, clock phase 2nd edge */
	SPI_Mode_2, /*!< Clock polarity high, clock phase 1st edge */
	SPI_Mode_3  /*!< Clock polarity high, clock phase 2nd edge */
} SPI_Mode_t;	 
	 
/**
 * @brief  SPI PinsPack enumeration to select pins combination for SPI
 */
typedef enum {
	SPI_PinsPack_1,       /*!< Select PinsPack1 from Pinout table for specific SPI */
	SPI_PinsPack_2,       /*!< Select PinsPack2 from Pinout table for specific SPI */
	SPI_PinsPack_3,       /*!< Select PinsPack3 from Pinout table for specific SPI */
	SPI_PinsPack_Custom   /*!< Select custom pins for specific SPI, callback will be called, look @ref TM_SPI_InitCustomPinsCallback */
} SPI_PinsPack_t;

/**
 * @brief  Supported SPI modules 
 */
#define USE_SPI1
#define USE_SPI2
#define USE_SPI3
#ifdef SPI4
#define USE_SPI4
#else
#warning "SPI4 undefined. Please update library with STD drivers from ST.com"
#endif
#ifdef SPI5
#define USE_SPI5
#else
#warning "SPI5 undefined. Please update library with STD drivers from ST.com"
#endif
#ifdef SPI6
#define USE_SPI6
#else
#warning "SPI6 undefined. Please update library with STD drivers from ST.com"
#endif

//----- SPI1 options start -------
//Options can be overwriten in defines.h file
#ifndef SPI1_PRESCALER
#define SPI1_PRESCALER	SPI_BaudRatePrescaler_32
#endif
//Specify datasize
#ifndef SPI1_DATASIZE
#define SPI1_DATASIZE 	SPI_DataSize_8b
#endif
//Specify which bit is first
#ifndef SPI1_FIRSTBIT
#define SPI1_FIRSTBIT 	SPI_FirstBit_MSB
#endif
//Mode, master or slave
#ifndef SPI1_MASTERSLAVE
#define SPI1_MASTERSLAVE	SPI_Mode_Master
#endif
//Specify clock polarity  clock phase
#ifndef SPI1_CLOCK_POLARITY
#define SPI1_CLOCK_POLARITY		SPI_CPOL_Low
#endif
//Specify clock polarity  clock phase
#ifndef SPI1_CLOCK_PHASE
#define SPI1_CLOCK_PHASE		SPI_CPHA_1Edge
#endif

//----- SPI1 options end -------

//----- SPI2 options start -------
//Options can be overwriten in defines.h file
#ifndef SPI2_PRESCALER
#define SPI2_PRESCALER	SPI_BaudRatePrescaler_32
#endif
//Specify datasize
#ifndef SPI2_DATASIZE
#define SPI2_DATASIZE 	SPI_DataSize_8b
#endif
//Specify which bit is first
#ifndef SPI2_FIRSTBIT
#define SPI2_FIRSTBIT 	SPI_FirstBit_MSB
#endif
//Mode, master or slave
#ifndef SPI2_MASTERSLAVE
#define SPI2_MASTERSLAVE SPI_Mode_Master
#endif
//Specify clock polarity  clock phase
#ifndef SPI2_CLOCK_POLARITY
#define SPI2_CLOCK_POLARITY		SPI_CPOL_Low
#endif
//Specify clock polarity  clock phase
#ifndef SPI2_CLOCK_PHASE
#define SPI2_CLOCK_PHASE		SPI_CPHA_1Edge
#endif
//----- SPI2 options end -------

//----- SPI3 options start -------
//Options can be overwriten in defines.h file
#ifndef SPI3_PRESCALER
#define SPI3_PRESCALER	SPI_BaudRatePrescaler_32
#endif
//Specify datasize
#ifndef SPI3_DATASIZE
#define SPI3_DATASIZE 	SPI_DataSize_8b
#endif
//Specify which bit is first
#ifndef SPI3_FIRSTBIT
#define SPI3_FIRSTBIT 	SPI_FirstBit_MSB
#endif
//Mode, master or slave
#ifndef SPI3_MASTERSLAVE
#define SPI3_MASTERSLAVE SPI_Mode_Master
#endif
//Specify clock polarity  clock phase
#ifndef SPI3_CLOCK_POLARITY
#define SPI3_CLOCK_POLARITY		SPI_CPOL_Low
#endif
//Specify clock polarity  clock phase
#ifndef SPI3_CLOCK_PHASE
#define SPI3_CLOCK_PHASE		SPI_CPHA_1Edge
#endif
//----- SPI3 options end -------

//----- SPI4 options start -------
//Options can be overwriten in defines.h file
#ifndef SPI4_PRESCALER
#define SPI4_PRESCALER	SPI_BaudRatePrescaler_32
#endif
//Specify datasize
#ifndef SPI4_DATASIZE
#define SPI4_DATASIZE 	SPI_DataSize_8b
#endif
//Specify which bit is first
#ifndef SPI4_FIRSTBIT
#define SPI4_FIRSTBIT 	SPI_FirstBit_MSB
#endif
//Mode, master or slave
#ifndef SPI4_MASTERSLAVE
#define SPI4_MASTERSLAVE	SPI_Mode_Master
#endif
//Specify clock polarity  clock phase
#ifndef SPI4_CLOCK_POLARITY
#define SPI4_CLOCK_POLARITY		SPI_CPOL_Low
#endif
//Specify clock polarity  clock phase
#ifndef SPI4_CLOCK_PHASE
#define SPI4_CLOCK_PHASE		SPI_CPHA_1Edge
#endif
//----- SPI4 options end -------

//----- SPI5 options start -------
//Options can be overwriten in defines.h file
#ifndef SPI5_PRESCALER
#define SPI5_PRESCALER	SPI_BaudRatePrescaler_32
#endif
//Specify datasize
#ifndef SPI5_DATASIZE
#define SPI5_DATASIZE 	SPI_DataSize_8b
#endif
//Specify which bit is first
#ifndef SPI5_FIRSTBIT
#define SPI5_FIRSTBIT 	SPI_FirstBit_MSB
#endif
//Mode, master or slave
#ifndef SPI5_MASTERSLAVE
#define SPI5_MASTERSLAVE SPI_Mode_Master
#endif
//Specify clock polarity  clock phase
#ifndef SPI5_CLOCK_POLARITY
#define SPI5_CLOCK_POLARITY		SPI_CPOL_Low
#endif
//Specify clock polarity  clock phase
#ifndef SPI5_CLOCK_PHASE
#define SPI5_CLOCK_PHASE		SPI_CPHA_1Edge
#endif
//----- SPI5 options end -------

//----- SPI6 options start -------
//Options can be overwriten in defines.h file
#ifndef SPI6_PRESCALER
#define SPI6_PRESCALER	SPI_BaudRatePrescaler_32
#endif
//Specify datasize
#ifndef SPI6_DATASIZE
#define SPI6_DATASIZE 	SPI_DataSize_8b
#endif
//Specify which bit is first
#ifndef SPI6_FIRSTBIT
#define SPI6_FIRSTBIT 	SPI_FirstBit_MSB
#endif
//Mode, master or slave
#ifndef SPI6_MASTERSLAVE
#define SPI6_MASTERSLAVE SPI_Mode_Master
#endif
//Specify clock polarity  clock phase
#ifndef SPI6_CLOCK_POLARITY
#define SPI6_CLOCK_POLARITY		SPI_CPOL_Low
#endif
//Specify clock polarity  clock phase
#ifndef SPI6_CLOCK_PHASE
#define SPI6_CLOCK_PHASE		SPI_CPHA_1Edge
#endif
//----- SPI6 options end -------

/* Exported macro ------------------------------------------------------------*/

/**
 * @brief  Check SPI busy status
 */
#define SPI_IS_BUSY(SPIx) (((SPIx)->SR & (SPI_SR_TXE | SPI_SR_RXNE)) == 0 || ((SPIx)->SR & SPI_SR_BSY))

/**
 * @brief  SPI wait till end
 */
#define SPI_WAIT(SPIx)            while (SPI_IS_BUSY(SPIx))

/**
 * @brief  Checks if SPI is enabled
 */
#define SPI_CHECK_ENABLED(SPIx)   if (!((SPIx)->CR1 & SPI_CR1_SPE)) {return;}

/**
 * @brief  Checks if SPI is enabled and returns value from function if not 
 */
#define SPI_CHECK_ENABLED_RESP(SPIx, val)   if (!((SPIx)->CR1 & SPI_CR1_SPE)) {return (val);}

	 
/* Exported constants --------------------------------------------------------*/
/* Exported functions ------------------------------------------------------- */

/**
 * @brief  Initializes SPIx peripheral with custom pinspack and default other settings
 * @param  *SPIx: Pointer to SPIx peripheral you will use, where x is between 1 to 6
 * @param  pinspack: Pinspack you will use from default SPI table. This parameter can be a value of @ref SPI_PinsPack_t enumeration
 * @retval None
 */
void SPI_Init_lowLevel(SPI_TypeDef* SPIx, SPI_PinsPack_t pinspack);

/**
 * @defgroup SPI_Functions
 * @brief    Library Functions
 * @{
 */

/**
 * @brief  Initializes SPIx peripheral with custom pinspack and default other settings
 * @param  *SPIx: Pointer to SPIx peripheral you will use, where x is between 1 to 6
 * @param  pinspack: Pinspack you will use from default SPI table. This parameter can be a value of @ref TM_SPI_PinsPack_t enumeration
 * @retval None
 */
void SPI_Init_lowLevel(SPI_TypeDef* SPIx, SPI_PinsPack_t pinspack);

/**
 * @brief  Initializes SPIx peripheral with custom settings
 * @param  *SPIx: Pointer to SPIx peripheral you will use, where x is between 1 to 6
 * @param  pinspack: Pinspack you will use from default SPI table. This parameter can be a value of @ref SPI_PinsPack_t enumeration
 * @param  SPI_BaudRatePrescaler: SPI baudrate prescaler. This parameter can be a value of @ref SPI_BaudRatePrescaler
 * @param  SPI_Mode_t: SPI mode you will use. This parameter can be a value of @ref TM_SPI_Mode_t enumeration
 * @param  SPI_Mode: SPI mode you will use:
 *            - SPI_Mode_Master: SPI in master mode (default)
 *            - SPI_Mode_Slave: SPI in slave mode
 * @param  SPI_FirstBit: select first bit for SPI
 *            - SPI_FirstBit_MSB: MSB is first bit (default)
 *            - SPI_FirstBit_LSB: LSB is first bit
 * @retval None
 */ /*TODO: dokumentacija*/
void SPI_InitFull(SPI_TypeDef* SPIx, SPI_PinsPack_t pinspack, uint16_t SPI_Clock_Polarity, uint16_t SPI_Clock_Phase , uint16_t SPI_BaudRatePrescaler, uint16_t SPI_MasterSlave, uint16_t SPI_FirstBit);

/**
 * @brief  Calculates bits for SPI prescaler register to get minimal prescaler value for SPI peripheral
 * @note   SPI has 8 prescalers available, 2,4,6,...,128,256
 * @note   This function will return you a bits you must set in your CR1 register.
 *
 * @note   Imagine, you can use 20MHz max clock in your system, your system is running on 168MHz, and you use SPI on APB2 bus.
 *         On 168 and 180MHz devices, APB2 works on Fclk/2, so 84 and 90MHz.
 *         So, if you calculate this, prescaler will need to be 84MHz / 20MHz = 4.xx, but if you use 4 prescaler, then you will be over 20MHz.
 *         You need 8 prescaler then. This function will calculate this.
 * @param  *SPIx: Pointer to SPIx peripheral you will use, where x is between 1 to 6.
 *            Different SPIx works on different clock and is important to know for which SPI you need prescaler.
 * @param  MAX_SPI_Frequency: Max SPI frequency you can use. Function will calculate the minimum prescaler you need for that.
 *
 * @retval Bits combination for SPI_CR1 register, with aligned location already, prepared to set parameter for @ref TM_SPI_InitFull() function.
 */
uint16_t SPI_GetPrescalerFromMaxFrequency(SPI_TypeDef* SPIx, uint32_t MAX_SPI_Frequency);

/**
 * @brief  Sets data size for SPI at runtime
 * @note   You can select either 8 or 16 bits data array. 
 * @param  *SPIx: Pointer to SPIx peripheral where data size will be set
 * @param  DataSize: Datasize which will be used. This parameter can be a value of @ref TM_SPI_DataSize_t enumeration
 * @retval Status of data size before changes happen
 */
uint16_t SPI_SetDataSize(SPI_TypeDef* SPIx, uint16_t DataSize);

/**
 * @brief  Sends single byte over SPI
 * @param  *SPIx: Pointer to SPIx peripheral you will use, where x is between 1 to 6
 * @param  data: 8-bit data size to send over SPI
 * @retval Received byte from slave device
 */
static __INLINE uint8_t SPI_Send(SPI_TypeDef* SPIx, uint8_t data) {
	/* Check if SPI is enabled */
	SPI_CHECK_ENABLED_RESP(SPIx, 0);
	
	/* Wait for previous transmissions to complete if DMA TX enabled for SPI */
	SPI_WAIT(SPIx);
	
	/* Fill output buffer with data */
	SPIx->DR = data;
	
	/* Wait for transmission to complete */
	SPI_WAIT(SPIx);
	
	/* Return data from buffer */
	return SPIx->DR;
}

/**
 * @brief  Sends and receives multiple bytes over SPIx
 * @param  *SPIx: Pointer to SPIx peripheral you will use, where x is between 1 to 6
 * @param  *dataOut: Pointer to array with data to send over SPI
 * @param  *dataIn: Pointer to array to to save incoming data
 * @param  count: Number of bytes to send/receive over SPI
 * @retval None
 */
void SPI_SendMulti(SPI_TypeDef* SPIx, uint8_t* dataOut, uint8_t* dataIn, uint32_t count);

/**
 * @brief  Writes multiple bytes over SPI
 * @param  *SPIx: Pointer to SPIx peripheral you will use, where x is between 1 to 6
 * @param  *dataOut: Pointer to array with data to send over SPI
 * @param  count: Number of elements to send over SPI
 * @retval None
 */
void SPI_WriteMulti(SPI_TypeDef* SPIx, uint8_t* dataOut, uint32_t count);

/**
 * @brief  Receives multiple data bytes over SPI
 * @note   Selected SPI must be set in 16-bit mode
 * @param  *SPIx: Pointer to SPIx peripheral you will use, where x is between 1 to 6
 * @param  *dataIn: Pointer to 8-bit array to save data into
 * @param  dummy: Dummy byte  to be sent over SPI, to receive data back. In most cases 0x00 or 0xFF
 * @param  count: Number of bytes you want read from device
 * @retval None
 */
void SPI_ReadMulti(SPI_TypeDef* SPIx, uint8_t *dataIn, uint8_t dummy, uint32_t count);

/**
 * @brief  Sends single byte over SPI
 * @note   Selected SPI must be set in 16-bit mode
 * @param  *SPIx: Pointer to SPIx peripheral you will use, where x is between 1 to 6
 * @param  data: 16-bit data size to send over SPI
 * @retval Received 16-bit value from slave device
 */
static __INLINE uint16_t SPI_Send16(SPI_TypeDef* SPIx, uint8_t data) {
	/* Check if SPI is enabled */
	SPI_CHECK_ENABLED_RESP(SPIx, 0);
	
	/* Wait for previous transmissions to complete if DMA TX enabled for SPI */
	SPI_WAIT(SPIx);
	
	/* Fill output buffer with data */
	SPIx->DR = data;
	
	/* Wait for transmission to complete */
	SPI_WAIT(SPIx);
	
	/* Return data from buffer */
	return SPIx->DR;
}

/**
 * @brief  Sends and receives multiple bytes over SPIx in 16-bit SPI mode
 * @note   Selected SPI must be set in 16-bit mode
 * @param  *SPIx: Pointer to SPIx peripheral you will use, where x is between 1 to 6
 * @param  *dataOut: Pointer to array with data to send over SPI
 * @param  *dataIn: Pointer to array to to save incoming data
 * @param  count: Number of 16-bit values to send/receive over SPI
 * @retval None
 */
void SPI_SendMulti16(SPI_TypeDef* SPIx, uint16_t* dataOut, uint16_t* dataIn, uint32_t count);

/**
 * @brief  Writes multiple data via SPI in 16-bit SPI mode
 * @note   Selected SPI must be set in 16-bit mode
 * @param  *SPIx: Pointer to SPIx peripheral you will use, where x is between 1 to 6
 * @param  *dataOut: Pointer to 16-bit array with data to send over SPI
 * @param  count: Number of elements to send over SPI
 * @retval None
 */
void SPI_WriteMulti16(SPI_TypeDef* SPIx, uint16_t* dataOut, uint32_t count);

/**
 * @brief  Receives multiple data bytes over SPI in 16-bit SPI mode
 * @note   Selected SPI must be set in 16-bit mode
 * @param  *SPIx: Pointer to SPIx peripheral you will use, where x is between 1 to 6
 * @param  *dataIn: Pointer to 16-bit array to save data into
 * @param  dummy: Dummy 16-bit value to be sent over SPI, to receive data back. In most cases 0x00 or 0xFF
 * @param  count: Number of 16-bit values you want read from device
 * @retval None
 */
void SPI_ReadMulti16(SPI_TypeDef* SPIx, uint16_t* dataIn, uint16_t dummy, uint32_t count);

/**
 * @brief  Init custom SPI pins for your SPIx. This is callback function and will be called from my library if needed.
 * @note   When you call TM_SPI_Init() function, and if you pass TM_SPI_PinsPack_Custom to function,
 *         then this function will be called where you can initialize custom pins for SPI peripheral
 *
 * @note   You have to initialize MOSI, MISO and SCK pin
 *
 * @param  *SPIx: Pointer to SPIx peripheral for which you have to set your custom pin settings
 * @param  AlternateFunction: Alternate function which should be used for GPIO initialization
 * @retval None
 * @note   With __weak parameter to prevent link errors if not defined by user
 */
void SPI_InitCustomPinsCallback(SPI_TypeDef* SPIx, uint16_t AlternateFunction);


#ifdef __cplusplus
}
#endif

#endif /* __SPI_H */
