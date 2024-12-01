#define set_bit(var,bitnum) var=var|(1<<bitnum)
#define clear_bit(var,bitnum) var=var&(~(1<<bitnum))
#define get_bit(var,bitnum) ((var>>bitnum)&1)
#include<avr/io.h>
#include "SSEG_interface.h"
#include "SSEG_interface_sec.h"
#include <avr/delay.h>
int i;
int c;

int main(void)
{
	SSEG_Init();
	SSEG_sec_Init();
	while(1){
		for(i=0;i<=9;++i){
			SSEG_DisplayNum(i);
			for(c=0;c<=9;++c){
				SSEG_sec_DisplayNum(c);
				_delay_ms(50);
			}
		}
	}
	return 0;
}
