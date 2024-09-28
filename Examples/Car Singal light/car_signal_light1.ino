// C++ code
//
int time = 0;

void setup()
{
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
}

void loop()
{
  digitalWrite(13, HIGH);
  digitalWrite(12, HIGH);
  digitalWrite(11, HIGH);
  digitalWrite(10, HIGH);
  digitalWrite(9, HIGH);
  delay(500); // Wait for 500 millisecond(s)
  digitalWrite(13, LOW);
  digitalWrite(12, LOW);
  digitalWrite(11, LOW);
  digitalWrite(10, LOW);
  digitalWrite(9, LOW);
  delay(200); // Wait for 200 millisecond(s)
  digitalWrite(13, HIGH);
  delay(500); // Wait for 500 millisecond(s)
  digitalWrite(12, HIGH);
  delay(500); // Wait for 500 millisecond(s)
  digitalWrite(11, HIGH);
  delay(500); // Wait for 500 millisecond(s)
  digitalWrite(10, HIGH);
  delay(500); // Wait for 500 millisecond(s)
  digitalWrite(9, HIGH);
  delay(500); // Wait for 500 millisecond(s)
  digitalWrite(13, LOW);
  digitalWrite(12, LOW);
  digitalWrite(11, LOW);
  digitalWrite(10, LOW);
  digitalWrite(9, LOW);
  delay(500); // Wait for 500 millisecond(s)
}