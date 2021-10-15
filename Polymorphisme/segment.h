#ifndef SEGMENT_H
#define SEGMENT_H

#include <string>
#include "element.h"
using namespace std;

class Segment : public Element
{
public:

    Segment(int _numero,double _longueur,double _angle,double _vitesse);
    void Afficher();

private:

double longueur;
double angle;
};

#endif // SEGMENT_H
