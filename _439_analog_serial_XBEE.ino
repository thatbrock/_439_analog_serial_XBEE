void setup()
{
  // start serial port at 9600 bps:
  Serial.begin(9600);
  pinMode(A0, INPUT);
}

void loop() {
  // read analog input, nd write its byte value to the serial port
  int analogValue = analogRead(0);
  Serial.println(analogValue);
}
