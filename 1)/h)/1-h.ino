int buttonState = 0;
int lastbuttonState = HIGH;
int estado = 0;

void setup()
{
  pinMode(4, INPUT_PULLUP);
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(8, OUTPUT);
}

void loop()
{
  buttonState = digitalRead(4);
    if (buttonState == LOW && lastbuttonState == HIGH) 
    {
      estado++;
      if (estado > 6) estado = 0;
    }
  
  lastbuttonState = buttonState;
  
      digitalWrite(13, LOW);
      digitalWrite(12, LOW);
      digitalWrite(8, LOW);
 
    if (estado == 0)
    {
      digitalWrite(13, LOW);
      digitalWrite(12, LOW);
      digitalWrite(8, HIGH);
      
    }
    else if (estado == 1)
    {
      digitalWrite(13, HIGH);
      digitalWrite(12, HIGH);
      digitalWrite(8, LOW);
      
    }
    else if (estado == 2)
    {
      digitalWrite(13, HIGH);
      digitalWrite(12, LOW);
      digitalWrite(8, LOW);
      
    }
    else if (estado == 3)
    {
      digitalWrite(13, LOW);
      digitalWrite(12, HIGH);
      digitalWrite(8, HIGH);
      
    }
    else if (estado == 4)
    {
      digitalWrite(13, LOW);
      digitalWrite(12, HIGH);
      digitalWrite(8, LOW);
      
    }
    else if (estado == 5)
    {
      digitalWrite(13, HIGH);
      digitalWrite(12, HIGH);
      digitalWrite(8, HIGH);
      
    }
    else if (estado == 6)
    {
      digitalWrite(13, HIGH);
      digitalWrite(12, LOW);
      digitalWrite(8, HIGH);
      
    }
    delay(10);   
}