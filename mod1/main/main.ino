#include "coeur.h"
#include "cardio.h"

int vitesse_battement = 200;

void delayWithMillis() // Remplace la fonction delay() car défectueuse
{
  //Calcul du temps lorsque t millisecondes se seront écoulés
  unsigned long stopTime = millis() + vitesse_battement;

  //Attente active jusqu'à ce que stopTime soit atteint
  while (millis() < stopTime)
  {}
}

int poul = 0;

unsigned long time;
int beat = 0;
int temps = 0;

void setup()
{
  Serial.begin(9600); // Initialisation des print
  pinMode(A0, INPUT); // Déclaration d'une entrée
  for (int i=2; i<12; i++)
  {
    pinMode(i, OUTPUT); // Déclaration des sorties
  }
}

void loop()
{
  Serial.println( analogRead(A0) );

   // On utilise la variable param générée dans param.h grâce à la fonction gencode()
  switch(param)
  {
    case 1:
      on();
      break;
    case 2:
      halfOn();
      break;
    case 3:
      thirdOn();
      break;
    case 4:
      progressive();
      break;
    case 5:
      choiceLed(choice);
      break;
    default:
      off();
      break;
  }
  pouls();
}
