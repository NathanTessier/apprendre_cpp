#include "barrehexagone.h"
#include <math.h>


using namespace std;



BarreHexagone::BarreHexagone(string _nom, string _reference, const unsigned int _longueur, const double _densite, const unsigned int _diametre):
    Barre(_nom,_reference,_longueur,_densite),
    diametre(_diametre)
{

}
/**
 * @brief BarreRonde::calculerMasse
 * @return la masse de la barre en unité de masse
 */

double BarreHexagone::calculerMasse()
{
    return calculerSection() * longueur * densite;
}

/**
 * @brief BarreRonde::calculerSection
 * @return aire de la section en unité de surface
 */

double BarreHexagone::calculerSection()
{
    return (2 * sqrt((3 * diametre * diametre) / 4) );
}

void BarreHexagone::AfficherCaracteristiques()
{
    Barre::AfficherCaracteristiques();
    cout << "diametre : " << diametre << endl;
}
