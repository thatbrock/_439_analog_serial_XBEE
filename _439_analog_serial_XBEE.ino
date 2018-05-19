#include <SoftwareSerial.h>

SoftwareSerial xBee(2, 3);
int prevValue = 0;

void setup()
{
  // start serial port at 9600 bps:
  Serial.begin(9600);
  xBee.begin(9600);
  pinMode(A0, INPUT);
}

void loop() {
  // read analog input, and write its byte value to the serial port
  int analogValue = analogRead(0);
  if (analogValue != prevValue) {
    Serial.println(analogValue);
    xBee.println(analogValue);
    delay(100);
    prevValue = analogValue;
  }
}
