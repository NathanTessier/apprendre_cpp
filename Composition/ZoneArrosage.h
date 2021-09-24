#ifndef ZONEARROSAGE_H
#define ZONEARROSAGE_H

#include "Vanne.h"
#include "CapteurHumidite.h"
#include <iostream>

using namespace std;

class ZoneArrosage
{
private:
    Vanne *laVanne;
    int numZone;
public:
    ZoneArrosage(const string _initialisationZone);
    ~ZoneArrosage();
    void Piloter();
};

#endif // ZONEARROSAGE_H
