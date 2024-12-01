# AVR GPIO Control Example

This project demonstrates basic GPIO control using an AVR microcontroller. It reads the state of an input pin and toggles the state of an output pin accordingly. The main functionality involves checking the state of `PINA` bit 0 (e.g., from a button or sensor) and setting or clearing `PORTA` bit 1 (e.g., to control an LED).

## Features

- **Input/Output Pin Control**: Reads an input pin (PINA bit 0) and controls an output pin (PORTA bit 1).
- **Simple GPIO Operations**: Uses basic bitwise operations to set, clear, and read specific bits.
- **Port Initialization**: Sets up specific pins for input or output using the `DDRA` register.

## Hardware Requirements

- **AVR Microcontroller** (e.g., ATmega32, ATmega16, etc.)
- **LED** connected to `PORTA` bit 1 (as an output)
- **Button or sensor** connected to `PINA` bit 0 (as an input)

## Code Overview

- **DDRA = 0b00000010**: Configures `PORTA` pins where bit 0 is input (for reading sensor/button state) and bit 1 is output (for controlling an LED).
- **get_bit(PINA, 0)**: Reads the state of `PINA` bit 0.
- **set_bit(PORTA, 1)**: Sets `PORTA` bit 1 (turns on the LED).
- **clear_bit(PORTA, 1)**: Clears `PORTA` bit 1 (turns off the LED).

## Libraries Used

- **AVR Standard Library**: For handling AVR specific IO operations and delays.
