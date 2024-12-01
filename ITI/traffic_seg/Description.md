# AVR 7-Segment Display Countdown

## Description:
This project uses an AVR microcontroller Atmega32 to control three 7-segment displays. It performs a countdown from 9 to 0 on each display, displaying the numbers sequentially. The program uses bit manipulation to control which display is active and update the numbers shown.

## Features:
- Controls three 7-segment displays.
- Displays a countdown from 9 to 0 on each display sequentially.
- Uses macros to manipulate specific bits for controlling the display.
- Custom library for controlling 7-segment displays (`SSEG_interface.h`).

## Libraries:
- AVR Standard Library (`avr/io.h` and `avr/delay.h`)
- Custom `SSEG_interface.h` for 7-segment display control.
