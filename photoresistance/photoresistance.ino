// A calibrer !!! 
// 1024 = Noir complet
// 0 = lumière maximal
// -> calibrer pour avoir des unités ?

const int Voie_0=0; //declaration constante de broche analogique
//const int Voie_0=4 // digital

// --- Déclaration des variables globales ---
int mesure_brute=0;// Variable pour acquisition résultat brut de conversion analogique numérique


void setup()   { 

Serial.begin(9600);
} 


void loop(){ 

//mesure_brute=digitalRead(Voie_0);
mesure_brute=analogRead(Voie_0);

// affiche valeur numerique entière ou à virgule au format décimal
Serial.println(mesure_brute);

delay(10); // fixe une pause entre 2 mesures
// plus le délai est court, plus la trace est rapide

} // fin de la fonction loop() - le programme recommence au début de la fonction loop sans fin
// ********************************************************************************

// --- Fin programme ---
