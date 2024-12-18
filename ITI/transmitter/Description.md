# AVR UART Button Communication

## Description:
This project uses an AVR microcontroller ATmega32 to send different strings via UART based on button presses. Each button connected to `PIND4` through `PIND7` sends a corresponding string (e.g., "0#", "1#", "2#", "3#") to a UART receiver (e.g., a serial monitor or another microcontroller).

## Features:
- Monitors buttons connected to `PIND4` through `PIND7`.
- Sends different strings (`"0#"`, `"1#"`, `"2#"`, `"3#"`) over UART when each respective button is pressed.
- Uses bit manipulation to check button states and send data via UART.
- Custom `UART` library to handle UART initialization and string transmission.

## Libraries:
- AVR Standard Library (`avr/io.h`)
- Custom `UART.h` for UART communication.
