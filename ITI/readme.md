# ITI AVR Programming Course - Project Files

This repository contains all the project files from the **AVR Programming Course** that I took at **ITI (Information Technology Institute)**. These files include various examples, code snippets, and libraries that were used throughout the course to learn and practice AVR microcontroller programming.

## Course Overview

The course covers the basics of programming AVR microcontrollers, including hardware initialization, GPIO control, ADC, and interfacing with external devices like LEDs, sensors, and displays. The course emphasizes hands-on experience and writing efficient embedded systems code.

## Folder Structure

The repository is organized into the following folders and files:

- **`Code_Examples/`**: Contains various code examples demonstrating AVR programming concepts such as GPIO control, ADC usage, and interfacing with sensors and displays.
- **`Libraries/`**: Contains any custom libraries or utility functions used in the course, including UART, ADC, and other hardware-specific functions.
- **`Documentation/`**: Includes additional documents such as the course syllabus, guides, and notes for the course.

## Files Included

- **GPIO_Control.c**: Demonstrates how to control GPIO pins (input/output) on an AVR microcontroller.
- **UART_Comm.c**: Example code for UART communication using the AVR microcontroller, including sending and receiving strings of data.
- **ADC_Read.c**: Shows how to read analog values from a sensor using the ADC module of the AVR microcontroller.
- **LCD_Interface.c**: Code to interface with an LCD display, including sending data to the display and initializing it.
- **KEYPAD_Interface.c**: Demonstrates interfacing with a keypad to read keypresses.
- **Main.c**: Contains the main program structure that integrates the above functionalities and demonstrates real-world applications of AVR programming.

## Features

- **GPIO Control**: Learn how to set up input and output pins, as well as how to use bitwise operations for manipulating individual bits.
- **UART Communication**: Learn how to send and receive data through UART, enabling communication between the microcontroller and other devices like a PC or another microcontroller.
- **Analog-to-Digital Conversion (ADC)**: Code examples for reading analog sensors like temperature sensors, light sensors, etc.
- **Interfacing with Peripherals**: Includes code to interface with external devices like LCD displays and keypads.

## Getting Started

To get started with these files, you will need:

1. **AVR Microcontroller**: Any AVR microcontroller like ATmega32, ATmega16, etc.
2. **AVR Toolchain**: An AVR programming toolchain like [AVR-GCC](https://www.nongnu.org/avr-libc/) for compiling the code.
3. **AVR Programmer**: A device for uploading code to your microcontroller, such as USBasp, USBtinyISP, etc.
4. **Hardware**: Necessary components like LEDs, sensors, keypads, and displays depending on the example code you're using.

### Steps to Compile and Upload

1. Clone this repository to your local machine.
2. Install the required AVR toolchain if you haven’t already.
3. Open the example code you wish to compile (e.g., `GPIO_Control.c`) in your IDE.
4. Compile the code using the AVR toolchain.
5. Upload the compiled file to the microcontroller using your programmer.

## Course Content

- **Introduction to AVR Programming**: Basics of AVR architecture and programming.
- **GPIO and Interrupts**: Working with GPIO pins and handling interrupts.
- **Interfacing Peripherals**: Connecting and controlling external devices like LCDs, LEDs, motors, sensors, etc.
- **Projects**: Hands-on projects demonstrating real-world applications of AVR programming.

## License

This repository contains project files created during the **AVR Programming Course** at **ITI**. You may freely use, modify, and distribute the code for educational and personal purposes. However, commercial use is prohibited without proper authorization.

## Acknowledgments

- **ITI (Information Technology Institute)** for providing the course materials and resources.
- **AVR-GCC** and other open-source libraries for making AVR programming accessible and easy to use.
