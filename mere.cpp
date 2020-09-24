#include "mere.hpp"

using namespace std;

Mere::Mere():nom("LA MADRE"){
    cout << "CHERI VIENS MANGER !" << endl; compteur++;
}

Mere::Mere(std::string nom):nom(nom){
    cout << "CHERI VIENS MANGER !" << endl; compteur++;
}

Mere::~Mere(){
    cout << "Y a plus la daronne" << endl; compteur--;
}

std::string Mere::getName(){
    return nom;
}

void Mere::afficher(){
    cout << "Mere" << endl;
}

int Mere::getCompteur(){
    return compteur;
}

int Mere::compteur = 0;