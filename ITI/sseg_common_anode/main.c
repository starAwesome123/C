#define set_bit(var,bitnum) var=var|(1<<bitnum)
#define clear_bit(var,bitnum) var=var&(~(1<<bitnum))
#define get_bit(var,bitnum) ((var>>bitnum)&1)
#include<avr/io.h>
#include "SSEG_interface.h"
#include <avr/delay.h>

int main(void)
{
	SSEG_Init();
	while(1){
	    for(int i=0;i<=9;++i){
	    SSEG_DisplayNum(i);
	    _delay_ms(100);
	        }
	}
	return 0;
}


