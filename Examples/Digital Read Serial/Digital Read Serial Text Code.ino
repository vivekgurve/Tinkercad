// C++ code
//
/*
  DigitalReadSerial

  Reads a digital input on pin 2, prints the
  result to the serial monitor

*/

int buttonState = 0;

void setup()
{
  pinMode(2, INPUT);
  Serial.begin(9600);
}

void loop()
{
  // read the input pin
  buttonState = digitalRead(2);
  // print out the state of the button
  Serial.println(buttonState);
  delay(10); // Delay a little bit to improve simulation performance
}