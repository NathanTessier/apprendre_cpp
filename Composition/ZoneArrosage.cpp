#include "ZoneArrosage.h"
#include "Vanne.h"
#include "CapteurHumidite.h"
#include <iostream>


ZoneArrosage::ZoneArrosage(const string _initialisationZone)
{
    int parametres[4];
    size_t prec = 0;
    size_t pos = 0;
    for (int indice = 0;indice < 4;indice++)
    {
        pos = _initialisationZone.find(' ',prec);
        parametres[indice] = atoi(_initialisationZone.substr(prec,pos).c_str());
        prec = pos + 1; // on incrémente pos pour le tour d'après.
    }
    numZone = parametres[0];
    laVanne = new Vanne(parametres[1],parametres[2],parametres[3]);
}

ZoneArrosage::~ZoneArrosage()
{
    delete laVanne;
}
