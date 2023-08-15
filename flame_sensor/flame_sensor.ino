
// Wire connections :
// + -> 5V
// GND -> GND
// S -> A0
const int Voie_0=0; //analogic
//const int Voie_0=4 // digital


int raw=0;

void setup()   { 

Serial.begin(9600);
} 


void loop(){ 

//raw=digitalRead(Voie_0);
raw=analogRead(Voie_0);
Serial.println(raw); // less than  50 -> flame

delay(10);

} 
