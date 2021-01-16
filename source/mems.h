#ifndef __MEMS_H
#define __MEMS_H

/* Includes ------------------------------------------------------------------*/
#include <stm32f4xx.h>
#include <stm32f4xx_spi.h>
#include <stm32f4xx_rcc.h>
#include "spi.h"

/* Private define ------------------------------------------------------------*/
/* Default SPI, used on STM32F429 Discovery board */
#ifndef L3GD20_SPI
#define L3GD20_SPI				  		SPI5
#define L3GD20_SPI_PINSPACK			SPI_PinsPack_1
#endif

/* Default CS pin on STM32F429 Discovery board */
#ifndef L3GD20_CS_PIN
#define L3GD20_CS_PORT			GPIOC
#define L3GD20_CS_PIN				GPIO_Pin_1
#define L3GD20_CS_CLOCK			RCC_AHB1Periph_GPIOC 
#endif
/*---------------------------------------------------------------------------------------*/
/* Pin macros */

/**
 * @brief  Sets pin(s) low
 * @note   Defined as macro to get maximum speed using register access
 * @param  GPIOx: GPIOx PORT where you want to set pin low
 * @param  GPIO_Pin: Select GPIO pin(s). You can select more pins with | (OR) operator to set them low
 * @retval None
 */
#define GPIO_SetPinLow(GPIOx, GPIO_Pin)			((GPIOx)->BSRRH = (GPIO_Pin))

/**
 * @brief  Sets pin(s) high
 * @note   Defined as macro to get maximum speed using register access
 * @param  GPIOx: GPIOx PORT where you want to set pin high
 * @param  GPIO_Pin: Select GPIO pin(s). You can select more pins with | (OR) operator to set them high
 * @retval None
 */
#define GPIO_SetPinHigh(GPIOx, GPIO_Pin) 		((GPIOx)->BSRRL = (GPIO_Pin))

#define L3GD20_CS_LOW				GPIO_SetPinLow(L3GD20_CS_PORT, L3GD20_CS_PIN)
#define L3GD20_CS_HIGH			GPIO_SetPinHigh(L3GD20_CS_PORT, L3GD20_CS_PIN)

/* Identification number */
#define L3GD20_WHO_AM_I				0xD4

/* Registers addresses */
#define L3GD20_REG_WHO_AM_I			0x0F
#define L3GD20_REG_CTRL_REG1		0x20
#define L3GD20_REG_CTRL_REG2		0x21
#define L3GD20_REG_CTRL_REG3		0x22
#define L3GD20_REG_CTRL_REG4		0x23
#define L3GD20_REG_CTRL_REG5		0x24
#define L3GD20_REG_REFERENCE		0x25
#define L3GD20_REG_OUT_TEMP			0x26
#define L3GD20_REG_STATUS_REG		0x27
#define L3GD20_REG_OUT_X_L			0x28
#define L3GD20_REG_OUT_X_H			0x29
#define L3GD20_REG_OUT_Y_L			0x2A
#define L3GD20_REG_OUT_Y_H			0x2B
#define L3GD20_REG_OUT_Z_L			0x2C
#define L3GD20_REG_OUT_Z_H			0x2D
#define L3GD20_REG_FIFO_CTRL_REG	0x2E
#define L3GD20_REG_FIFO_SRC_REG		0x2F
#define L3GD20_REG_INT1_CFG			0x30
#define L3GD20_REG_INT1_SRC			0x31
#define L3GD20_REG_INT1_TSH_XH		0x32
#define L3GD20_REG_INT1_TSH_XL		0x33
#define L3GD20_REG_INT1_TSH_YH		0x34
#define L3GD20_REG_INT1_TSH_YL		0x35
#define L3GD20_REG_INT1_TSH_ZH		0x36
#define L3GD20_REG_INT1_TSH_ZL		0x37
#define L3GD20_REG_INT1_DURATION	0x38

/* Sensitivity factors, datasheet pg. 9 */
#define L3GD20_SENSITIVITY_250		8.75	/* 8.75 mdps/digit */
#define L3GD20_SENSITIVITY_500		17.5	/* 17.5 mdps/digit */
#define L3GD20_SENSITIVITY_2000		70		/* 70 mdps/digit */

/* Scale */
#define L3GD20_Scale_250 	0x00	//< Set full scale to 250 mdps
#define L3GD20_Scale_500  0x10	//< Set full scale to 500 mdps 
#define	L3GD20_Scale_2000 0x20	//< Set full scale to 2000 mdps

/* Exported types ------------------------------------------------------------*/

/**
 * @brief  L3GD20 main working structure
 */
 
typedef struct {
	int16_t X; /*!< X axis rotation */
	int16_t Y; /*!< Y axis rotation */
	int16_t Z; /*!< Z axis rotation */
} L3GD20_t;


/* Exported constants --------------------------------------------------------*/
/* Exported macro ------------------------------------------------------------*/
/* Exported functions ------------------------------------------------------- */

/**
 * @brief  Initializes L3GD20 sensor
 * @param  scale: L3GD20 scale selection. This parameter can be a value of @ref L3GD20_Scale_t enumeration
 * @retval Sensor status:
 *            - 1: Sensor detected
 *            - 0: Sensor not detected
 */
uint16_t L3GD20_Init(uint8_t scale);

/**
 * @brief  Reads rotation data from sensor
 * @param  *L3DG20_Data: Pointer to working @ef L3GD20_t structure
 * @retval Read status: TM_L3GD20_Result_Ok
 */
uint16_t L3GD20_Read(L3GD20_t* L3DG20_Data);
/**
  * @}
  */

#endif /* __MEMS_H */
