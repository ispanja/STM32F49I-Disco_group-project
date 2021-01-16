
#ifndef __BALL_H
#define __BALL_H

/* Includes ------------------------------------------------------------------*/
#include <stm32f4xx.h>
#include <stdlib.h>
#include "lcd.h"
#include "mems.h"
#include "timers.h"
#include "sound.h"
#include "systick.h"

/* Defines ------------------------------------------------------------------*/
#define LEFT_BOUNDARY 		10
#define RIGHT_BOUNDARY		310
#define TOP_BOUNDARY			10
#define BOTTOM_BOUNDARY		230

#define BALL_RADIUS				20
#define BALL_COLOR		LCD_COLOR_GREEN
#define WALL_BOUNCE			 -0.7
#define SENSOR_DENSITY		0.06
#define FRICTION					0.5
/* Exported types ------------------------------------------------------------*/
typedef struct 
{
  int16_t X;
  int16_t Y;
	int16_t Vx;
	int16_t Vy;
} Ball, * pBall; 
/* Exported constants --------------------------------------------------------*/

/* Exported macro ------------------------------------------------------------*/

/* Exported functions ------------------------------------------------------- */
void BALL_Display(Ball ball);
void BALL_Update(L3GD20_t L3GD20_Data, Ball* ball);


#endif /* __BALL_H */
