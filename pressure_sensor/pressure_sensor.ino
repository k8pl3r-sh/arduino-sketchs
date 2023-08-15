

//************************************************
// Pressure and temperature sensor BMP085/BMP180/BMP280
//************************************************

#include "Wire.h"
#include "Adafruit_BMP085.h"
 
Adafruit_BMP085 bmp;
// Wire connections:
// GND on Arduino GND
// +3.3 on +3.3 Arduino
// SDA (=data) on AnalogPin4
// SCL (=clock) on AnalogPin5
//
// Don't need to connect CLR (reset) and EOC (end of conversion)

void setup() {
  Serial.begin(9600);  
  bmp.begin(); 
 
}
 
void loop() {
    Serial.print("Temperature = ");   // Celsius (SI)
    Serial.print(bmp.readTemperature());
    Serial.print(" *C");
 
    Serial.print("   Pressure = ");  // Pascal (SI)
    //Serial.print(bmp.readPressure());
    // Serial.print(" Pa ");
   
    float PressionPascal;
    float PressionAtm;
    float PressionHg;
    PressionPascal = bmp.readPressure(); 
    PressionAtm = PressionPascal*9.81*0.000001;
    PressionHg = PressionPascal*0.0075;
   
    Serial.print(PressurePascal);
    Serial.print(" Pa     ");
    Serial.print(PressureAtm);
    Serial.print(" Atm     ");
    Serial.print(PressureHg);
    Serial.print(" mm Hg     ");     
   
   
    Serial.print("  Altitude = "); 
    // 1013,25 hPa sea level
    Serial.print(bmp.readAltitude(101325));
    Serial.println(" meters");
   
    delay(500);  
}
