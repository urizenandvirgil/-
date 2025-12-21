#include "stm32f10x.h"                  // Device header
#include  "Delay.h"
#include "LED.h"
#include "KEY.h"
#include "OLED.h"
#include "countsenser.h"



int main (void)
{
	OLED_Init();
	Countsensor_Init();
	OLED_ShowString(1,1,"Count:");
		
	
	while (1)
	{
		OLED_ShowNum (1,7,Countsensor_Get(),5);
	}
}
