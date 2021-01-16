#ifndef __FONTS_H
#define __FONTS_H

#ifdef __cplusplus
 extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include <stdint.h>


/** @addtogroup FONTS
  * @{
  */ 

/** @defgroup FONTS_Exported_Types
  * @{
  */ 
typedef struct _tFont
{    
  const uint16_t *table;
  uint16_t Width;
  uint16_t Height;
  
} sFONT;

extern sFONT Font16x24;
extern sFONT Font12x12;
extern sFONT Font8x12;
extern sFONT Font8x8;

/** @defgroup FONTS_Exported_Constants
  * @{
  */ 
#define LINE(x) ((x) * (((sFONT *)LCD_GetFont())->Height))

#ifdef __cplusplus
}
#endif
  
#endif /* __FONTS_H */
