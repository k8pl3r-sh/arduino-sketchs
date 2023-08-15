/*
  Ce programme montre comment écrire sur une SD Carte
 * SD card attached to SPI bus as follows:
 ** MOSI - pin 11
 ** MISO - pin 12
 ** CLK - pin 13
 ** CS - pin 4
 
 */
 
#include <SD.h>
#include <SPI.h>


    /* Branchements :
      VCC -> 5V
      GND -> GND
      SCL -> SCL
      SDA -> SDA*/ 
    
    
    #include "Wire.h"  // Arduino Wire library
    #include "I2Cdev.h"  //bibliothèque I2Cdev à installer
    #include "MPU6050.h" //bibliothèque MPU6050 à installer
    // AD0 low = 0x68 (default for InvenSense evaluation board)
    // AD0 high = 0x69
    MPU6050 accelgyro;
     
    int16_t ax, ay, az;  //mesures brutes
    int16_t gx, gy, gz;
     



File myFile;
void setup()
{
        Wire.begin();  // bus I2C
 // Open serial communications and wait for port to open:
  Serial.begin(9600);
   while (!Serial) {
    ; // wait for serial port to connect. Needed for Leonardo only
  }
  accelgyro.initialize();  // initialize device

  Serial.print("Initializing SD card...");
  // On the Ethernet Shield, CS is pin 4. It's set as an output by default.
  // Note that even if it's not used as the CS pin, the hardware SS pin 
  // (10 on most Arduino boards, 53 on the Mega) must be left as an output 
  // or the SD library functions will not work. 
   pinMode(10, OUTPUT);
   
  if (!SD.begin(4)) {
    Serial.println("initialization failed!");
    return;
  }
  Serial.println("initialization done.");
  
  
  
}

void loop()
{
      accelgyro.getMotion6(&ax, &ay, &az, &gx, &gy, &gz);
      // On peut aussi utiliser ces méthodes
      //accelgyro.getAcceleration(&ax, &ay, &az);
      //accelgyro.getRotation(&gx, &gy, &gz);

      
  myFile = SD.open("data.txt", FILE_WRITE);
  while (1){
  if (myFile) {
    Serial.print("Writing to data.txt...");
    
    myFile.println("recording data ");

myFile.print(ax); 
      myFile.print("\t");
      myFile.print(ay); 
      myFile.print("\t");
      myFile.print(az); 
      myFile.print("\t");
      myFile.print(gx); 
      myFile.print("\t");
      myFile.print(gy); 
      myFile.print("\t");
      myFile.print(gz); 
      myFile.println("\t");

    
    
    Serial.println("done.");
  } else {
    Serial.println("error opening test.txt");
  }}
  myFile.close();
  
}
