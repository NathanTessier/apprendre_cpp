#include "ZoneArrosage.h"
#include "Vanne.h"
#include "CapteurHumidite.h"
#include <iostream>

ZoneArrosage::ZoneArrosage(int _numZone, const int _commandeVanne, const int _senseAVanne, const int _senseBVanne, const int _brocheHumidite):
    laVanne(_commandeVanne,_senseAVanne,_senseBVanne),
    leCapteur(_brocheHumidite),
    numZone(_numZone)
{
    cout << "Constructeur ZoneArrosage" << endl;
}

void ZoneArrosage::Piloter()
{
    cout << "Pilotage ZoneArrosage" << endl;
}
