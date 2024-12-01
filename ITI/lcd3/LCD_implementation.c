#include <avr/io.h>
#include <util/delay.h>

# define RS 2
# define RW 1
# define E  0
#define   set_bit(var,bitnum)    var = ( var | (1<<bitnum) )
#define   clear_bit(var,bitnum)    var = ( var & ~(1<<bitnum) )

void LCD_Init(void)
{
	/* intialize DIO pis */
	DDRA = 0b11111111;
	DDRB = 0b00000111;
	
	_delay_ms(35);
	LCD_SendCom(0b00111000);
	_delay_ms(1);
	LCD_SendCom(0b00001100);
	_delay_ms(1);
	LCD_SendCom(0b00000001);
	_delay_ms(2);
	LCD_SendCom(0b00000110);
	
}

void LCD_SendData(unsigned char Data)
{
	set_bit(PORTB,RS);
	clear_bit(PORTB,RW);
	
	PORTA = Data;
	set_bit(PORTB,E);
	_delay_ms(1);
	clear_bit(PORTB,E);
	_delay_ms(1);
}

void LCD_SendCom(unsigned char Command)
{
	clear_bit(PORTB,RS);
	clear_bit(PORTB,RW);
	
	PORTA = Command;
	
	set_bit(PORTB,E);
	_delay_ms(1);
	clear_bit(PORTB,E);
	_delay_ms(1);
}

void LCD_ClearScreen(void)
{
	LCD_SendCom(0b00000001);
}
