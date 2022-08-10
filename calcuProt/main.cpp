#include <iostream>

using namespace std;


unsigned int protCalcule(unsigned int poids);


int main(){
    //VARIABLES
    unsigned int poids;
    unsigned int prot;

    //TRAITEMENT
    
    cout << "Bienvenue sur le calculateur de protéine nécessaire pour prendre du muscle" << endl;
    cout << "Veuillez rentrer votre poids en kg --> ";
    cin >> poids;
    cout << "quantité de protéines journalière pour prendre du muscle : " << protCalcule(poids) << "g" << endl;
    cout << "Appuyer sur entrer pour quitter";
    cin >> poids;
}

unsigned int protCalcule(unsigned int poids){
    return(poids*1.8);
}