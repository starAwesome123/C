
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
	SSEG_DisplayNum(i);
	DDRC= 0b00000000;
	PORTC=0b00000011;
	while(1){
		if(get_bit(PINC,0)==0){
		SSEG_DisplayNum(++i);
		while(get_bit(PINC,0)==0);
		}

		if(get_bit(PINC,1)==0){
		SSEG_DisplayNum(--i);
		while(get_bit(PINC,1)==0);
	}
}

return 0;
}


