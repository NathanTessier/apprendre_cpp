#include <iostream>

using namespace std;
#include "element.h"
#include "segment.h"
#include "trajectoire.h"

int main()
{

    Segment s1(1,9,0,3);
    Segment s2(2,5,0.927295,1);

    Trajectoire t1(2);

    t1.Ajouter(&s1);
    t1.Ajouter(&s2);

    t1.Afficher();

    return 0;
}
