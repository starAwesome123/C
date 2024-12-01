# AVR 7-Segment Display Counter

## Description:
This project uses an AVR microcontroller ATmega32 to display numbers from 0 to 9 on a 7-segment display. The program counts from 0 to 9, showing each number for 100 milliseconds in a continuous loop. The program uses a custom library to control the 7-segment display.

## Features:
- Displays numbers from 0 to 9 on a 7-segment display.
- Each number is shown for 100 milliseconds.
- Custom library for controlling 7-segment displays (`SSEG_interface.h`).

## Libraries:
- AVR Standard Library (`avr/io.h` and `avr/delay.h`)
- Custom `SSEG_interface.h` for 7-segment display control.
