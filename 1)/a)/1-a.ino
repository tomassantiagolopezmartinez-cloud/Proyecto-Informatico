// C++ code
//
#define LED_R 2
#define LED_Y 4
#define LED_G 7
#define LED_W 13
#define LED_R2 12

void setup()
{
  pinMode(2, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
}

void loop()
{
  digitalWrite(LED_R , HIGH);
  digitalWrite(LED_W , HIGH);
  digitalWrite(LED_R2 , LOW);
  delay(1000);
  digitalWrite(LED_Y , HIGH);
  digitalWrite(LED_R , LOW);
  digitalWrite(LED_W , LOW);
  delay(1500);
  digitalWrite(LED_G , HIGH);
  digitalWrite(LED_Y , LOW);
  digitalWrite(LED_R2 , HIGH);
  delay(2000);
  digitalWrite(LED_G , LOW);
}