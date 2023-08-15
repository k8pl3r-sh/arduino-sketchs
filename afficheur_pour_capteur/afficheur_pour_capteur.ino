 //afficheur :
  #include <TM1637Display.h>





  //afficheur :
  const int CLK = A0; //Set the CLK pin connection to the display
  const int DIO = A1; //Set the DIO pin connection to the display
 
  int numCounter = 0;
 
  TM1637Display display(CLK, DIO);



void setup() {
   Serial.begin(9600);


   //afficheur:
   display.setBrightness(0x0a);
}

void loop() {
  int var=1596;

                      numCounter=var;
                     display.showNumberDec(numCounter);
              
    
   
       
}
