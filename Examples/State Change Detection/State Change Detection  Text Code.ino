// C++ code
//
/*

  State change detection (edge detection)

  Often, you don't need to know the state of a
  digital input all the time,  but you just need
  to know when the input changes from one state to
  another.  For example, you want to know when a
  button goes from OFF to ON.  This is called
  state change detection, or edge detection.

  This example shows how to detect when a button
  or button changes from off to on  and on to off.


  The circuit:
  * pushbutton attached to pin 2 from +5V
  * 10K resistor attached to pin 2 from ground
  * LED attached from pin 13 to ground (or use the
  built-in LED on  most Arduino boards)

*/

int buttonState = 0;

int lastButtonState = 0;

int buttonPushCounter = 0;

void setup()
{
  pinMode(2, INPUT);
  Serial.begin(9600);
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop()
{
  // read the pushbutton input pin
  buttonState = digitalRead(2);
  // compare the buttonState to its previous state
  if (buttonState != lastButtonState) {
    // if the state has changed, increment the counter
    if (buttonState == HIGH) {
      // if the current state is HIGH, then the button
      // went from off to on
      buttonPushCounter += 1;
      Serial.println("on");
      Serial.print("number of button pushes: ");
      Serial.println(buttonPushCounter);
    } else {
      // if the current state is LOW, then the button
      // went from on to off
      Serial.println("off");
    }
    // delay a little bit to avoid debouncing
    delay(5); // Wait for 5 millisecond(s)
  }
  // save the current state as the last state, for
  // the next time through the loop
  lastButtonState = buttonState;
  // turns on the LED every four button pushes by
  // checking the modulo of the button push counter.
  // the modulo function gives you the remainder of
  // the devision of two numbers
  if (buttonPushCounter % 4 == 0) {
    digitalWrite(LED_BUILTIN, HIGH);
  } else {
    digitalWrite(LED_BUILTIN, LOW);
  }
}