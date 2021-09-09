#include <iostream>
#include "ipv4.h"
using namespace std;
void AfficherTableau(unsigned char *tab);
int main()
{
    unsigned char adresse[4]= {192,168,1,1};
    unsigned char masque[4];
    unsigned char reseau[4];
    unsigned char diffusion[4];
    unsigned char premiereAdresse[4];
    unsigned char derniereAdresse[4];

    unsigned char AdresseParDefault[4];
    unsigned char AdresseReseauCopie[4];

    IPv4 uneAdresse(adresse, 24); // instanciation de la classe IPv4
    IPv4 uneAutreAdresse;
    IPv4 AdresseCopie(uneAdresse);
    IPv4 adresse3 =uneAdresse;

    cout << "Adresse IPv4 : ";
    AfficherTableau(adresse);
    uneAdresse.ObtenirMasque(masque); // appel d'une méthode
    cout << "Masque : ";
    AfficherTableau(masque);
    uneAdresse.ObtenirAdresseReseau(reseau);
    cout << "Réseau : ";
    AfficherTableau(reseau);
    uneAdresse.ObtenirAdresseDiffusion(diffusion);
    cout << "Diffusion : ";
    AfficherTableau(diffusion);
    uneAdresse.ObtenirPremiereAdresse(premiereAdresse);
    cout << "Première adresse : ";
    AfficherTableau(premiereAdresse);
    uneAdresse.ObtenirDerniereAdresse(derniereAdresse);
    cout << "Dernière adresse : ";
    AfficherTableau(derniereAdresse);

    cout << "Nombre de machine : " << uneAdresse.ObtenirNombreMachines() << endl;

    uneAutreAdresse.ObtenirAdresseReseau(AdresseParDefault);
    cout << "Adresse réseau par défaut : ";
    AfficherTableau(AdresseParDefault);

    AdresseCopie.ObtenirAdresseReseau(AdresseReseauCopie);
    cout << "Adresse réseau de l'adresse copiée : ";
    AfficherTableau(AdresseReseauCopie);

    adresse3.ObtenirAdresseReseau(AdresseReseauCopie);
    cout << "Adresse réseau de adresse3: ";
    AfficherTableau(AdresseReseauCopie);

    return 0;
}
