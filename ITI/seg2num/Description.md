# AVR Dual 7-Segment Display Counter

## Description:
This project uses an AVR microcontroller ATmega32 to control two 7-segment displays. The program counts from 0 to 9 on the first display, and for each number, it displays a secondary counter (0 to 9) on the second display. The program alternates between the two displays, showing the numbers in sequence with a delay of 50 milliseconds.

## Features:
- Controls two 7-segment displays.
- Displays a primary counter (0 to 9) on the first display.
- Displays a secondary counter (0 to 9) on the second display for each number of the primary counter.
- Custom libraries for controlling the 7-segment displays (`SSEG_interface.h` and `SSEG_interface_sec.h`).

## Libraries:
- AVR Standard Library (`avr/io.h` and `avr/delay.h`)
- Custom `SSEG_interface.h` and `SSEG_interface_sec.h` for controlling the primary and secondary 7-segment displays.
