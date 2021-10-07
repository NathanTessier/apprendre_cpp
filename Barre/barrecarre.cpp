#include "barrecarre.h"



/**
 * @brief BarreCarre::BarreCarre
 * @param _nom
 * @param _reference
 * @param _longueur
 * @param _densite
 * @param _cote
 */
BarreCarre::BarreCarre(string _nom, string _reference, const unsigned int _longueur, const double _densite, const unsigned int _cote):

  Barre(_nom,_reference,_longueur,_densite),
  cote(_cote)

{

}
/**
 * @brief BarreCarre::calculerMasse
 * @return  aire de la section en unité de surface
 */
double BarreCarre::calculerSection()
{
    return cote * cote;
}
/**
 * @brief BarreCarre::calculerSection
 * @return la masse de la barre en unité de masse
 */
double BarreCarre::calculerMasse()
{
    return calculerSection() * longueur * densite;
}

void BarreCarre::AfficherCaracteristiques()

{
    Barre::AfficherCaracteristiques();
    cout << "cote : " << cote << endl;
}

