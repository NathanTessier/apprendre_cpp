#include "caissedebieres.h"

#include <iostream>
using namespace std;

CaisseDeBieres::CaisseDeBieres(const int _largeur,
                               const int _hauteur,
                               const int _profondeur,
                               const int _nbBouteilles,
                               const int _contenance,
                               string _marque):

    CaisseDeBouteilles(_hauteur,_largeur,_profondeur,_nbBouteilles,_contenance),
    marque(_marque)

{
    cout << "Constructeur de la classe CaisseDeBouteilles" << endl;
}
