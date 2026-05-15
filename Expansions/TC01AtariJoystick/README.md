# Einstein TC01 Dual Atari Digital Joystick Adapter v1.1

![Built TC01 Dual Atari joystick adapter board v1 in Green](https://github.com/Board-Folk/Einstein-TC-01/blob/main/images/TC01AtariJoystickv1_Small.png)

Dual joystick adapter for Atari and compatible (Kempston/C64/Amiga/ST etc) digital joysticks. Tested with SVI Quickshot II Plus.

Based on Wizard Development 'BBC' joystick interface. Very clever, many thanks.

Update: Turns out having a fixed resistor at R1 was a bad idea as the output of the Vref circuit seems to be different between main board builds. This makes the analogue centre different. You can patch in a variable resistor/pot as an adjustment. One board needed changing to ~1K. Will post an update soon and some BASIC code for adjustment/tweaking.

## Versions

v1.1 Fix for x direction