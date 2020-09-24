#ifndef FILLE_HPP
#define FILLE_HPP

#include "mere.hpp"

using namespace std;

class Fille : public Mere {
    private :
        
    public :
        Fille();
        Fille(string);
        ~Fille();
        void afficher();
};

#endif