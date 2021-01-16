/* Includes ------------------------------------------------------------------*/
#include "graphics.h"


/* Private typedef -----------------------------------------------------------*/
/* Private define ------------------------------------------------------------*/
/* Private macro -------------------------------------------------------------*/
/* Private variables ---------------------------------------------------------*/
/* Private function prototypes -----------------------------------------------*/
/* Private functions ---------------------------------------------------------*/

/**
  * @brief  Main program
  * @param  None
  * @retval None
  */
void ClearSDRAM(void)
{
	uint32_t counter = 0x0;
	/* Erase SDRAM memory */
  for (counter = 0x00; counter < IS42S16400J_SIZE; counter++)
  {
    *(__IO uint16_t*) (SDRAM_BANK_ADDR + 2*counter) = (uint16_t)0x00;
  }
	
}

	

void Write_8b(uint8_t data_8b, uint32_t location){
  /* Write 8b data value to  SDRAM memory */
    *(__IO uint8_t*) (SDRAM_BANK_ADDR + location) = (uint8_t)(data_8b);
}


uint8_t Read_8b(uint32_t location){
	/* Read 8b data value from SDRAM memory */
		return *(__IO uint8_t*)(SDRAM_BANK_ADDR + location);
}
	
void WriteString(uint8_t* string, uint32_t StartLocation) {
	while(*string != 0)
	{
		Write_8b(*string, StartLocation);
		string++;
		StartLocation++;
	}
	// terminator
	Write_8b( (uint8_t)'\0', StartLocation);
}
void ReadString(uint8_t* string, uint32_t StartLocation)
{
	while(*(__IO uint8_t*)(SDRAM_BANK_ADDR + StartLocation) != 0)
	{
		*string = Read_8b(StartLocation);
		string++;
		StartLocation++;
	}
	// terminator
	*string = (uint8_t) '\0'; 
}
