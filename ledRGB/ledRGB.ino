
const int ledRouge=3; // Constante pour la broche 3
const int ledVert=5; // Constante pour la broche 5
const int ledBleu=6; // Constante pour la broche 6

void setup() {

pinMode (ledVert,OUTPUT);
pinMode (ledRouge,OUTPUT);
pinMode (ledBleu,OUTPUT);

}

void loop(){

analogWrite(ledRouge, 255);
analogWrite(ledVert, 1000);
analogWrite(ledBleu, 1000);

}
