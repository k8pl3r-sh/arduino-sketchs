// Nouveau pour les 4 moteurs
int motor1Pin1 = 2;    // pin 2 on L293D
int motor1Pin2 = 3;    // pin 7 on L293D
int motor1Pin3 = 4;    // pin 2 on L293D
int motor1Pin4 = 5;    // pin 7 on L293D
int motor1Pin5 = 6;    // pin 2 on L293D
int motor1Pin6 = 7;    // pin 7 on L293D
int motor1Pin7 = 8;    // pin 2 on L293D
int motor1Pin8 = 9;    // pin 7 on L293D

int enablePin1 = 11;    // pin 1 on L293D
int enablePin2 = 12;    // pin 1 on L293D

void setup() {

  // set all the other pins you're using as outputs:
  pinMode(motor1Pin1, OUTPUT);
  pinMode(motor1Pin2, OUTPUT);
  pinMode(motor1Pin3, OUTPUT);
  pinMode(motor1Pin4, OUTPUT);
  pinMode(motor1Pin5, OUTPUT);
  pinMode(motor1Pin6, OUTPUT);
  pinMode(motor1Pin7, OUTPUT);
  pinMode(motor1Pin8, OUTPUT);
  
  pinMode(enablePin1, OUTPUT);
  pinMode(enablePin2, OUTPUT);
  // set enablePin high so that motor can turn on:
  digitalWrite(enablePin1, HIGH);
  digitalWrite(enablePin2, HIGH);
}
void loop() {
  /* Pour faire tourner le moteur dans un sens :
   *  
    digitalWrite(motor1Pin1, LOW);   // set pin 2 on L293D low
    digitalWrite(motor1Pin2, HIGH);  // set pin 7 on L293D high
    
    delay(5000);
  */
    digitalWrite(motor1Pin1, HIGH); 
    digitalWrite(motor1Pin2, LOW);
    
    digitalWrite(motor1Pin3, HIGH); 
    digitalWrite(motor1Pin4, LOW); 

    digitalWrite(motor1Pin5, HIGH); 
    digitalWrite(motor1Pin6, LOW);
    
    digitalWrite(motor1Pin7, HIGH); 
    digitalWrite(motor1Pin8, LOW); 


    delay(5000);
}
