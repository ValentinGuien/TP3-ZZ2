#include "mere.hpp"
#include "fille.hpp"


int main(int, char  **)
{

    Mere  *pp = new Fille();
  
    pp->afficher(); // affiche Fille

    delete pp;

    return 0;
}