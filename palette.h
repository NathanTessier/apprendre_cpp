#ifndef PALETTE_H
#define PALETTE_H

#include "contenant.h"

class Palette : public Contenant
{
public:
    Palette(const int _largeur, const int _hauteur,
            const int _profondeur);

    ~Palette();

private:
    bool consigne;
};

#endif // PALETTE_H
