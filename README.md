# Einstein TC-01

Repository for the 2025 Board Folk recreation of the main board of the Einstein TC-01 computer from Tatung.

![Built TC-01 board in Green](https://github.com/Board-Folk/Einstein-TC-01/blob/main/images/EinsteinTC01MainBoard_Small.png)

This repository contains the Bill-of-Materials (iBOM), Gerbers and Kicad files for a remake of the Tatung Einstein TC-01 main board.

Projects are in Kicad 9.

## Revisions

* Version 1.1 Initial Public Release

## Modifications

* The 3 digit references have been abridged so they work in Kicad
* The factory modifications (cuts and bodge wires) for the reset circuit have been included on the board
* A solder jumper next to socket M16 provides the common modification of 5V power to pin 6 on the video output socket as you'd have on a BBC Micro
* Some small silkscreen improvements have been made to avoid confusion

## Build Notes

* Power connectors are 5.08mm pin headers
* M6 keyboard pin header is 2.5mm not 2.54mm pitch
* Corner line indicator on transistor footprints signifies flat front side direction, NOT pin 1
* BC307 can be subtituted for BC557
* BC308 can be subtituted for BC558
* Reset switch is the same as the one found on the TRS-80 Model I
* The ADC0844 alternative footprint is a µPD7002 which requires C13 populating with 33nF (untested)
* The value/range of L101 "Chrominance Rejector" is at this time unknown

## Credit

PCB layouts by Rob Taylor @peepouk. Schematics recreated by Ian Cudlip @grandoldian.

## Expansions

### TMSAdapterTC01

Adapter board to allow the use of a TMS9929 chip on the Tatung Einstein TC-01.

## Coming Soon

* Arduino based PS/2 keyboard adapter.

## Links

   [10.6875MHz HC-49U Crystal](https://slawmir.com.pl/rezonator-10-6875mhz-hc49u-x5-p-6105.html)  
   [5 pin "Domino" DIN Socket for Serial Port](https://vintage.imitation.parts/products/bbc-micro-parts/din-5-pcb-socket)

## Thanks

  * The rest of the Board Folk Team

## Legal

As the product of this project is a replica of a proprietary product, the the author makes no claim of copyright to the schematics nor PCB layouts and releases these into the public domain, solely for the purposes of study and historical preservation.

You are free to produce PCBs based on this project's designs at your own risk and without limitation, for your own use or for sale and/or repair at a reasonable price. Attribution is appreciated. The authors are not obliged to provide support of any kind. 

Under no circumstances will the authors be held responsible or liable in any way for losses, damages or costs resulting from the use of the information and/or resources of this project. 

The resources are provided "as-is" without warranty of any kind, either expressed or implied, including, but not limited to, the implied warranties of merchantability and fitness for a particular purpose.