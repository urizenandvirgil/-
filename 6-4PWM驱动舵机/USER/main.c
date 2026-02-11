#include "stm32f10x.h"                  // Device header
#include  "Delay.h"
#include "LED.h"
#include "KEY.h"
#include "OLED.h"
#include "PWM.h"
#include "countsensor.h"


uint8_t i;

int main (void)
{
	OLED_Init();
	//OLED_ShowNum(1,1,9,5);
	PWM_Init();
	Countsensor_Init();
	//PWM_SetCompare2(500);
	OLED_ShowString(1,1,"Count:");
	while (1)
	{
		OLED_ShowNum (1,7,Countsensor_Get(),5);
	}
}
