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
     
    void setup() {
      Wire.begin();  // bus I2C
      Serial.begin(9600); // liaison série
      while (!Serial) {
        ; // wait for serial port to connect. Needed for native USB (LEONARDO)
      }
      accelgyro.initialize();  // initialize device
    }
     
    void loop() {
      accelgyro.getMotion6(&ax, &ay, &az, &gx, &gy, &gz);
      // On peut aussi utiliser ces méthodes
      //accelgyro.getAcceleration(&ax, &ay, &az);
      //accelgyro.getRotation(&gx, &gy, &gz);
     
      // Affichage accel/gyro x/y/z
      Serial.print("a/g:\t");
      Serial.print(ax); 
      Serial.print("\t");
      Serial.print(ay); 
      Serial.print("\t");
      Serial.print(az); 
      Serial.print("\t");
      Serial.print(gx); 
      Serial.print("\t");
      Serial.print(gy); 
      Serial.print("\t");
      Serial.print(gz); 
      Serial.println("\t");
      //delay(1);  
    }


    /*  Enregistrement &ax, &ay, &az, &gx, &gy, &gz sur data sd card    */
