
/*******************************************************************
 Chaque seconde, un nombre est émis par une carte Arduino munie
 d'un module nRF24L01.
 Ce message peut être capté par un autre Arduino, ou par un Raspberry Pi.
 http://electroniqueamateur.blogspot.ca/2017/02/communication-par-nrf24l01-entre-deux.html
********************************************************************/

#include <SPI.h>
#include "nRF24L01.h"
#include "RF24.h"

int compteur = 0;

RF24 radio(7, 8);

const uint64_t addresse = 0x1111111111;

const int taille = 32;

char message[taille + 1];



void setup(void)
{
  Serial.begin(115200);

  Serial.println("Emetteur de donnees");

  radio.begin();

  radio.openWritingPipe(addresse);

}

void loop(void)
{

  compteur++;

  itoa(compteur, message, 10);

  Serial.print("J'envoie maintenant ");
  Serial.println(message);

  radio.write( message, taille );

  delay(1000);

}
