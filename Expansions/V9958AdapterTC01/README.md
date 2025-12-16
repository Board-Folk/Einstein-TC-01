# Einstein TC-01 V9958 VDP adapter

![Built TC-01 V9958 adapter board in green fitted on a TC-01](https://github.com/Board-Folk/Einstein-TC-01/blob/main/images/V9958AdapterTC01v1.3_Small.png)

Adapter board to allow the use of a Yamaha V9958 VDP chip on the Tatung Einstein TC-01. The board requires 192KB RAM, as 6 of 4464 (41464) RAM chips, to make the video capability of the board same as (or better than) the Einstein 256, and works with the ROM from that machine, e.g. XTAL MOS 2.1.

The board plugs into the existing VDP socket, replacing the original TMS VDP chip, and connects to video output by replacing the jumpers at M100/101 outputting RGB to the socket on the back of the TC-01. This disconnects the other video circuitry and RF output on the main board, that being YUV based.

The VDP plug to get the right height has been tested with 2 of 20 pin 15mm single pin headers and for connection for video output, 2x08 PC104 pin plug with a single spacer. Careful, as big pins can bork a DIP-40 socket, so be prepared to change that if necessary. Holes for nylon standoffs have been included at the other end of the board for support, though this isn't really necessary.

Address line A1 needs connecting up for this to function as it's not present on the original VDP socket. This is the pin with a box on the two pin header on the edge of this board. The nearest point on the main board for buffered A1 is pin 3 of I28.

Video output is provided by simple transistor based circuits. It seems fine, but some resistor values may need tweaking.

You do not need to fit the video RAM chips on the main board at I40 and I41 with this installed.

Not used or tested at the moment is the other pin on the header next to A1 which is for /WAIT which may or may not be used by any software at all, don't know about this, so connected this with a diode D151 (flagged DNP) between the VDP and the pin header. There isn't anything on the main board that uses /WAIT - that only connects to the Tatung Tube expansion port. This doesn't need connecting unless software uses it, and isn't required to function generally.

Also not tested at the moment, the pre-connected solder bridge on the bottom of the board - required for the V9958 - should be cut if installing a V9938. There is some question of whether this will work at all has it has a different CSYNC output. Will test in due course. V9958 seem easier to get.

Some fake/relabelled AliExpress RAM got very hot and died on this board after passing regular RAM tests, so be careful what you use. Not sure of the official speed requirements. Equally, there are plenty of completely fake V9958, many labelled copyright 1901.

## Photos

![Einstein 256 boot screen on a TC-01](https://github.com/Board-Folk/Einstein-TC-01/blob/main/images/E256onTC01.png)
