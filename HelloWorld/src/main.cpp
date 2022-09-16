#include <Arduino.h>
// I, Nolan Carter, student number 000817341, certify that this material is my original work.
// No other person's work has been used without due acknowledgement and neither have I made my work available to anyone else.

unsigned long myTime;

void setup() {
  // put your setup code here, to run once:

  // start the usb serial monitor port
  Serial.begin(115200);

  // print some text to the USB port
  Serial.println("\n\nNolan Carter, 000817341");
  Serial.print("ESP8266 Chip ID: ");
  Serial.println(ESP.getChipId());
  Serial.print("Flash Chip ID: ");
  Serial.println(ESP.getFlashChipId());
}

void loop() {
  // put your main code here, to run repeatedly:
  delay(2000);
  myTime = millis();
  Serial.print("This program has been running for ");
  Serial.print(myTime);
  Serial.print(" milliseconds.\n");
}