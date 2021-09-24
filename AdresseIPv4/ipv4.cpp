#include "ipv4.h"

IPv4::IPv4(const unsigned char * _adresse,const unsigned char _cidr)
{
    adresse = new unsigned char [4];
    masque  = new unsigned char [4];
    for(int indice = 0 ; indice < 4 ; indice++)
        adresse[indice] = _adresse[indice];
    if(_cidr <= 32)
        CalculerMasque(_cidr);
}
IPv4::IPv4(const unsigned char * _adresse,const unsigned char * _masque)
{
    adresse = new unsigned char [4];
    masque  = new unsigned char [4];
    for(int indice = 0 ; indice < 4 ; indice++)
    {
        adresse[indice] = _adresse[indice];
        masque[indice]  = _masque[indice];
    }
}
IPv4::~IPv4()
{
    delete [] adresse;
    delete [] masque ;
}

IPv4::IPv4()
{
    adresse = new unsigned char [4];
    masque  = new unsigned char [4];
    for(int indice = 0 ; indice < 4 ; indice++)
    {
        adresse[indice] = 0;
        masque[indice]  = 255;
    }
}

IPv4::IPv4(const IPv4 &original)
{
    adresse = new unsigned char [4];
    masque  = new unsigned char [4];
    for(int indice = 0 ; indice < 4 ; indice++)
    {
        adresse[indice] = original.adresse[indice];
        masque[indice]  = original.masque[indice];
    }
}

IPv4 &IPv4::operator=(const IPv4 &original)
{
     if(adresse != original.adresse || masque != original.masque)
     {
        if(adresse != nullptr && masque != nullptr)
        {
            delete [] adresse;
            delete [] masque ;
        }
        adresse = new unsigned char [4];
        masque  = new unsigned char [4];
        for(int indice = 0 ; indice < 4 ; indice++)
        {
            masque[indice]  = original.masque[indice];
            adresse[indice] = original.adresse[indice];
        }
     }
     return *this;
}


void IPv4::CalculerMasque(unsigned char _cidr)
{
    int indice ;
    // Le masque est remis à 0 -> 0.0.0.0
    for(indice = 0 ; indice < 4 ; indice++)
        masque[indice] = 0 ;
    indice = 0;
    // tant que le cidr est un multiple de 8
    while(_cidr >= 8)
    {
        masque[indice++] = 255 ;
        _cidr -= 8 ;
    }
    // Complément pour la fin du cidr (<8)
    unsigned char puissance = 128 ;
    while(_cidr-- > 0) // Après le test la variable _cidr est décrémentée
    {   // les puissances de 2 sont ajoutées à l'octet par valeur décroissante
        masque[indice] += puissance ;
        puissance /=2 ;
    }
}

void IPv4::ObtenirMasque(unsigned char * _masque)
{
    for(int indice = 0 ; indice < 4 ; indice++)
        _masque[indice] = masque[indice];
}

void IPv4::ObtenirAdresseReseau(unsigned char * _reseau)
{
    for(int indice = 0 ; indice < 4 ; indice++)
        _reseau[indice] = adresse[indice] & masque[indice] ;
}

void IPv4::ObtenirAdresseDiffusion(unsigned char *_diffusion)
{
    unsigned char adresseDuReseau[4];
    ObtenirAdresseReseau(adresseDuReseau);
    for(int indice = 0 ; indice < 4 ; indice++)
        _diffusion[indice] = adresseDuReseau[indice] | ~masque[indice] ;
}

void IPv4::ObtenirPremiereAdresse(unsigned char *_premiereAdresse)
{
    unsigned char adresseDuReseau[4];
    ObtenirAdresseReseau(adresseDuReseau);
    for(int indice = 0 ; indice < 4 ; indice++)
    {
        _premiereAdresse[indice] = adresseDuReseau[indice];
    }
    _premiereAdresse[3]++;
}

void IPv4::ObtenirDerniereAdresse(unsigned char *_derniereAdresse)
{
    unsigned char adresseDiffusion[4];
    ObtenirAdresseDiffusion(adresseDiffusion);
    for(int indice = 0 ; indice < 4 ; indice++)
    {
        _derniereAdresse[indice] = adresseDiffusion[indice];
    }
    _derniereAdresse[3]--;
}

int IPv4::NbBitA1(unsigned char val){
    int n = 0;
    do{
        n+= val & 1;
    }while(val >>= 1);
    return n;
}

unsigned int IPv4::ObtenirNombreMachines()
{
    unsigned int nb = 0;
    for (int i =0; i<4; i++){
        nb+=NbBitA1(masque[i]);
    }
    return exp2(32-nb) -2;
}
/*int IPv4::ObtenirNombreMachines()
{
    unsigned char premiereAdresse[4];
    ObtenirPremiereAdresse(premiereAdresse);
    unsigned char derniereAdresse[4];
    ObtenirAdresseDiffusion(derniereAdresse);

    unsigned int machines[4];

    for(int indice = 0 ; indice < 4 ; indice++)
    {
        machines[indice]=static_cast<int>(derniereAdresse[indice] - premiereAdresse[indice]);
        machines[indice]=machines[indice]*(pow(255,4)-indice);
    }

    int nbMachines= machines[0]+machines[1]+machines[2]+machines[3];

    return nbMachines;
}*/

void AfficherTableau(unsigned char *tab)
{
    for(int indice=0 ; indice < 4 ; indice ++)
    {
        std::cout  << static_cast<int> (tab[indice]);
        if(indice < 3)
            std::cout << "." ;
    }
    std::cout << std::endl;
}
