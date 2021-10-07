#include <iostream>
#include "barre.h"
#include "barrecarre.h"
#include "barreRonde.h"
#include "barrehexagone.h"
#include "barreoctogone.h"

using namespace std;

int main()
{

cout << "Lego" << endl;
Barre B1 ("Cuivre","01",7000,8.92);
B1.AfficherCaracteristiques();

cout << endl;
BarreRonde BR1 ("Acier Inox","001",5000,8.02,20);
BR1.AfficherCaracteristiques();
cout << BR1.calculerSection() << " mm2" << endl;
cout << BR1.calculerMasse() << endl;

cout << endl;
BarreCarre BC1 ("Aluminium","011",5000,2.70,20);
BC1.AfficherCaracteristiques();
cout << BC1.calculerSection() << " mm2" << endl;
cout << BC1.calculerMasse() << endl;

cout << endl;
BarreHexagone BH1 ("Etain","021",5000,7.27,40);
BH1.AfficherCaracteristiques();
cout << BH1.calculerSection() << " mm2" << endl;
cout << BH1.calculerMasse() << endl;

cout << endl;
BarreOctogone BO1 ("Sucre","031",5000,1.58,40);
BO1.AfficherCaracteristiques();
cout << BO1.calculerSection() << " mm2" << endl;
cout << BO1.calculerMasse() << endl;



    return 0;
}
