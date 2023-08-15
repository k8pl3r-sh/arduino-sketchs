// --- Que fait ce programme ? ---
/* Ce programme permet de tester l'utilisation d'un encodeur rotatif.
Une variable de comptage est incrémentée/décrémentée par la rotation de l'encodeur.
L'appui sur l'axe met à zéro le comptage. */

// --- Fonctionnalités utilisées ---
// Utilise Encodeur Rotatif
// Utilise interruption du Timer 2 à intervalle régulier

// --- Circuit à réaliser ---

// Encodeur rotatif contrôlé par 3 broches :
//      > broche SW de l'encodeur sur la broche 5 de la carte Arduino
//      > broche PhA de l'encodeur  sur la broche 6 de la carte Arduino
//      > broche PhB de l'encodeur  sur la broche 7 de la carte Arduino

//**************** Entête déclarative *******
// A ce niveau sont déclarées les librairies, les constantes, les variables...

// --- Inclusion des librairies utilisées ---

//#include <S65Display.h> // Inclusion de la librairie pour afficheur TFT couleur S65

#include <RotaryEncoder.h> // Inclusion de la librairie pour encodeur rotatif du module S65
#include <MsTimer2.h> // inclusion de la librairie Timer2

// --- Déclaration des constantes ---

// --- constantes des broches ---


// --- Déclaration des variables globales ---
int compt=0; // variable de comptage

// --- Déclaration des objets utiles pour les fonctionnalités utilisées ---



RotaryEncoder encodeur; // Création d'un objet RotaryEncoder appelé encodeur


//**************** FONCTION SETUP = Code d'initialisation *****
// La fonction setup() est exécutée en premier et 1 seule fois, au démarrage du programme

void setup()   { // debut de la fonction setup()

// --- ici instructions à exécuter au démarrage ---

Serial.begin(115200); // initialise connexion série à 115200 bauds
// IMPORTANT : régler le terminal côté PC avec la même valeur de transmission

encodeur.init(); // initialise l'encodeur rotatif sur les broches 5,6,7 qui sont mises en entrée.
// Le rappel au plus interne est également activé (pullup)


// ------- Broches en sortie -------  


// ------- Broches en entrée -------  


// ------- Activation du rappel au + interne des broches en entrée si nécessaire -------  

// initialisation interruption Timer 2
  MsTimer2::set(1, InterruptTimer2); // période 1ms
  MsTimer2::start(); // active Timer 2


} // fin de la fonction setup()
// ********************************************************************************

//*************** FONCTION LOOP = Boucle sans fin = coeur du programme *************
// la fonction loop() s'exécute sans fin en boucle aussi longtemps que l'Arduino est sous tension

void loop(){ // debut de la fonction loop()

// --- ici instructions à exécuter par le programme principal ---

// --- la gestion de l'encodeur se fait dans la routine interruption du Timer2


} // fin de la fonction loop() - le programme recommence au début de la fonction loop sans fin
// ********************************************************************************

//*************** Autres Fonctions du programme *************

void InterruptTimer2() { // debut de la fonction d'interruption Timer2

encodeur.service(); // appel de la routine de gestion de l'encodeur

int test=encodeur.step(); // lit une seule fois l'état de step

if (test==1) // si rotation + encodeur
{
  compt=compt+1; // incrémente le compteur
  Serial.println(compt);

}

else if (test==-1) // si rotation - encodeur
{
  compt=compt-1; // décrémente le compteur
  Serial.println(compt);

}

else if (encodeur.sw()==SW_PRESSED) // si appui axe encodeur
{
  compt=0; // RAZ le compteur
  Serial.println(compt);

}

}
// --- Fin programme ---
