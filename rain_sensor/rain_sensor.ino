// Programme du capteur de pluie
// Letmeknow.fr

const int capteur = A0; // pin connecté à la sortie digital du capteur
int var=0;

void setup()
{
  Serial.begin(9600);
  pinMode(capteur, INPUT);

}

void loop()
{
var=analogRead(capteur); //écrit env 670 ... 
                         //et aux alentours de 400 et mois quand il y a des gouttes

Serial.print("Var=    ");
Serial.print(var);
Serial.println(" ");
delay(1000);
}
