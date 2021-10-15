#ifndef ELEMENT_H
#define ELEMENT_H

#include <string>
using namespace std;

 class  Element
{
public:

    Element(int  _numero,double _vitesse);
    virtual ~Element();
    virtual void Afficher();

    void Getter();
    void Setter();

 protected:
    int numero;
    double vitesse;

};

#endif // ELEMENT_H
