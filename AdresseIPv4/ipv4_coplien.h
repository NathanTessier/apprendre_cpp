#ifndef IPV4_COPLIEN_H
#define IPV4_COPLIEN_H

class IPv4{
private:
    unsigned char * adresse;
    unsigned char * masque ;
  public:
    IPv4(const unsigned char * _adresse, const unsigned char _cidr);
    IPv4(const unsigned char * _adresse, const unsigned char * _masque);
    ~IPv4(); // destructeur
    // Ajout pour la forme canonique en plus du destructeur
    IPv4(); // constructeur par défaut
    IPv4(const IPv4& _ipv4); // constructeur de copie
    IPv4 &operator= (const IPv4& _ipv4); // opérateur d'affectation
  private:
    void CalculerMasque(const unsigned char _cidr);
  public:
    void ObtenirMasque(unsigned char * _masque);
    void ObtenirAdresseReseau(unsigned char * _reseau);
    void ObtenirAdresseDiffusion(unsigned char * _diffusion);
};
#endif



