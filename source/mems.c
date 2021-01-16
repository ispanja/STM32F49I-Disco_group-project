#include "mems.h"

/* Private typedef -----------------------------------------------------------*/
/* Private define ------------------------------------------------------------*/
/* Private macro -------------------------------------------------------------*/
/* Private variables ---------------------------------------------------------*/
uint16_t L3GD20_INT_Scale;

/* Private function prototypes -----------------------------------------------*/
/* Private functions ---------------------------------------------------------*/
extern void 		L3GD20_INT_InitPins(void);
extern uint8_t 	L3GD20_INT_ReadSPI(uint8_t address);
extern void 		L3GD20_INT_WriteSPI(uint8_t address, uint8_t data);
/* Public */


/**
  * @brief  Main program
  * @param  scale L3GD20_Scale_250,  < Set full scale to 250 mdps
	*								L3GD20_Scale_500,  < Set full scale to 500 mdps 
	*								L3GD20_Scale_2000  < Set full scale to 2000 mdps 
  * @retval None
  */
uint16_t  L3GD20_Init(uint8_t scale) {
	GPIO_InitTypeDef GPIO_InitStruct;	
	
	/* Init CS pin for SPI */
	RCC_AHB1PeriphClockCmd(L3GD20_CS_CLOCK, ENABLE);
	
	GPIO_InitStruct.GPIO_Pin   	= L3GD20_CS_PIN; 
 	GPIO_InitStruct.GPIO_Mode  	= GPIO_Mode_OUT; 
 	GPIO_InitStruct.GPIO_Speed  = GPIO_Speed_25MHz;
	GPIO_InitStruct.GPIO_OType  = GPIO_OType_PP; 
 	GPIO_InitStruct.GPIO_PuPd  	= GPIO_PuPd_NOPULL;
 	GPIO_Init(L3GD20_CS_PORT, &GPIO_InitStruct);
	/* Set CS high */
	L3GD20_CS_HIGH;
	
	/* Init SPI */
	SPI_Init_lowLevel(L3GD20_SPI, L3GD20_SPI_PINSPACK);
	
	/* Enable L3GD20 Power bit */
	L3GD20_INT_WriteSPI(L3GD20_REG_CTRL_REG1, 0xFF);

	/* Set L3GD20 scale */
	
	L3GD20_INT_WriteSPI(L3GD20_REG_CTRL_REG4, scale);
	
	
	/* Save scale */
	L3GD20_INT_Scale = scale;

	/* Set high-pass filter settings */
	L3GD20_INT_WriteSPI(L3GD20_REG_CTRL_REG2, 0x00);

	/* Enable high-pass filter */
	L3GD20_INT_WriteSPI(L3GD20_REG_CTRL_REG5, 0x10);
	
	/* Everything OK */
	return 1;
}

uint16_t  L3GD20_Read( L3GD20_t* L3DG20_Data) {
	float temp, s;
	
	/* Read X axis */
	L3DG20_Data->X =  L3GD20_INT_ReadSPI(L3GD20_REG_OUT_X_L);
	L3DG20_Data->X |=  L3GD20_INT_ReadSPI(L3GD20_REG_OUT_X_H) << 8;

	/* Read Y axis */
	L3DG20_Data->Y =  L3GD20_INT_ReadSPI(L3GD20_REG_OUT_Y_L);
	L3DG20_Data->Y |=  L3GD20_INT_ReadSPI(L3GD20_REG_OUT_Y_H) << 8;
	
	/* Read Z axis */
	L3DG20_Data->Z =  L3GD20_INT_ReadSPI(L3GD20_REG_OUT_Z_L);
	L3DG20_Data->Z |=  L3GD20_INT_ReadSPI(L3GD20_REG_OUT_Z_H) << 8;
	
	/* Set sensitivity scale correction */
	if ( L3GD20_INT_Scale ==  L3GD20_Scale_250) {
		/* Sensitivity at 250 range = 8.75 mdps/digit */
		s = L3GD20_SENSITIVITY_250 * 0.001;
	} else if ( L3GD20_INT_Scale ==  L3GD20_Scale_500) {
		/* Sensitivity at 500 range = 17.5 mdps/digit */
		s = L3GD20_SENSITIVITY_500 * 0.001;
	} else {
		/* Sensitivity at 2000 range = 70 mdps/digit */
		s = L3GD20_SENSITIVITY_2000 * 0.001;
	}
	
	temp = (float)L3DG20_Data->X * s;
	L3DG20_Data->X = (int16_t) temp;
	temp = (float)L3DG20_Data->Y * s;
	L3DG20_Data->Y = (int16_t) temp;
	temp = (float)L3DG20_Data->Z * s;
	L3DG20_Data->Z = (int16_t) temp;
	
	/* Return OK */
	return  1;
}

/**
  * @brief  Main program
  * @param  None
  * @retval None
  */
uint8_t L3GD20_INT_ReadSPI(uint8_t address) {
	uint8_t data;
	/* CS low */
	L3GD20_CS_LOW;
	/* Send address with read command */
	SPI_Send(L3GD20_SPI, address | 0x80);
	/* Read data */
	data = SPI_Send(L3GD20_SPI, 0xFF);
	/* CS high */
	L3GD20_CS_HIGH;
	/* Return data */
	return data;
}
/**
  * @}
  */
/**
  * @}
  */
void L3GD20_INT_WriteSPI(uint8_t address, uint8_t data) {
	/* CS low */
	L3GD20_CS_LOW;
	/* Send address with write command */
	SPI_Send(L3GD20_SPI, address);
	/* Write data */
	SPI_Send(L3GD20_SPI, data);
	/* CS high */
	L3GD20_CS_HIGH;
}
/**
  * @}
  */
/**
  * @}
  */
/**
  * @}
  */
