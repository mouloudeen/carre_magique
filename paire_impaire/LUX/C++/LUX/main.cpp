#include "lux.h"
#include "outilcarre.h"

int main()
{
    /* On teste les premiers nombres divisible par 2 mais pas par 4*/
    lux * carre_6 = new lux(6);
    carre_6->LUX(1,1);
    carre_6->AffichageCarre();

    OutilCarre * test_6 = new OutilCarre(carre_6->getOrdre(),carre_6->getCarre());
    cout << "ordre = "<< carre_6->getOrdre() << " est magique " << test_6->carre_est_magique() <<endl;

    lux * carre_10 = new lux(10);
    carre_10->LUX(1,1);
    carre_10->AffichageCarre();

    OutilCarre * test_10 = new OutilCarre(carre_10->getOrdre(),carre_10->getCarre());
    cout << "ordre = "<< carre_10->getOrdre() << " est magique " << test_10->carre_est_magique() <<endl;

    lux * carre_14 = new lux(14);
    carre_14->LUX(1,1);
    carre_14->AffichageCarre();

    OutilCarre * test_14 = new OutilCarre(carre_14->getOrdre(),carre_14->getCarre());
    cout << "ordre = "<< carre_14->getOrdre() << " est magique " << test_14->carre_est_magique() <<endl;

    lux * carre_18 = new lux(18);
    carre_18->LUX(1,1);
    carre_18->AffichageCarre();

    OutilCarre * test_18 = new OutilCarre(carre_18->getOrdre(),carre_18->getCarre());
    cout << "ordre = "<< carre_18->getOrdre() << " est magique " << test_18->carre_est_magique() <<endl;


    /* on teste avec des grans ordres divisible par 4*/

    lux * carre1 = new lux(7630);
    carre1->LUX(1,1);


    OutilCarre * test1 = new OutilCarre(carre1->getOrdre(),carre1->getCarre());
    cout << "ordre = "<< carre1->getOrdre() << " est magique " << test1->carre_est_magique() <<endl;

    lux * carre2 = new lux(3986);
    carre2->LUX(1,1);


    OutilCarre * test2 = new OutilCarre(carre2->getOrdre(),carre2->getCarre());
    cout << "ordre = "<< carre2->getOrdre() << " est magique " << test2->carre_est_magique() <<endl;

    lux * carre3 = new lux(4770);
    carre3->LUX(1,1);


    OutilCarre * test3 = new OutilCarre(carre3->getOrdre(),carre3->getCarre());
    cout << "ordre = "<< carre3->getOrdre() << " est magique " << test3->carre_est_magique() <<endl;

    lux * carre4 = new lux(5498);
    carre4->LUX(1,1);


    OutilCarre * test4 = new OutilCarre(carre4->getOrdre(),carre4->getCarre());
    cout << "ordre = "<< carre4->getOrdre() << " est magique " << test4->carre_est_magique() <<endl;

    lux * carre5 = new lux(9746);
    carre5->LUX(1,1);


    OutilCarre * test5 = new OutilCarre(carre5->getOrdre(),carre5->getCarre());
    cout << "ordre = "<< carre5->getOrdre() << " est magique " << test5->carre_est_magique() <<endl;

    delete carre_6;
    delete carre_10;
    delete carre_14;
    delete carre_18;
    delete carre1;
    delete carre2;
    delete carre3;
    delete carre4;
    delete carre5;

    return 0;
}
