// C++ code
//
/*
  Multiple tone player

  Plays multiple tones on multiple pins in
  sequence

  circuit:
  * 3 8-ohm speaker on digital pins 6, 7, and 8
*/

int pos = 0;

void setup()
{
  pinMode(8, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
}

void loop()
{
  // turn off tone function for pin 8:
  noTone(8);
  // play a note on pin 6 for 200 ms:
  tone(6, 880, 200); // play tone 69 (A5 = 880 Hz)
  delay(200); // Wait for 200 millisecond(s)
  // turn off tone function for pin 6:
  noTone(6);
  // play a note on pin 7 for 500 ms:
  tone(7, 988, 500); // play tone 71 (B5 = 988 Hz)
  delay(500); // Wait for 500 millisecond(s)
  // turn off tone function for pin 7:
  noTone(7);
  // play a note on pin 8 for 300 ms:
  tone(8, 1047, 300); // play tone 72 (C6 = 1047 Hz)
  delay(300); // Wait for 300 millisecond(s)
}