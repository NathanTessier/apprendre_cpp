#ifndef BARRE_H
#define BARRE_H

#include <string>
#include <iostream>

using namespace std;

class Barre
{
public:
    Barre(string _nom,
          string _reference,
          unsigned const int _longueur,
          const double _densite);
    void AfficherCaracteristiques();
    ~Barre();
protected:
    string nom;
    string reference;
    unsigned int longueur;
    double densite;


};

#endif // BARRE_H
