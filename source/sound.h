#ifndef __SOUND_H
#define __SOUND_H

/* Includes ------------------------------------------------------------------*/
#include "timers.h"
#include "pwm.h"


/* Exported types ------------------------------------------------------------*/
/* Exported constants --------------------------------------------------------*/
#define SOUND_FREQ 	200
#define SOUND_TIME	10
#define MUTE				0
#define SOUND_TIMER	TIM7
/* Exported macro ------------------------------------------------------------*/
/* Exported functions ------------------------------------------------------- */
void SOUND_beep(void);
void SOUND_tim(void);
void SOUND_mute(void);
void SOUND_beep(void);
void SOUND_play(void);

#endif /* __SOUND_H */
