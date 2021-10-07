#ifndef BARREHEXAGONE_H
#define BARREHEXAGONE_H


#include "barre.h"

class BarreHexagone : public Barre
{
public:
    BarreHexagone(string _nom,
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

#endif // BARREHEXAGONE_H
