#include "fille.hpp"
#include <iostream>

using namespace std;

Fille::Fille(){
    
    cout << "COUCOU" << endl;
}

Fille::Fille(string nom) : Mere(nom){

    cout << "COUCOU" << endl;
       
}


Fille::~Fille(){
    
    cout << "TCHAO BISOU A+" << endl;

}

void Fille::afficher(){
    cout << "Fille" << endl;
}