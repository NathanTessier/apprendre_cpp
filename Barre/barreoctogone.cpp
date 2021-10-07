#include "barreoctogone.h"
#include <math.h>


using namespace std;



BarreOctogone::BarreOctogone(string _nom, string _reference, const unsigned int _longueur, const double _densite, const unsigned int _diametre):
    Barre(_nom,_reference,_longueur,_densite),
    diametre(_diametre)
{

}
/**
 * @brief BarreRonde::calculerMasse
 * @return la masse de la barre en unité de masse
 */

double BarreOctogone::calculerMasse()
{
    return calculerSection() * longueur * densite;
}

/**
 * @brief BarreRonde::calculerSection
 * @return aire de la section en unité de surface
 */

double BarreOctogone::calculerSection()
{
    return (2 * (diametre * diametre) * (sqrt(2)-1));
}

void BarreOctogone::AfficherCaracteristiques()
{
    Barre::AfficherCaracteristiques();
    cout << "diametre : " << diametre << endl;
}
