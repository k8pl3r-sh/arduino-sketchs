 //afficheur :
  #include <TM1637Display.h>






  //afficheur :
  const int CLK = A0; //Set the CLK pin connection to the display
  const int DIO = A1; //Set the DIO pin connection to the display
 
  int numCounter = 0;
  int var=0;
 
  TM1637Display display(CLK, DIO);



void setup() {
   Serial.begin(9600);
   display.setBrightness(0x0a);
}

void loop() {



                     // allumer afficheur :
                     var="test";
                     numCounter=var;
                     display.showNumberDec(numCounter);
                     delay(1000);
    
    
    
    
}
