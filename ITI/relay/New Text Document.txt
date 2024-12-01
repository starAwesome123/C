# AVR Button-Controlled Output

## Description:
This project uses an AVR microcontroller ATmega32 to control an output pin (e.g., `PORTD5`) based on the input states of two buttons connected to `PIND7` and `PIND6`. The program performs the following actions:
- When the button connected to `PIND7` is pressed, it sets the output pin `PORTD5` to HIGH.
- When the button connected to `PIND6` is pressed, it sets the output pin `PORTD5` to LOW.

## Features:
- Monitors two buttons connected to `PIND7` and `PIND6`.
- Controls an output pin (`PORTD5`) based on the button states.
- Uses bit manipulation to read input pin states and control the output pin.

## Libraries:
- AVR Standard Library (`avr/io.h`)
