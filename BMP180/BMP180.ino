#include <Wire.h>
#include <Adafruit_BMP085.h>
 
// Connecter VCC du BMP085 ou BMP180 au 3.3V (PAS SUR LE5.0V!)
// Connecter GND au GND de l'arduino
// Connecter SCL au i2c clock la pin A5 de l'arduino nano
// Connecter SDA au i2c data la pin A4 de l'arduino nano
 
Adafruit_BMP085 bmp;
  
void setup() {
  Serial.begin(9600);
  if (!bmp.begin()) {
    Serial.println("Impossible de trouver un capteur valide, verifiez la connexion!");
    while (1) {}
  }
}
  
void loop() {
    Serial.print("Temperature = ");
    Serial.print(bmp.readTemperature());
    Serial.println(" *C");
    
    Serial.print("Pressure = ");
    Serial.print(bmp.readPressure());
    Serial.println(" Pa");
    
    // Calcul de l'altitude en fonction d'une pression barométrique standard
    // pression de 1013.25 millibar = 101325 Pascal
    Serial.print("Altitude = ");
    Serial.print(bmp.readAltitude());
    Serial.println(" meters");
 
  // Vous pouvez avoir une mesure de l'altitude plus précise
  // si tu connais la pression atmosphérique actuelle au niveau de la mer
  // si elle est de 1015 millibar
  // elle est égale à 101500 Pascals.
    Serial.print("Real altitude = ");
    Serial.print(bmp.readAltitude(101325));
    Serial.println(" meters");
    
    Serial.println();
    delay(500);
}


/*
Combien de valeurs ? -> 20-50
->
*/


