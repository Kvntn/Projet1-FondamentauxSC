#include "coeur.h"

int i = 2;

void on() // Toutes les LEDs s'allument
{
  if (analogRead(0) < 350)
  {
    digitalWrite(2, HIGH);
    digitalWrite(3, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(5, HIGH);
    digitalWrite(6, HIGH);
    digitalWrite(7, HIGH);
    digitalWrite(8, HIGH);
    digitalWrite(9, HIGH);
    digitalWrite(10, HIGH);
    digitalWrite(11, HIGH);
  }
  else
  {
    off();
  }
  //delayWithMillis(); // Cette partie là ne sert que dans lec as de notre montage défectueux
  //off();
}

void off() // Toutes les LEDs s'éteignent
{
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  digitalWrite(7, LOW);
  digitalWrite(8, LOW);
  digitalWrite(9, LOW);
  digitalWrite(10, LOW);
  digitalWrite(11, LOW);
}

void halfOn() // Une LED sur deux s'allume
{
  if (analogRead(0) < 350)
  {
    digitalWrite(2, HIGH);
    digitalWrite(3, LOW);
    digitalWrite(4, HIGH);
    digitalWrite(5, LOW);
    digitalWrite(6, HIGH);
    digitalWrite(7, LOW);
    digitalWrite(8, HIGH);
    digitalWrite(9, LOW);
    digitalWrite(10, HIGH);
    digitalWrite(11, LOW);
  }
  else {
    off();
  }
  /*delayWithMillis();
  off();*/
}

void thirdOn() // Une LED sur trois s'allume
{
  if (analogRead(0) < 350)
  {
    digitalWrite(2, LOW);
    digitalWrite(3, LOW);
    digitalWrite(4, HIGH);
    digitalWrite(5, LOW);
    digitalWrite(6, LOW);
    digitalWrite(7, HIGH);
    digitalWrite(8, LOW);
    digitalWrite(9, LOW);
    digitalWrite(10, HIGH);
    digitalWrite(11, LOW);
  }
  else {
    off();
  }
  /*delayWithMillis();
  off();*/
}

void progressive() // Les LEDs s'allument et s'éteignent à la suite
{
  if (analogRead(0) < 350)
  {
    if (i > 11)
    {
      off();
      i = 2;
    }
    else
    {
      digitalWrite(i, HIGH);
      digitalWrite(i-1, LOW);
      delayWithMillis();
      i++;
    }
  }
}

void choiceLed(int choice) // la LED correspondant au PIN choisi s'allume
{
  off();
  if (analogRead(0) < 350)
  {
    digitalWrite(choice, HIGH);
  }
  /*delayWithMillis();
  off();*/
}
