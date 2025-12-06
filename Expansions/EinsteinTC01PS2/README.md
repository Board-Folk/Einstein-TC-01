# EinsteinTC01PS2 v1.2

![Image of PS2 Nano version 1.2 board in green](https://github.com/Board-Folk/Einstein-TC-01/blob/main/images/EinsteinTC01PS2v1.2.png)

The Arduino Nano version of a PS/2 keyboard adapter for the Einstein TC-01. This is a larger version of the board intended for development of the Arduino code for it, though is perfectly usable. The board uses separate pins from the Nano to pull Shift, Ctrl and Grph through BC517 darlington pairs.

The board needs a separate 5V power connection as there is no power output on the Einstein's keyboard header. Footprints for both a barrel jack and 2 pin XH connector are provided for this.

There are 3 rows of pin headers, the centre row being 2.54mm, the other 2 2.50mm same as the main board. This arrangement could be use for passthrough to an existing keyboard if necessary.

## Code

The Arduino folder contains the code and can be loaded with Arduino IDE. This is based on C64Keyboard by Robert VanHazinga. Key mappings can be found in keymapping.h. This code is the same for smaller EinsteinTC02PS2, the built binaries for which are in the build folder.

The code is usable as is, but will improve over time. Sometimes gets stuck needing a hard reset. It includes code for future remix versions of the project, including keyboard reset and separate Alph for the 256.
