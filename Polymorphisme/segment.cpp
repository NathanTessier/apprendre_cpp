#include "segment.h"
#include <iostream>
#include <iomanip>
Segment::Segment(int _numero,double _longueur, double _angle,double _vitesse):

    Element(_numero,_vitesse),
    longueur(_longueur),
    angle(_angle)



{

}

void Segment::Afficher()
{
    cout << " (" << numero << ") " << "SEGMENT : L = "<< setw(10) << left  << longueur << "A = " << setw(10) << left << angle << " V = " << vitesse << endl;

};
