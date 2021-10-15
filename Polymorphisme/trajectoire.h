#ifndef TRAJECTOIRE_H
#define TRAJECTOIRE_H

#include "element.h"
#include <string>
using namespace std;

class Trajectoire
{
public:

    Trajectoire(int _nbEtapesMaxi);
    ~Trajectoire();
   bool Ajouter(Element* _pElement);
   void Afficher();


protected:
    Element **parcours;
    int nbEtapesMax;
    int prochaineEtapes;
};

#endif // TRAJECTOIRE_H
