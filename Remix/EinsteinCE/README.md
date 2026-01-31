# Einstein CE

![Built Einstein CE system board in black](https://github.com/Board-Folk/Einstein-TC-01/blob/main/images/EinsteinCEv1.1_Black_Small.png)

A simplified Einstein.

This isn't particularly serious and it's going to have some haters, so an explanation is needed first off. The idea was to do an as simple as possible Einstein - bits removed or substituted - to fit on a mini-ITX board (170x170mm) as 5V only to prove some schematics. It's cheap to make, being small and the VDP being substituted, the only particularly expensive chip being the WD1770.

The theme, as it suggests is a minimum to run Chuckie Egg. Will runs other games and things too, but nothing that requires the bits removed, with the idea of doing an overlay board to add some things back later if need be. It's not particularly beautiful, it's 50% autorouted then tidied, but it works well enough.

Video output is simple, NTSC colour composite out. PAL would be much more expensive/complex - it wouldn't fit. It's a bit of fun and means to an end.

## Revisions

* Version 1.1 Initial Public Release

## Things Removed

  * CTC
  * PIO
  * Serial port
  * Analogue joystick ports
  * YUV/RGB and RF modulator
  * Audio amplifier

## Things Changed

  * VDP and video RAM - TMS9918 and 8 of 1 bit (16K x 1) RAM
  * 4464/41464 System RAM (not 4164)
  * Simplified keyboard (IO only as no interrupt thing)
  * 2 drive support (not 4)

## Things Added

  * Stereo 3.5mm audio out (similar to Amstrad CPC)
  * PS/2 keyboard interface on board
  * Reset switch (rear right angle, and pin header)
  * Composite out (NTSC)

## Things to Note

### Power

  * Power's provided by a standard DC power jack, 5V regulated, centre positive
  * M60 header is provided as a separate 5V input - might do an adapter for an ATX type supply at some point for this
  * M8 and M9 headers for floppy power are also 5V only, pin 1 is disconnected. This is fine for Gotek

### Video RAM

As it the whole board is 5V only, the video RAM is 5V, *not* the traditional 4116 as you'd typically have with a TMS9918. Specified is MB8118 RAM if you can find it, but cheaper, 8 of the more available 4164 or 41256 RAM can be used in it place (mostly wasted, but it works).

### Known Compatibility Issues

More will follow in time

  * It appears the Einstein Speculator uses the CTC, so that's not going to work sadly

## Build Notes

  * To reiterate (sorry) in Kicad, the square pin is pin 1. On an electrolytic capacitor this is positive, the long leg. On an LED, this is K, cathode, the short leg
  * M6 remains to connect an original keyboard if necessary, and probably isn't required. This is still 2.50mm
  * C8 trims the NTSC clock frequency
  * R88 adjusts the composite brightness
  * 3.5mm Stereo Socket and RCA socket are available from Amazon (links below)
  * TMS9918 is not to be confused with TMS9118

## Links

   [3.5mm Jack Connector](https://www.amazon.co.uk/dp/B07422MCSX)  
   [RCA/Phono Jack Connector](https://www.amazon.co.uk/dp/B07PL9C7X8)  

## Credit

Schematics and PCB Layout by Ian Cudlip @grandoldian. Footprints by Rob Taylor @peepouk.

## Thanks

  * Special thanks to Chrissy (@chris_jh), Jens Restemeier (@JensRestemeier) and Leo Oliveira (@leo__oliveira).
  * The rest of the Board Folk Team.

## Photos

![Poor photo of Einstein CE on the Boot Screen](https://github.com/Board-Folk/Einstein-TC-01/blob/main/images/EinsteinCEv1.1_BootScreen.png)
![Poor photo of Chuckie Egg Title Screen](https://github.com/Board-Folk/Einstein-TC-01/blob/main/images/EinsteinCEv1.1_ChuckieEggTitle_Small.png)
![Poor photo of Chuckie Egg Level 1](https://github.com/Board-Folk/Einstein-TC-01/blob/main/images/EinsteinCEv1.1_ChuckieEggLevel1_Small.png)

(does look better than the photos show, though clearly NTSC)