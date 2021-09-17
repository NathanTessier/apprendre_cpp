#ifndef CONTENANT_H
#define CONTENANT_H


class Contenant
{
public:

    Contenant();
    Contenant(const int _largeur, const int _hauteur, const int _profondeur);
    int CalculerVolume();
    ~Contenant();

protected:

    int largeur;
    int hauteur;
    int profondeur;
};

#endif // CONTENANT_H
