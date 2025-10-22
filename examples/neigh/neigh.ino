#include <Horse.h>

Horse horse(2);

void setup()
{
  pinMode(13, OUTPUT);
  Serial.begin(9600);
  // horse.begin();
}

void loop()
{
  horse.neightoserial();
  horse.neighinmorse(13, 700);
  delay(500);
}