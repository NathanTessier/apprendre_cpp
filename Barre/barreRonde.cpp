#include "barreRonde.h"
#include "barre.h"
#include <math.h>


using namespace std;



BarreRonde::BarreRonde(string _nom, string _reference, const unsigned int _longueur, const double _densite, const unsigned int _diametre):
    Barre(_nom,_reference,_longueur,_densite),
    diametre(_diametre)
{

}
/**
 * @brief BarreRonde::calculerMasse
 * @return la masse de la barre en unité de masse
 */

double BarreRonde::calculerMasse()
{
    return calculerSection() * longueur * densite;
}

/**
 * @brief BarreRonde::calculerSection
 * @return aire de la section en unité de surface
 */

double BarreRonde::calculerSection()
{
    return (M_PI * diametre * diametre);
}

void BarreRonde::AfficherCaracteristiques()
{
    Barre::AfficherCaracteristiques();
    cout << "diametre : " << diametre << endl;
}
