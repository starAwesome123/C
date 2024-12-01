#include <avr/io.h>
#include "KEYPAD_interface.h"
#define R1 0
#define R2 1
#define R3 2
#define R4 3

#define C1 4
#define C2 5
#define C3 6
#define C4 7

#define R1C1 '7'
#define R1C2 '8'
#define R1C3 '9'
#define R1C4 '/'

#define R2C1 '4'
#define R2C2 '5'
#define R2C3 '6'
#define R2C4 '*'

#define R3C1 '1'
#define R3C2 '2'
#define R3C3 '3'
#define R3C4 '-'

#define R4C1 ' '
#define R4C2 '0'
#define R4C3 '='
#define R4C4 '+'

#define NULL '\0'

#define   set_bit(var,bitnum)    var = ( var | (1<<bitnum) )
#define   clear_bit(var,bitnum)    var = ( var & ~(1<<bitnum) )
#define   get_bit(var,bitnum)  ( (var >> bitnum) & 1 )

void KEYPAD_Init(void)
{
	DDRC = 0b00001111;
	PORTC = 0b11111111;
}
unsigned char KEYPAD_GetButton(void)
{
	
	clear_bit(PORTC,R1);
	set_bit(PORTC,R2);
	set_bit(PORTC,R3);
	set_bit(PORTC,R4);
	
	for(int column = 4; column < 8; column++)
	{
	  if(get_bit(PINC,column) == 0)
	  {
		  switch(column)
		  {
			  case C1:
			  return R1C1;
			  break;
			  
			  case C2:
			  return R1C2;			  
			  break;	

			  case C3:			  
			  return R1C3;			  
			  break;		
			  
			  case C4:
			  return R1C4;
			  break;
			  
		}
	  }
	}
	
	set_bit(PORTC,R1);
	clear_bit(PORTC,R2);
	set_bit(PORTC,R3);
	set_bit(PORTC,R4);

	for(int column = 4; column < 8; column++)
	{
	  if(get_bit(PINC,column) == 0)
	  {
		  switch(column)
		  {
			  case C1:
			  return R2C1;
			  break;
			  
			  case C2:
			  return R2C2;			  
			  break;	

			  case C3:			  
			  return R2C3;			  
			  break;		
			  
			  case C4:
			  return R2C4;
			  break;
			  
		}
	  }
	}
	
	set_bit(PORTC,R1);
	set_bit(PORTC,R2);
	clear_bit(PORTC,R3);
	set_bit(PORTC,R4);
	
	for(int column = 4; column < 8; column++)
	{
	  if(get_bit(PINC,column) == 0)
	  {
		  switch(column)
		  {
			  case C1:
			  return R3C1;
			  break;
			  
			  case C2:
			  return R3C2;			  
			  break;	

			  case C3:			  
			  return R3C3;			  
			  break;		
			  
			  case C4:
			  return R3C4;
			  break;
			  
		}
	  }
	}
	
	set_bit(PORTC,R1);
	set_bit(PORTC,R2);
	set_bit(PORTC,R3);
	clear_bit(PORTC,R4);
	
	for(int column = 4; column < 8; column++)
	{
	  if(get_bit(PINC,column) == 0)
	  {
		  switch(column)
		  {
			  case C1:
			  return R4C1;
			  break;
			  
			  case C2:
			  return R4C2;			  
			  break;	

			  case C3:			  
			  return R4C3;
			  break;		
			  
			  case C4:
			  return R4C4;
			  break;
			  
		}
	  }
	}
	
	return NULL;
}
