#include "SSEG_interface_sec.h"
#include <avr/io.h>
#define ZERO		0x3F
#define ONE			0x06
#define TWO			0x5B
#define THREE		0x4F
#define FOUR		0x66
#define FIVE		0x6D
#define SIX			0x7D
#define SEVEN		0x07
#define EIGHT		0x7F
#define NINE		0x6F

unsigned char number[10] = {ZERO , ONE , TWO , THREE , FOUR , FIVE , SIX , SEVEN , EIGHT , NINE };

void SSEG_sec_DisplayNum(unsigned char Numbers)
{
	PORTC = number[Numbers];
}

void SSEG_sec_Clear(void)
{
	PORTC = 0b00000000;
}

void SSEG_sec_Init(void)
{
	DDRC = 0b11111111;
	PORTC = 0b00000000;
}
