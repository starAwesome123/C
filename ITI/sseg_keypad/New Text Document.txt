# AVR Keypad to 7-Segment Display

## Description:
This project uses an AVR microcontroller Atmeaga32 to control a 7-segment display based on user input from a keypad. The program reads the key pressed on the keypad and displays the corresponding number on the 7-segment display. It supports numbers 1 through 9.

## Features:
- Uses a 4x4 matrix keypad to input numbers.
- Displays the pressed number on a 7-segment display.
- Custom library for controlling 7-segment displays (`SSEG_interface.h`) and keypad interface (`KEYPAD_interface.h`).
- Allows real-time number display based on user input.

## Libraries:
- AVR Standard Library (`avr/io.h` and `avr/delay.h`)
- Custom `SSEG_interface.h` for 7-segment display control.
- Custom `KEYPAD_interface.h` for keypad input handling.

## Installation:
1. Clone this repository:
   ```bash
   git clone https://github.com/yourusername/yourrepository.git
