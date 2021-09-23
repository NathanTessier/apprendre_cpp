#ifndef BARRE_H
#define BARRE_H

#include <string>
#include <iostream>

using namespace std;

class Barre
{
public:
    Barre(string _nom,
          string _reference);
    void AfficherCaracteristiques();
    ~Barre();
    Barre();


private:
    string nom;
    string reference;
    float diametre;

};

#endif // BARRE_H
