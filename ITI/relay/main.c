#define set_bit(var,bitnum) var=var|(1<<bitnum)
#define clear_bit(var,bitnum) var=var&(~(1<<bitnum))
#define get_bit(var,bitnum) ((var>>bitnum)&1)
#include<avr/io.h>

int main(void){

	DDRD=0b11111111;
 while(1){
			if(get_bit(PIND,7)==1){
			set_bit(PORTD,5);
			while(get_bit(PIND,7)==1);
			}
			if(get_bit(PIND,6)==1){
			clear_bit(PORTD,5);
			while(get_bit(PIND,6)==1);
			}
 }
			return 0;
 }
