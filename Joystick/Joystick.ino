int x; //création des valeurs
int y;

void setup() {

   Serial.begin(9600);
}

void loop() {

  x = analogRead(A4); //brancher le port A4 de l'Arduino sur le port "Rx" du joystick
  y = analogRead(A5); //brancher le port A5 de l'Arduino sur le port "Ry" du joystick
  //a = x - 511; //faire un étalonage des valeurs du potentiomètre
  //b = y - 511; //regardez juste ce que donne la fonction Serial ;)
  Serial.print("x = ");
  Serial.print(x);
  Serial.print("         y = ");
  Serial.println(y);
  delay(100);
  
}

