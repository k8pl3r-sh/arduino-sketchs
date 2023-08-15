#define IR_output 2
// mettre qd capteur blaanc face à nous et pins versle bas : gauche=gnd; mid = digital 2; droite = 5V 
//voir internet pour modifier capacité du capteur avec  les "interrupteurs oranges" !!!
void setup() {
pinMode(IR_output,INPUT);

Serial.begin(9600);
}

void loop() {
  if(digitalRead(IR_output)==HIGH){
   Serial.println("mouvement detecte");
  }
  if(digitalRead(IR_output)==LOW){
   Serial.println("pas de mouvement detecte");
  }

delay(200);
}
