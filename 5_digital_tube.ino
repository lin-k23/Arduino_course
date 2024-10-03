#include "SevSeg.h"
SevSeg sevseg;  //Instantiate a seven segment controller object

void setup() {
  byte numDigits = 4;
  byte digitPins[] = { 13,12,11,10};
  byte segmentPins[] = { 2, 3, 4, 5, 6, 7, 8, 9 };
  byte hardwareConfig = COMMON_ANODE;   //共阳极
  bool leadingZeros = true; 

  sevseg.begin(hardwareConfig, numDigits, digitPins, segmentPins,leadingZeros);
  sevseg.setBrightness(0);
}

void loop() {
  static unsigned long timer = millis();
  static int deciSeconds = 0;

  if (millis() - timer >= 10) {
    timer += 10;
    deciSeconds++;

    if (deciSeconds == 2000) {  // Reset to 0 after counting for 20 seconds.
      deciSeconds = 0;
    }
    sevseg.setNumber(deciSeconds, 2);
  }
  sevseg.refreshDisplay();  // Must run repeatedly
}