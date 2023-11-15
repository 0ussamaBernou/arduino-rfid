#include <Arduino.h>
#line 1 "/home/oussama/github/arduino-rfid/nullify/nullify.ino"
/*
 * EEPROM Write
 *
 * Stores values read from analog input 0 into the EEPROM.
 * These values will stay in the EEPROM when the board is
 * turned off and may be retrieved later by another sketch.
 */

#include <EEPROM.h>

/** the current address in the EEPROM (i.e. which byte we're going to write to next) **/
int addr = 0;

#line 14 "/home/oussama/github/arduino-rfid/nullify/nullify.ino"
void setup();
#line 25 "/home/oussama/github/arduino-rfid/nullify/nullify.ino"
void loop();
#line 14 "/home/oussama/github/arduino-rfid/nullify/nullify.ino"
void setup() {
    Serial.begin(9600);
    Serial.println("Start");
    int length = EEPROM.length();
    for (int i = 0; i < length; i++) {
      EEPROM.write(i, 0);
    }
    Serial.println("nullified EEPROM");
    Serial.end();
}

void loop() {
  /***
    Need to divide by 4 because analog inputs range from
    0 to 1023 and each byte of the EEPROM can only hold a
    value from 0 to 255.
  ***/

  // int val = 0;

  /***
    Write the value to the appropriate byte of the EEPROM.
    these values will remain there when the board is
    turned off.
  ***/

  // EEPROM.write(addr, val);

  /***
    Advance to the next address, when at the end restart at the beginning.

    Larger AVR processors have larger EEPROM sizes, E.g:
    - Arduino Duemilanove: 512 B EEPROM storage.
    - Arduino Uno:         1 kB EEPROM storage.
    - Arduino Mega:        4 kB EEPROM storage.

    Rather than hard-coding the length, you should use the pre-provided length function.
    This will make your code portable to all AVR processors.
  ***/
  // addr = addr + 1;
  // if (addr == EEPROM.length()) {
  //   addr = 0;
  // }

  /***
    As the EEPROM sizes are powers of two, wrapping (preventing overflow) of an
    EEPROM address is also doable by a bitwise and of the length - 1.

    ++addr &= EEPROM.length() - 1;
  ***/


  // delay(100);
}

