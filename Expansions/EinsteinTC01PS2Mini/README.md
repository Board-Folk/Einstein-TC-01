# EinsteinTC01PS2Mini v1

![Image of PS2 ATMEGA328 version 1 board in green](https://github.com/Board-Folk/Einstein-TC-01/blob/main/images/EinsteinTC01PS2Miniv1.png)

The smaller ATMEGA328 version of a PS/2 keyboard adapter for the Einstein TC-01. The board uses separate pins from the Nano to pull Shift, Ctrl and Grph through BC517 darlington pairs. This version doesn't include indicator LEDs for these.

There are 3 rows of pin headers, the centre row being 2.54mm, the other 2 2.50mm same as the main board. This arrangement could be use for passthrough to an existing keyboard if necessary.

## Code

Code can be found in the EinsteinTC01PS2 folder, including the compiled binaries for the ATMEGA328. See any notes in there. The Minipro TL866 II can be use to program that. These settings work:

![Windows Minipro software settings for programming the ATMEGA328 for this board](https://github.com/Board-Folk/Einstein-TC-01/blob/main/images/ATMEGA328P-fuses.png)