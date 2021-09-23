#ifndef BARRERONDE_H
#define BARRERONDE_H

#include "barre.h"

class BarreRonde : public Barre
{
public:
    BarreRonde(const float diametre,
               const float pi);
    ~BarreRonde();
private:
    float pi;
};

#endif // BARRERONDE_H
