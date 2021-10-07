#ifndef BARRERONDE_H
#define BARRERONDE_H

#include "barre.h"

class BarreRonde : public Barre
{
public:
    BarreRonde(string _nom,
               string _reference,
               unsigned const int _longueur,
               const double _densite,
               const unsigned int diametre);
    double calculerMasse();
    double calculerSection();
    void AfficherCaracteristiques();
protected:

    unsigned int diametre;
};

#endif // BARRERONDE_H
