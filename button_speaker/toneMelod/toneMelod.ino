/*

This program 
This program was created by Valentin LONNOY (You can contact me at the address valentin.lon@free.fr in English ...)
*/


#include "pitches.h"
const int carrotBuzzer = 3;
const int tone1 = 8;
const int tone2 = 9;
const int tone3 = 10;

void setup() { 
  pinMode(carrotBuzzer, OUTPUT); 
  pinMode(tone1, INPUT);
  pinMode(tone2, INPUT);
  pinMode(tone3, INPUT);
}

void loop() {
  if (digitalRead(tone1) == HIGH){
    tone(carrotBuzzer, 200, 1000);
    }
  else if(digitalRead(tone2) == HIGH){
    tone(carrotBuzzer, 35000, 1000);
}
  else if(digitalRead(tone3) == HIGH){
      
    tone(carrotBuzzer, 600, 1000);
}
}
