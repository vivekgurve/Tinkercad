// C++ code
//
/*
  Analog input, analog output, serial output

  Reads an analog input pin, maps the result to a
  range from 0 to 255  and uses the result to set
  the pulsewidth modulation (PWM) of an output
  pin.  Also prints the results to the serial
  monitor.

  The circuit:
  * potentiometer connected to analog pin 0.
    Center pin of the potentiometer goes to the
    analog pin. side pins of the potentiometer go
    to +5V and ground
  * LED connected from digital pin 9 to ground

*/

int sensorValue = 0;

int outputValue = 0;

void setup()
{
  pinMode(A0, INPUT);
  pinMode(9, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  // read the analog in value:
  sensorValue = analogRead(A0);
  // map it to the range of the analog out:
  outputValue = map(sensorValue, 0, 1023, 0, 255);
  // change the analog out value:
  analogWrite(9, outputValue);
  // print the results to the serial monitor:
  Serial.print("sensor = ");
  Serial.print(sensorValue);
  Serial.print("\t output = ");
  Serial.println(outputValue);
  // wait 2 milliseconds before the next loop for the
  // analog-to-digital converter to settle after the
  // last reading:
  delay(2); // Wait for 2 millisecond(s)
}