#include <Arduino.h>
#include "cardio.h"


void pouls() // Fonction calculant le pouls total
{
 delayWithMillis();
 time = millis();
 if ((time > (2900 + temps)) && (time < (3200 + temps)))
 {
    Serial.print(poul * 20);
    Serial.print(";");
    Serial.println(time);
    poul = 0;
    temps = temps + 3000;

 }
 else
 {
  if (analogRead(A0) < 350)
    {
      beat = 1;
      poul += beat;

   }
 }
}
