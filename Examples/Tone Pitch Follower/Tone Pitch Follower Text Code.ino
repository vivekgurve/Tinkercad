// C++ code
//
/*
  Pitch follower

  Plays a pitch that changes based on a changing
  analog input

  circuit:
  * 8-ohm speaker on digital pin 9
  * photoresistor on analog 0 to 5V
  * 4.7K resistor on analog 0 to ground

  created 21 Jan 2010
  modified 31 May 2012  by Tom Igoe, with
  suggestion from Michael Flynn

  This example code is in the public domain.
  http://www.arduino.cc/en/Tutorial/Tone2
*/

int sensorReading = 0;

void setup()
{
  pinMode(A0, INPUT);
  Serial.begin(9600);
  pinMode(9, OUTPUT);
}

void loop()
{
  // read the sensor
  sensorReading = analogRead(A0);
  // print the sensor reading so you know its range
  Serial.println(sensorReading);
  // map the sensor reading to a range for the
  // speaker
  tone(9, 440 * pow(2.0, (constrain(int(map(sensorReading, 0, 1023, 36, 84)), 35, 127) - 57) / 12.0), 1000);
  delay(10); // Delay a little bit to improve simulation performance
}