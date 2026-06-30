#include <LiquidCrystal.h>

LiquidCrystal LCD(8, 6, 10, 12, 9, 13);
#define PIR 2
#define ECHO 7
#define TRIG 4
#define temp A1
#define photo A3
#define buzz 1


void setup()
{
  pinMode ( PIR , INPUT);
  pinMode ( ECHO , INPUT);
  pinMode ( TRIG , OUTPUT);
  pinMode ( ECHO , INPUT);
  pinMode ( TRIG , OUTPUT);
  pinMode ( 3 , OUTPUT);
  pinMode ( 5 , OUTPUT);
  pinMode ( 11 , OUTPUT);
  pinMode ( buzz , OUTPUT);
  Serial.begin(9800);
  LCD.begin(16,2);
  LCD.setCursor(0,0);
}

void loop()
{
  int valor = analogRead(photo);
  int porcentaje = map(valor, 310, 1, 100, 0);
  
  digitalWrite(TRIG, LOW);
  delayMicroseconds(4);
  digitalWrite(TRIG, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG, LOW);
  float duracion = pulseIn(ECHO , HIGH);
  int distancia = duracion * 0.01753;
  
  float tension = analogRead(temp);
  tension = tension * 5.0;
  tension = tension / 1024.0;
  float temperatura = (tension - 0.5) * 100;
  
  
  int movimiento = digitalRead(PIR);
  Serial.println(movimiento);
  
  LCD.setCursor(0,0);
  LCD.print("tem luz mb cms");
  delay(250);
  LCD.clear();
  LCD.setCursor(0,1);
  LCD.print(round(temperatura));
  LCD.setCursor(5,1);
  LCD.print(porcentaje);
  LCD.setCursor(10,1);
  if (movimiento == 1)
  {
   	LCD.print("si");
  }
  else
  {
   	LCD.print("no");
  }
  LCD.setCursor(13,1);
  LCD.print(distancia);
  
 if (porcentaje <= 20)
 {
    
   	digitalWrite(3, HIGH);
    digitalWrite(5, HIGH);
    digitalWrite(11, HIGH);
    tone(buzz, 900);
    delay(100);
    digitalWrite(3, LOW);
    digitalWrite(5, LOW);
    digitalWrite(11, LOW);
    noTone(buzz);
    delay(100);
    digitalWrite(3, HIGH);
    digitalWrite(5, HIGH);
    digitalWrite(11, HIGH);
    tone(buzz, 900);
  
    if (movimiento = 1)
 	{
   	digitalWrite(3, HIGH);
    digitalWrite(5, LOW);
    digitalWrite(11, HIGH);
    tone(buzz, 900);
    delay(100);
    noTone(buzz);
  	}
  	else
  	{
   	digitalWrite(3, LOW);
    digitalWrite(5, LOW);
    digitalWrite(11, LOW); 
    }
    
    if (distancia < 1)
  	{
   	digitalWrite(3, HIGH);
    digitalWrite(5, LOW);
    digitalWrite(11, LOW);
    tone(buzz, 900);
  	}
  	else
  	{
   	digitalWrite(3, LOW);
    digitalWrite(5, LOW);
    digitalWrite(11, LOW);
  	}
    
    if (temperatura > 39)
  	{
   	digitalWrite(3, HIGH);
    digitalWrite(5, LOW);
    digitalWrite(11, LOW);
    tone(buzz, 900);
    delay(100);
    noTone(buzz);
  	}
  	else
 	{
   	digitalWrite(3, LOW);
    digitalWrite(5, LOW);
    digitalWrite(11, LOW);
  	}
 }
  else
 {
    digitalWrite(3, LOW);
    digitalWrite(5, LOW);
    digitalWrite(11, LOW);
    noTone(buzz);
 }
}