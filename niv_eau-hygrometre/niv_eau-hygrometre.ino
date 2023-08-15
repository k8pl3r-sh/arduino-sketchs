// Capteur de niveau d'eau ou hygromètre ???


int capteur =A0;// Le capteur est sur la pin A0
int val =0;// Variable de stockage de la valeur lue

void setup ()
{
Serial.begin (9600);// Démarrage de la liaison série
}

void loop ()
{
val = analogRead (capteur);// Lecture de la valeur du capteur
Serial.println (val);// Affichage de la valeur  Valeur = 660 dans air et varie dans eau selon profondeur (325 au max profondeur)
delay (1000);// Attendre 1s avant la prochaine lecture
}
