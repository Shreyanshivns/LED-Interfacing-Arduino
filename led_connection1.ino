// C++ code
int timer = 200;
void setup()
{
  for(int LED_PIN = 2; LED_PIN<7; LED_PIN++)
  {
    pinMode(LED_PIN,OUTPUT);
  }
}

void loop()
{
  for(int LED_PIN = 2; LED_PIN<7; LED_PIN++)
  {
    digitalWrite(LED_PIN,HIGH);
    delay(timer);
    digitalWrite(LED_PIN,LOW);
    delay(timer);
  }
}