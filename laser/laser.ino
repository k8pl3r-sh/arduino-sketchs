#include <ir_Lego_PF_BitStreamEncoder.h>
#include <IRremoteInt.h>
#include <IRremote.h>
#include <boarddefs.h>

/*
   Reception infrarouge
*/



int broche_reception = 11; // broche 11 utilisée
IRrecv reception_ir(broche_reception); // crée une instance
decode_results decode_ir; // stockage données reçues

void setup()
{
  Serial.begin(9600);
  reception_ir.enableIRIn(); // démarre la réception
}

void loop()
{
  if (reception_ir.decode(&decode_ir))
  {
    Serial.println(decode_ir.value, HEX);
    Serial.println("OK suivant :");
    reception_ir.resume(); // reçoit le prochain code
  }
}
