#ifndef CAPTEURHUMIDITE_H
#define CAPTEURHUMIDITE_H

#define gpio_num_t  int
#include <iostream>

using namespace std;

class CapteurHumidite
{
public:
    CapteurHumidite(const gpio_num_t  _brocheCapteur);
    int MesurerHumiditeDuSol();

      ~CapteurHumidite();

private:


    gpio_num_t brocheCapteur;
};


#endif // CAPTEURHUMIDITE_H
