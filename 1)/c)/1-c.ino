// C++ code
//
void setup()
{
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
}

void loop()
{
  digitalWrite(8, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(13, HIGH);
  digitalWrite(9, HIGH);
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(7, LOW);
  digitalWrite(10, LOW);
  digitalWrite(12, LOW);
  delay(1000);
    
  digitalWrite(8, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  digitalWrite(13, LOW);
  digitalWrite(9, LOW);
  digitalWrite(2, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(10, HIGH);
  digitalWrite(12, HIGH);
  delay(1000);
}