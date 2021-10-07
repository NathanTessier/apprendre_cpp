#ifndef BARREOCTOGONE_H
#define BARREOCTOGONE_H


#include "barre.h"

class BarreOctogone : public Barre
{
public:
    BarreOctogone(string _nom,
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
#endif // BARREOCTOGONE_H
