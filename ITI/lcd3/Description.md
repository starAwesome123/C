# AVR Keypad to LCD Display

## Description:
This project uses an AVR microcontroller ATmega32 to interface with a keypad and display the pressed key on an LCD. When a button is pressed on the keypad, the corresponding key is shown on the LCD screen. This is a basic demonstration of keypad-LCD interaction.

## Features:
- Interfaces with a keypad to detect button presses.
- Displays the pressed button on an LCD.
- Uses custom libraries to control the keypad and LCD (`KEYPAD_interface.h` and `LCD_prototype.h`).

## Libraries:
- AVR Standard Library (`avr/io.h` and `avr/delay.h`)
- Custom `KEYPAD_interface.h` and `LCD_prototype.h` for keypad and LCD control.
