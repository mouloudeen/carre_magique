#include "lozenge.hpp"
#include "outilCarre.hpp"

using namespace std;

int main()
{
    /* On teste les premiers nombres impairs */

    Lozenge * lozenge_3 = new Lozenge(3);

    cout << "lozenge_3" << endl;
    lozenge_3->remplir_impair(1);
    cout << "lozenge_3 impair" << endl;
    lozenge_3->AffichageCarre();
    lozenge_3->remplir_pair_droite(2);
    cout << "lozenge_3 pair droite" << endl;
    lozenge_3->AffichageCarre();
    lozenge_3->remplir_pair_gauche();
    cout << "lozenge_3 pair gauche" << endl;
    lozenge_3->AffichageCarre();

    cout << "lozenge_5" << endl;
    Lozenge * lozenge_5 = new Lozenge(5);
    lozenge_5->carre_lozenge();
    lozenge_5->AffichageCarre();


    cout << "lozenge_7" << endl;
    Lozenge * lozenge_7 = new Lozenge(7);
    lozenge_7->carre_lozenge();
    lozenge_7->AffichageCarre();


    cout << "lozenge_9" << endl;
    Lozenge * lozenge_9 = new Lozenge(9);
    lozenge_9->carre_lozenge();
    lozenge_9->AffichageCarre();


    cout << "lozenge_11" << endl;
    Lozenge * lozenge_11 = new Lozenge(11);
    lozenge_11->carre_lozenge();
    lozenge_11->AffichageCarre();

    cout << "lozenge_13" << endl;
    Lozenge * lozenge_13 = new Lozenge(13);
    lozenge_13->carre_lozenge();
    lozenge_13->AffichageCarre();

    /*on teste avec des grands ordres impairs pris au random*/


    Lozenge * lozenge1 = new Lozenge(5301);
    OutilCarre *test1 = new OutilCarre(lozenge1->GetOrdre(),lozenge1->GetCarre());
    cout << "lozenge avec "<< lozenge1->GetOrdre() << " est magique " << test1->carre_est_magique() << endl;

    Lozenge * lozenge2 = new Lozenge(7339);
    OutilCarre *test2 = new OutilCarre(lozenge2->GetOrdre(),lozenge2->GetCarre());
    cout << "lozenge avec "<< lozenge2->GetOrdre() << " est magique " << test2->carre_est_magique() << endl;

    Lozenge * lozenge3 = new Lozenge(9591);
    OutilCarre *test3 = new OutilCarre(lozenge3->GetOrdre(),lozenge3->GetCarre());
    cout << "lozenge avec "<< lozenge3->GetOrdre() << " est magique " << test3->carre_est_magique() << endl;

    Lozenge * lozenge4 = new Lozenge( 3687);
    OutilCarre *test4 = new OutilCarre(lozenge4->GetOrdre(),lozenge4->GetCarre());
    cout << "lozenge avec "<< lozenge4->GetOrdre() << " est magique " << test4->carre_est_magique() << endl;

    Lozenge * lozenge5 = new Lozenge(7243);
    OutilCarre *test5 = new OutilCarre(lozenge5->GetOrdre(),lozenge5->GetCarre());
    cout << "lozenge avec "<< lozenge5->GetOrdre() << " est magique " << test5->carre_est_magique() << endl;


   delete lozenge_3;
    delete lozenge_5;
    delete lozenge_7;
    delete lozenge_9;
    delete lozenge_11;
    delete lozenge_13;
    delete lozenge1;
    /*delete test1;*/
    delete lozenge2;
    /*delete test2;*/
   delete lozenge3;
    /*delete test3;*/
   delete lozenge4;
    /*delete test4;*/
    delete lozenge5;
    /*delete test5;*/
    return 0;
}
