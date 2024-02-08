#include "permutationdiagonale.h"
#include "outilcarre.h"

int main()
{
    /* On teste les premiers nombres divisible par 4*/
    permutationDiagonale * carre_4 = new permutationDiagonale(4);
    carre_4->permu_diag();
    carre_4->AffichageCarre();

    OutilCarre * test_4 = new OutilCarre(carre_4->getOrdre(),carre_4->getCarre());
    cout << "ordre = "<< carre_4->getOrdre() << " est magique " << test_4->carre_est_magique() <<endl;

    permutationDiagonale * carre_8 = new permutationDiagonale(8);
    carre_8->permu_diag();
    carre_8->AffichageCarre();

    OutilCarre * test_8 = new OutilCarre(carre_8->getOrdre(),carre_8->getCarre());
    cout << "ordre = "<< carre_8->getOrdre() << " est magique " << test_8->carre_est_magique() <<endl;

    permutationDiagonale * carre_12 = new permutationDiagonale(12);
    carre_12->permu_diag();
    carre_12->AffichageCarre();

    OutilCarre * test_12 = new OutilCarre(carre_12->getOrdre(),carre_12->getCarre());
    cout << "ordre = "<< carre_12->getOrdre() << " est magique " << test_12->carre_est_magique() <<endl;

    permutationDiagonale * carre_16 = new permutationDiagonale(16);
    carre_16->permu_diag();
    carre_16->AffichageCarre();

    OutilCarre * test_16 = new OutilCarre(carre_16->getOrdre(),carre_16->getCarre());
    cout << "ordre = "<< carre_16->getOrdre() << " est magique " << test_16->carre_est_magique() <<endl;

    /* on teste avec des grans ordres divisible par 4*/

    permutationDiagonale * carre1 = new permutationDiagonale(2380);
    carre1->permu_diag();


    OutilCarre * test1 = new OutilCarre(carre1->getOrdre(),carre1->getCarre());
    cout << "ordre = "<< carre1->getOrdre() << " est magique " << test1->carre_est_magique() <<endl;

    permutationDiagonale * carre2 = new permutationDiagonale(4472);
    carre2->permu_diag();


    OutilCarre * test2 = new OutilCarre(carre2->getOrdre(),carre2->getCarre());
    cout << "ordre = "<< carre2->getOrdre() << " est magique " << test2->carre_est_magique() <<endl;

    permutationDiagonale * carre3 = new permutationDiagonale(8312);
    carre3->permu_diag();


    OutilCarre * test3 = new OutilCarre(carre3->getOrdre(),carre3->getCarre());
    cout << "ordre = "<< carre3->getOrdre() << " est magique " << test3->carre_est_magique() <<endl;

    permutationDiagonale * carre4 = new permutationDiagonale(6244);
    carre4->permu_diag();


    OutilCarre * test4 = new OutilCarre(carre4->getOrdre(),carre4->getCarre());
    cout << "ordre = "<< carre4->getOrdre() << " est magique " << test4->carre_est_magique() <<endl;

    permutationDiagonale * carre5 = new permutationDiagonale(6088);
    carre5->permu_diag();


    OutilCarre * test5 = new OutilCarre(carre5->getOrdre(),carre5->getCarre());
    cout << "ordre = "<< carre5->getOrdre() << " est magique " << test5->carre_est_magique() <<endl;

    delete carre_4;
    delete carre_8;
    delete carre_12;
    delete carre_16;
    delete carre1;
    delete carre2;
    delete carre3;
    delete carre4;
    delete carre5;





    return 0;
}
