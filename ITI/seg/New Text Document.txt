# AVR 7-Segment Display Counter with Buttons

## Description:
This project uses an AVR microcontroller ATmega32 to control a 7-segment display. The program displays a number on the 7-segment display, which can be incremented or decremented by pressing buttons connected to `PINC0` and `PINC1`. When a button is pressed, the number increases or decreases, and the new number is displayed on the 7-segment display.

## Features:
- Controls a 7-segment display to show a number.
- Increments the number when the button connected to `PINC0` is pressed.
- Decrements the number when the button connected to `PINC1` is pressed.
- Uses bit manipulation to check the button states.
- Custom library for controlling the 7-segment display (`SSEG_interface.h`).

## Libraries:
- AVR Standard Library (`avr/io.h` and `avr/delay.h`)
- Custom `SSEG_interface.h` for 7-segment display control.

