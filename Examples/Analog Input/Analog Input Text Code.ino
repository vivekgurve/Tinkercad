// C++ code
//
/*
    Analog Input  Demonstrates analog input by
  reading an analog sensor on analog pin 0 and
  turning on and off a light emitting diode(LED)
  connected to digital pin 13.  The amount of time
  the LED will be on and off depends on  the value
  obtained by analogRead().

  The circuit:
  * Potentiometer attached to analog input 0
  * center pin of the potentiometer to the analog
  pin
  * one side pin (either one) to ground
  * the other side pin to +5V
  * LED anode (long leg) attached to digital
  output 13
  * LED cathode (short leg) attached to ground
  * Note: because most Arduinos have a built-in
  LED attached  to pin 13 on the board, the LED is
  optional.

*/

int sensorValue = 0;

void setup()
{
  pinMode(A0, INPUT);
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop()
{
  // read the value from the sensor
  sensorValue = analogRead(A0);
  // turn the LED on
  digitalWrite(LED_BUILTIN, HIGH);
  // stop the program for the <sensorValue>
  // milliseconds
  delay(sensorValue); // Wait for sensorValue millisecond(s)
  // turn the LED off
  digitalWrite(LED_BUILTIN, LOW);
  // stop the program for the <sensorValue>
  // milliseconds
  delay(sensorValue); // Wait for sensorValue millisecond(s)
}