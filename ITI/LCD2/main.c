#include "LCD_prototype.h"
#define set_bit(var,bitnum) var=var|(1<<bitnum)
#define clear_bit(var,bitnum) var=var&(~(1<<bitnum))
#define get_bit(var,bitnum) ((var>>bitnum)&1)
#include<avr/io.h>
#include<avr/delay.h>

int main(void){

	DDRC=0b11111111;
	LCD_Init();
 while(1){
			if(get_bit(PINC,0)==1){
				 LCD_SendData('M');
			while(get_bit(PINC,0)==1);
			}
			if(get_bit(PINC,1==1)){
				 LCD_SendData('a');
		    while(get_bit(PINC,1)==1);
			}
			if(get_bit(PINC,2==1)){
				 LCD_SendData('r');
		    while(get_bit(PINC,2)==1);
			}
			if(get_bit(PINC,3==1)){
				 LCD_SendData('i');
	    	 while(get_bit(PINC,3)==1);
			}
			if(get_bit(PINC,4==1)){
				 LCD_SendData('a');
		    while(get_bit(PINC,4)==1);
			}
			if(get_bit(PINC,5==1)){
				 LCD_SendData('M');
		    while(get_bit(PINC,5)==1);}
 }
return 0;
}
