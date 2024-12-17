// C++ code
//
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
  sensorValue = analogRead(A0);
  analogWrite(9, sensorValue);
  Serial.print("sensor = ");
  Serial.println(sensorValue);
  delay(2); // Wait for 2 millisecond(s)
}