#ifndef MERE_H
#define MERE_H

#include <iostream>

using namespace std;

class Mere {
    private:
        string nom;
        static int compteur;
    public:
        Mere();
        Mere(string);
        ~Mere();
        string getName();
        void afficher();
        static int getCompteur();
        
};

#endif