#include "KEYPAD_interface.h"
#include <avr/io.h>
#include <avr/delay.h>
#include <LCD_prototype.h>

#define   set_bit(var,bitnum)    var = ( var | (1<<bitnum) )
#define   clear_bit(var,bitnum)    var = ( var & ~(1<<bitnum) )
#define   get_bit(var,bitnum)  ( (var >> bitnum) & 1 )
int main(void)
{
		KEYPAD_Init();
		LCD_Init();

		while(1)
		{
			unsigned char x= KEYPAD_GetButton();
			LCD_SendData(x);
		}

return 0;

}

