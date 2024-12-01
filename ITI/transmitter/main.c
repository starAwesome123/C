#include <avr/io.h>
#include "UART.h"

#define   set_bit(var,bitnum)    var = ( var | (1<<bitnum) )
#define   clear_bit(var,bitnum)    var = ( var & ~(1<<bitnum) )
#define get_bit(var,bitnum) ((var>>bitnum)&1)
int main()
{
	    Uart_init(9600);
		char arr0[10]="0#";
		char arr1[10]="1#";
		char arr2[10]="2#";
		char arr3[10]="3#";

		DDRD=0b11111111;
		while(1)
		{
			if(get_bit(PIND,7)==1){
				UART_send_string(arr0);
				while(get_bit(PIND,7)==1);
			}
			if(get_bit(PIND,6)==1){
				UART_send_string(arr1);
	    		while(get_bit(PIND,6)==1);
			}
			if(get_bit(PIND,5)==1){
				UART_send_string(arr2);
				while(get_bit(PIND,5)==1);
			}
		    if(get_bit(PIND,4)==1){
				UART_send_string(arr3);
		   		while(get_bit(PIND,4)==1);
			}
		}
		return 0;
}
