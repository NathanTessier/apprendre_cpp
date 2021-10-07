#include <string>
#include <iostream>
#include "barre.h"

using namespace std;



/**
 * @brief Barre::Barre
 * @param _nom
 * @param _reference
 * @param _longueur
 * @param _densite
 */

Barre::Barre(string _nom, string _reference, const unsigned int _longueur, const double _densite):

    nom(_nom),
    reference(_reference),
    longueur(_longueur),
    densite(_densite)
{

}

/**
 * @brief Barre::AfficherCaracteristiques
 */

void Barre::AfficherCaracteristiques()

{
    cout << "Nom du Materiaux : " << nom << endl;
    cout << "Reference n° : " << reference << endl;
    cout << "Longueur : " << longueur << " mm" << endl;
    cout << "densite : " << densite * 1<< " kg/d3" << endl;



}

Barre::~Barre()
{
    //cout << "Destructeur par defaut de barre" << endl;
}



