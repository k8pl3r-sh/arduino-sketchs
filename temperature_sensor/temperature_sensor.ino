// Use this program for an analogic temperature sensor 
// You need to calibrate your sensor !

const int Voie_0=0; // analogic
//const int Voie_0=4 // digital

int raw=0

void setup()   { 

Serial.begin(9600);
} 


void loop(){ 

//raw=digitalRead(Voie_0);
raw=analogRead(Voie_0);

// display numeric value in decimal format
Serial.println(raw);

delay(10); 
} 
