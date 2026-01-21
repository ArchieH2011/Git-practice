const int right_forward = 7;
const int right_reverse = 8;

void setup()
{
  pinMode(right_forward, OUTPUT);
  pinMode(right_reverse, OUTPUT);
}

void loop()
{
  digitalWrite(right_forward, HIGH);
  digitalWrite(right_reverse, LOW);
  
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(right_forward, LOW);
  digitalWrite(right_reverse, HIGH);
  
  delay(1000); // Wait for 1000 millisecond(s)
}