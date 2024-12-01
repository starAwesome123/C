#define set_bit(var,bitnum) var=var|(1<<bitnum)
#define clear_bit(var,bitnum) var=var&(~(1<<bitnum))
#define get_bit(var,bitnum) ((var>>bitnum)&1)
#include<avr/io.h>
#include<avr/delay.h>
int main(void)
{
DDRA=0b00000010;
while(1){
	if(get_bit(PINA,0)==1){
		set_bit(PORTA,1);}
    else{
    	clear_bit(PORTA,1);
    }
}
	return 0;
}
