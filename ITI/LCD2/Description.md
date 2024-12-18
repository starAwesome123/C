# AVR Button-Triggered LCD Display

## Description:
This project uses an AVR microcontroller ATmega32 to display specific characters on an LCD screen when buttons connected to `PINC0` through `PINC5` are pressed. Each button corresponds to a character ('M', 'a', 'r', 'i', 'a', 'M'), which will be displayed on the LCD when the respective button is pressed.

## Features:
- Monitors buttons connected to `PINC0` to `PINC5`.
- Displays a character ('M', 'a', 'r', 'i', 'a', 'M') on the LCD when the corresponding button is pressed.
- Uses bit manipulation to check button states and display data on the LCD.

## Libraries:
- AVR Standard Library (`avr/io.h` and `avr/delay.h`)
- Custom `LCD_prototype.h` for controlling the LCD display.
