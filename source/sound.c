#include "sound.h"

/* Private typedef -----------------------------------------------------------*/
/* Private define ------------------------------------------------------------*/

/**
  * @brief  
  * @param  
  * @retval 
  */
void SOUND_beep(void){
	SOUND_play();
	TIM_Enable(SOUND_TIMER);
}

void SOUND_tim(void){
	SOUND_mute();
	TIM_Disable(SOUND_TIMER);
}

void SOUND_mute(void){
	TIM4->CCR1 = MUTE;
}

void SOUND_play(void){
	TIM4->CCR1 = SOUND_FREQ;
}
