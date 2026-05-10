int buttonState = 0;

void setup() 
{
  pinMode(2, INPUT_PULLUP);
  pinMode(7, OUTPUT);
}
void loop()
{ 
	buttonState = digitalRead(2);
    if (buttonState == LOW) 
    {
      digitalWrite(7, HIGH);
      delay(1000);
      digitalWrite(7, LOW);
      delay(1000);
    } 
    else 
    { 
      digitalWrite(7, LOW);
    }
    delay(10);     
}