#define set_bit(var,bitnum) var=var|(1<<bitnum)
#define clear_bit(var,bitnum) var=var&(~(1<<bitnum))
#define get_bit(var,bitnum) ((var>>bitnum)&1)
#include<avr/io.h>
#include "SSEG_interface.h"
#include <avr/delay.h>
int i=0;
int main(void)
{
	SSEG_Init();
	DDRC= 0b00000111;
	PORTC=0b00000000;
	while(1){
		set_bit(PINC,0);
		while(i>0)
		{
			SSEG_DisplayNum(i);
		    _delay_ms(50);
     		SSEG_DisplayNum(--i);
		}
		clear_bit(PINC,0);
		i=9;
		set_bit(PINC,1);
		while(i>0)
		{
			SSEG_DisplayNum(i);
		    _delay_ms(50);
     		SSEG_DisplayNum(--i);
		}
		clear_bit(PINC,1);
		i=9;
		set_bit(PINC,2);
		while(i>0)
		{
			SSEG_DisplayNum(i);
		    _delay_ms(50);
     		SSEG_DisplayNum(--i);
		}
		clear_bit(PINC,2);
		i=9;
	}
return 0;
}
