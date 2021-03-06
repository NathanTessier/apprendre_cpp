#ifndef IPV4_H
#define IPV4_H

#include "iostream"
#include "math.h"

class IPv4
{
    private:
        unsigned char * adresse;
        unsigned char * masque ;
        void CalculerMasque(unsigned char _cidr);
        int NbBitA1(unsigned char val);
public:
        IPv4(const unsigned char * _adresse, const unsigned char _cidr);
        IPv4(const unsigned char * _adresse, const unsigned char * _masque);
        ~IPv4();

        IPv4();                                 // constructeur par défaut
        IPv4(const IPv4& _original);                // constructeur de copie
        IPv4 &operator= (const IPv4& _original);    // opérateur d'affectation

        void ObtenirMasque(unsigned char * _masque);
        void ObtenirAdresseReseau(unsigned char * _reseau);
        void ObtenirAdresseDiffusion(unsigned char * _diffusion);
        void ObtenirPremiereAdresse(unsigned char *_premiereAdresse);
        void ObtenirDerniereAdresse(unsigned char *_derniereAdresse);
        unsigned int ObtenirNombreMachines();

        static void AfficherTableau(unsigned char *tab);

};

#endif // IPV4_H
