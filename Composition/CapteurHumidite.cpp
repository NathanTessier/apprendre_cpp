#include "CapteurHumidite.h"
#include <iostream>


CapteurHumidite::CapteurHumidite(const int _brocheCapteur):

    brocheCapteur(_brocheCapteur)


{
  cout << "Constructeur par default de CapteurHumiditÃ©" << endl;
}
int CapteurHumidite::MesurerHumiditeDuSol()
{

    return 0;
}

CapteurHumidite::~CapteurHumidite()
{

}
