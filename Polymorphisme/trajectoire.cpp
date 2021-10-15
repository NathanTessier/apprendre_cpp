#include "trajectoire.h"
#include <iostream>


Trajectoire::Trajectoire(int _nbEtapesMaxi):
    nbEtapesMax(_nbEtapesMaxi)
{
    parcours = new Element *[nbEtapesMax];
        prochaineEtapes = 0;
}

Trajectoire::~Trajectoire()
{
    delete[] parcours;
}

bool Trajectoire::Ajouter(Element *_pElement)
{

    bool retour = true;
    if(prochaineEtapes < nbEtapesMax)
        parcours[prochaineEtapes++] = _pElement;
    else
        retour = false;

    return retour;
}

void Trajectoire::Afficher()
{
    cout << "Trajectoire :" << endl << endl;

       for (int indice = 0; indice < prochaineEtapes ; indice++)
           {
               parcours[indice]->Afficher();
           }
}
