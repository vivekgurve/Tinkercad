// C++ code
//
#include "Adafruit_LEDBackpack.h"

Adafruit_7segment led_display1 = Adafruit_7segment();

void setup()
{
  led_display1.begin(112);
  pinMode(A1, INPUT);
}

void loop()
{
  // Convert from 0-1023 range to 0-30V range
  // (.0293255  = 30.0 / 1023)
  led_display1.println((analogRead(A1) * 0.0293255));
  led_display1.writeDisplay();
  delay(100); // Wait for 100 millisecond(s)
}