#ifndef BARRECARRE_H
#define BARRECARRE_H
#include "barre.h"

class BarreCarre : public Barre
{
public:
    BarreCarre(string _nom,
               string _reference,
               unsigned const int _longueur,
               const double _densite,
               unsigned const int _cote);
    double calculerMasse();
    double calculerSection();
    void AfficherCaracteristiques();

private:
    unsigned int cote;
};

#endif // BARRECARRE_H
