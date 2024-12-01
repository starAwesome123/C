#define set_bit(var,bitnum) var=var|(1<<bitnum)
#define clear_bit(var,bitnum) var=var&(~(1<<bitnum))
#define get_bit(var,bitnum) ((var>>bitnum)&1)
#include<avr/io.h>
#include "SSEG_interface.h"
#include "KEYPAD_interface.h"
#include <avr/delay.h>
int i;
int c;

int main(void)
{

	KEYPAD_Init();
	SSEG_Init();
	while(1)
	{
		if (KEYPAD_GetButton()=='1')
			SSEG_DisplayNum(1);
		if (KEYPAD_GetButton()=='2')
					SSEG_DisplayNum(2);
		if (KEYPAD_GetButton()=='3')
					SSEG_DisplayNum(3);
		if (KEYPAD_GetButton()=='4')
					SSEG_DisplayNum(4);
		if (KEYPAD_GetButton()=='5')
					SSEG_DisplayNum(5);
		if (KEYPAD_GetButton()=='6')
					SSEG_DisplayNum(6);
		if (KEYPAD_GetButton()=='7')
					SSEG_DisplayNum(7);
		if (KEYPAD_GetButton()=='8')
					SSEG_DisplayNum(8);
		if (KEYPAD_GetButton()=='9')
					SSEG_DisplayNum(9);
	}
	return 0;
}
