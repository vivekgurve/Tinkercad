// C++ code
//
#include <Servo.h>

Servo servo_7;

Servo servo_8;

void setup()
{
  pinMode(2, INPUT);
  servo_7.attach(7, 500, 2500);
  servo_8.attach(8, 500, 2500);
  pinMode(4, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(9, OUTPUT);
}

void loop()
{
  if (digitalRead(2) == 0) {
    servo_7.write(0);
    servo_8.write(0);
    digitalWrite(4, HIGH);
    digitalWrite(3, LOW);
    noTone(9);
  } else {
    servo_7.write(90);
    servo_8.write(90);
    digitalWrite(4, LOW);
    digitalWrite(3, HIGH);
    tone(9, 523, 1000); // play tone 60 (C5 = 523 Hz)
    delay(10000); // Wait for 10000 millisecond(s)
  }
}