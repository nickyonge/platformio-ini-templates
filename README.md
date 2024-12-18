# platformio.ini Templates
### For programming ATtinyX4/X5 MCUs via Arduino 

Quickstart ini templates for ATtinyX4/X5-based [platform.io](https://platformio.org/) electronics projects, that are programmed via an Arduino UNO.
This guide assumes you're using VSCode on Windows.

Some things to check if your uploads don't work:
- Ensure the Arduino is properly set up (see: [Instructables guide](https://www.instructables.com/How-to-Program-an-Attiny85-From-an-Arduino-Uno/), [Github gist](https://gist.github.com/ij96/804e731bd31dbb95b2b043e93c79ceab), [PlatformIO guide](https://docs.platformio.org/en/latest/platforms/atmelavr.html))
- Check the PlatformIO selected environment and COM port
  - Note that "Auto" COM port detection can be buggy - it's best to specifically define it in the platformio.ini, eg COM6
- Set the fuses on your chip
  - If you're 100% sure your chip is good, and the device isn't recognized, it's possible the reset pin has been disabled. In that case, [it'll need to be reset](https://www.hackster.io/sbinder/attiny85-powered-high-voltage-avr-programmer-3324e1).
  - If you're using a custom fuse build environment, ensure the `lib_deps` and `board_fuses` in platformio.ini match your board environment
- If you haven't, add a small polarized capacitor (eg 10uF) from your Arduino programmer to GND
- In weird circumstances, I've seen PIO bugs go away by using PlatformIO Extension > Project Tasks > Miscellaneous > Rebuild Intellisense Index
- Turn it off and on again :)
