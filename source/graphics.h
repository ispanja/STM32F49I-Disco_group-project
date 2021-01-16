/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __GRAPHICS_H
#define __GRAPHICS_H

/* Includes ------------------------------------------------------------------*/
#include <stm32f4xx.h>
#include <stdio.h>
#include "sdram.h"

/* Exported types ------------------------------------------------------------*/
/* Exported constants --------------------------------------------------------*/

#define IS42S16400J_SIZE             0x400000

/* Start Screen*/
/***********************/
#define MESSAGE1 	/**/"  BALL GAME"/**/ 
#define	MESSAGE2 	/**/"2016/2017"/**/
#define	MESSAGE3 	/**/"   Choose "/**/
#define	MESSAGE4 	/**/" ball color"/**/
#define	MESSAGE5 	/**/"    Touch "/**/
#define	MESSAGE6 	/**/"   to start"/**/
/***********************/
/* Pause */

/***********************/
#define MESSAGE7 	/**/" Time's up!"/**/ 
#define	MESSAGE8 	/**/"Game paused"/**/
#define	MESSAGE9 	/**/"   Touch to"/**/
#define	MESSAGE10 	/**/"   continue"/**/
#define	MESSAGE11		/**/"Pick color:"/**/
#define	message2 	"          2016/2017"
/* Exported macro ------------------------------------------------------------*/
/* Exported functions ------------------------------------------------------- */
void ClearSDRAM(void);
void Write_8b(uint8_t data_8b, uint32_t location);
uint8_t Read_8b(uint32_t location);
void WriteString(uint8_t* string, uint32_t StartLocation) ;
void ReadString(uint8_t* string, uint32_t StartLocation);

#endif /* ___H */
