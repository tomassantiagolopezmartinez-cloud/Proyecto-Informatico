#include <LiquidCrystal.h>

#define PHOTO A3

LiquidCrystal LCD (8, 6, 10, 12, 9, 13);

void setup()
{
  Serial.begin(9800);
  LCD.begin(16,2);
  LCD.setCursor(0,0);
}

void loop()
{
  int valor = analogRead(PHOTO);
  int porcentaje = map(valor, 310, 1, 100, 0);
  
  LCD.setCursor(0,0);
  LCD.print("luz");
  delay(250);
  LCD.clear();
  LCD.setCursor(0,1);
  LCD.print(porcentaje);
}