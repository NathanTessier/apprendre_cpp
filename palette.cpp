#include "palette.h"
#include "iostream"

using namespace std;

Palette::Palette(const int _largeur, const int _hauteur, const int _profondeur):
Contenant(_largeur,_hauteur,_profondeur)
{
    cout << "Constructeur de la classe Carton" << endl;
}

Palette::~Palette()
{
    cout << "destructeur de CaisseDeBouteilles" << endl;
}
