
#include "main.h"

/* Private typedef -----------------------------------------------------------*/
/* Private define ------------------------------------------------------------*/
/* Private macro -------------------------------------------------------------*/
/* Private variables ---------------------------------------------------------*/
__IO uint32_t ADCxConvertedValue;
__IO uint32_t ADCxConvertedColor = LCD_COLOR_GREEN;
uint32_t lines[]= {0, 30, 60, 80, 100, 120, 140, 160, 180, 200, 220, 240};
static TP_STATE* TP_State;
uint8_t StartScreenFlag=0;

/* Private function prototypes -----------------------------------------------*/
void drawStartScreen(void);
void FillSDRAM(void);
void startScreen(void);
void ADC_ReadColor(void);
void onPauseScreen(void);

/**
  * @brief   Main program
  * @param  None
  * @retval None
  */
int main(void)
{
	/* L3GD20 Struct */
	L3GD20_t L3GD20_Data;
	
	/* Ball Struct	*/
	Ball ball;
	
	/* LCD initialization */
  LCD_Init();
	
	/* Disable write protection */
	FMC_SDRAMWriteProtectionConfig(FMC_Bank1_SDRAM,DISABLE);
  FMC_SDRAMWriteProtectionConfig(FMC_Bank2_SDRAM,DISABLE); 

	/* ADC3 configuration *******************************************************/
  /*  - Enable peripheral clocks                                              */
  /*  - DMA2_Stream0 channel2 configuration                                   */
  /*  - Configure ADC Channel13 pin as analog input                           */
  /*  - Configure ADC3 Channel13 */
	ADC_init();
	
	
	EXT_INTERRUPT_Init(A, Pin_0, PULL_DOWN, RISING);
	EXT_INTERRUPT_AttachUserInterruptFunction(A, Pin_0, &ADC_ReadColor);

	
	/*Debugging*/
	gpio_init();
	
	/* SysTick initalization*/
	systickInit(MS_FREQUENCY);
	
	/*Timer - COunter intialization*/
	TIM_SetCoundtownTop(TIM1, NO_ACTIVITY_TIME);
	TIM_DefaultInit(TIM1);
	
	/* Configure PWM for sound */
	config_PWM();
	SOUND_mute();
	/* Configure sound timer	*/
	TIM_ResolutionInit(SOUND_TIMER, SOUND_TIME);
	TIM_AttachUserInterruptFunction(SOUND_TIMER, &SOUND_tim);
	
	/* L3GD20 Init*/
	L3GD20_Init(L3GD20_Scale_2000);
	
	FillSDRAM();
  /* Draw start screen on LCD */
  drawStartScreen();
	
	ball.X = 120;
	ball.Y = 160;
	ball.Vx = 0;
	ball.Vy = 0;
	LCD_SetTextColor(ADCxConvertedColor);
	BALL_Display(ball);
	
	/* Infinite loop */
  while (1)
  {
		
		/*If there is no activity reset game*/
		if(TIM_GetCountdownFlagStatus(TIM1) == 1){	
			drawStartScreen();
			LCD_SetTextColor(ADCxConvertedColor);
			BALL_Display(ball);
		}
	
		/* Read data */
		L3GD20_Read(&L3GD20_Data);
		/* Update ball position */
		BALL_Update(L3GD20_Data, &ball);
		
		/* Delay */
		delay_ms(45);
  }
}

/* Private functions ---------------------------------------------------------*/

/**
  * @brief  Draw start or on pause screen, depends on flag.
  * @param  None
  * @retval None
  */
void drawStartScreen(void)
{
	/* Set LCD foreground layer */
	LCD_SetLayer(LCD_FOREGROUND_LAYER);
	
	/* Stop counter for no activity check*/
	TIM_Cmd(TIM1, DISABLE);
			
	/*Check if touch panel initialization is done*/
	if (IOE_Config() == IOE_OK)
	{   
		
		/* Clear LCD and set background color */
		LCD_Clear(LCD_COLOR_MAGENTA);
		/* Set LCD font */
		LCD_SetFont(&Font16x24);
		/* Set LCD back color*/
		LCD_SetBackColor(LCD_COLOR_MAGENTA);
		/* Set LCD text color */
		LCD_SetTextColor(LCD_COLOR_YELLOW);

		/*If this is initial boot, show start screen*/		
		if(!StartScreenFlag){
			startScreen();
		}
		else{
			/*Print sting on LCD line 5*/
			onPauseScreen();
		}
		/*Wait for touch into rectangular. Update ball color from ADC*/
		while(1)
		{
			TP_State = IOE_TP_GetState();
			if(TP_State->TouchDetected && TP_State->X >= 30  && \
																		TP_State->X <= 200 && \
																		TP_State->Y >= 230 && \
																		TP_State->Y <= 320) break;
			LCD_DrawRect(20, 220, 80, 200);
			ADCxConvertedValue= ADC_convert();
		  ADCxConvertedColor =(ADCxConvertedValue ) * NUMBER_OF_COLORS /0xFFF;
	    ADCxConvertedColor *= 0xFFFF /  NUMBER_OF_COLORS ;
			LCD_SetTextColor(ADCxConvertedColor);
			LCD_DrawFullCircle(210, 170, BALL_RADIUS);
			delay_ms(10);
			
		}
		/* Clear LCD and set background color */
		LCD_Clear(LCD_COLOR_WHITE);
		/* Set LCD text color */
		LCD_SetTextColor(LCD_COLOR_BLACK); 
		/* Set LCD font */
		LCD_DrawRect(LEFT_BOUNDARY, TOP_BOUNDARY,  RIGHT_BOUNDARY-LEFT_BOUNDARY, BOTTOM_BOUNDARY-TOP_BOUNDARY);
		/* Set LCD text color */
		LCD_SetTextColor(ADCxConvertedColor); 
		
		/*Reset and start counter*/
		TIM_ResetCountdown(TIM1);
		TIM_Cmd(TIM1, ENABLE);
  }  
  else /* If touch panel failed to initialize*/
  {
    LCD_Clear(LCD_COLOR_RED);
    LCD_SetTextColor(LCD_COLOR_BLACK); 
		LCD_SetFont(&Font16x24);
    LCD_DisplayStringLine(LCD_LINE_6,(uint8_t*)"  IOE NOT OK   ");
    LCD_DisplayStringLine(LCD_LINE_7,(uint8_t*)"Reset the board");
    LCD_DisplayStringLine(LCD_LINE_8,(uint8_t*)" and try again ");
		while(1)
		{
			/*Turn on red led and stay in this loop. Board needs to be restarted*/
			error_led_on();
		}
  }
	/* Flag which is used to chow wich display show (Start screen or on-pause screen) */
	if(StartScreenFlag==0){
		StartScreenFlag=1;
	}
}

/**
  * @brief  Fill the SDRAM with messages for screens.
  * @param  None
  * @retval None
  */
void FillSDRAM(void){
		WriteString((uint8_t*) MESSAGE1, lines[0]);
    WriteString((uint8_t*) MESSAGE2, lines[1]);
		WriteString((uint8_t*) MESSAGE3, lines[2]);
    WriteString((uint8_t*) MESSAGE4, lines[3]);
		WriteString((uint8_t*) MESSAGE5, lines[4]);
		WriteString((uint8_t*) MESSAGE6, lines[5]);
		WriteString((uint8_t*) MESSAGE7, lines[6]);
		WriteString((uint8_t*) MESSAGE8, lines[7]);
		WriteString((uint8_t*) MESSAGE9, lines[8]);
		WriteString((uint8_t*) MESSAGE10, lines[9]);
		WriteString((uint8_t*) MESSAGE11, lines[10]);
}
/**
  * @brief  Read strings from SDRAM and show StartScreen text on LCD
  * @param  None
  * @retval None
  */
void startScreen(void) 
{
	uint8_t message[]={0,0};
	
		ReadString(message, lines[0]);
		LCD_DisplayStringLine(LINE(2), message);
		ReadString(message, lines[1]);
		LCD_SetFont(&Font12x12);
		LCD_DisplayStringLine(LINE(7), message2);
		ReadString(message, lines[2]);
		LCD_SetFont(&Font16x24);
		LCD_DisplayStringLine(LINE(6), message);
		ReadString(message, lines[3]);
		LCD_DisplayStringLine(LINE(7), message);
		ReadString(message, lines[4]);
		LCD_DisplayStringLine(LINE(10), message);
		ReadString(message, lines[5]);
		LCD_DisplayStringLine(LINE(11), message);
}
/**
  * @brief  Read strings from SDRAM and show onPauseScreen text on LCD
  * @param  None
  * @retval None
  */
void onPauseScreen(void) 
{
		uint8_t message[]={0,0};
		
		ReadString(message, lines[6]);
		LCD_DisplayStringLine(LINE(2), message);
		ReadString(message, lines[7]);
		LCD_DisplayStringLine(LINE(3), message);
		ReadString(message, lines[8]);
		LCD_DisplayStringLine(LINE(10), message);
		ReadString(message, lines[9]);
		LCD_DisplayStringLine(LINE(11), message);
		ReadString(message, lines[10]);
		LCD_DisplayStringLine(LINE(6), message);
}
/**
  * @brief  Interrupt function. Start ADC conversion and change ball color.
  * @param  None
  * @retval None
  */
void ADC_ReadColor(void){
		ADCxConvertedValue = ADC_convert();
		ADCxConvertedColor =(ADCxConvertedValue ) * NUMBER_OF_COLORS /0xFFF;
	  ADCxConvertedColor *= 0xFFFF /  NUMBER_OF_COLORS ;
}

#ifdef  USE_FULL_ASSERT

/**
  * @brief  Reports the name of the source file and the source line number
  *         where the assert_param error has occurred.
  * @param  file: pointer to the source file name
  * @param  line: assert_param error line source number
  * @retval None
  */
void assert_failed(uint8_t* file, uint32_t line)
{ 
  /* User can add his own implementation to report the file name and line number,
     ex: printf("Wrong parameters value: file %s on line %d\r\n", file, line) */

  /* Infinite loop */
  while (1)
  {
  }
}
#endif

/**
  * @}
  */
