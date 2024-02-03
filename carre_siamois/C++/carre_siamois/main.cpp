#include "siamois.hpp"
#include "outilCarre.hpp"

int main()
{
    /*Siamois * carre_ne_pl = new Siamois(3);
    cout<< "carre_ne_pl\n";
    carre_ne_pl->AffichageCarre();

    carre_ne_pl->carre_siamois_ne_pl(1);
    cout<< "carre_ne_pl\n";
    carre_ne_pl->AffichageCarre();

    Siamois * carre_ne_dc = new Siamois(3);
    carre_ne_dc->carre_siamois_ne_dc(1);
    cout<< "carre_ne_dc\n";
    carre_ne_dc->AffichageCarre();

    Siamois * carre_se_dl = new Siamois(3);
    carre_se_dl->carre_siamois_se_dl(1);
    cout<< "carre_se_dl\n";
    carre_se_dl->AffichageCarre();

    Siamois * carre_se_dc = new Siamois(3);
    carre_se_dc->carre_siamois_se_dc(1);
    cout<< "carre_se_dc\n";
    carre_se_dc->AffichageCarre();

    Siamois * carre_no_pl = new Siamois(3);
    carre_no_pl->carre_siamois_no_pl(1);
    cout<< "carre_no_pl\n";
    carre_no_pl->AffichageCarre();

    Siamois * carre_no_pc = new Siamois(3);
    carre_no_pc->carre_siamois_no_pc(1);
    cout<< "carre_no_pc\n";
    carre_no_pc->AffichageCarre();

    Siamois * carre_so_dl = new Siamois(3);
    carre_so_dl->carre_siamois_so_dl(1);
    cout<< "carre_so_dl\n";
    carre_so_dl->AffichageCarre();

    Siamois * carre_so_pc = new Siamois(3);
    carre_so_pc->carre_siamois_so_pc(1);
    cout<< "carre_so_pc\n";
    carre_so_pc->AffichageCarre();
*/
    /*
    Siamois * carre = new Siamois(3);
    cout << carre->debut_carre(15) << endl;
    cout << carre->debut_carre(18) << endl;
    cout << carre->debut_carre(21) << endl;
    cout << carre->debut_carre(24) << endl;
    cout << carre->debut_carre(27) << endl;*/

/*
    Siamois * carre_ne_pl = new Siamois(3);
    carre_ne_pl->carre_siamois("carre_siamois_ne_pl",1);
    cout<< "carre_ne_pl\n";
    carre_ne_pl->AffichageCarre();

    Siamois * carre_ne_dc = new Siamois(3);
    carre_ne_dc->carre_siamois("carre_siamois_ne_dc",1);
    cout<< "carre_ne_dc\n";
    carre_ne_dc->AffichageCarre();

    Siamois * carre_se_dl = new Siamois(3);
    carre_se_dl->carre_siamois("carre_siamois_se_dl",1);
    cout<< "carre_se_dl\n";
    carre_se_dl->AffichageCarre();

    Siamois * carre_se_dc = new Siamois(3);
    carre_se_dc->carre_siamois("carre_siamois_se_dc",1);
    cout<< "carre_se_dc\n";
    carre_se_dc->AffichageCarre();

    Siamois * carre_no_pl = new Siamois(3);
    carre_no_pl->carre_siamois("carre_siamois_no_pl",1);
    cout<< "carre_no_pl\n";
    carre_no_pl->AffichageCarre();

    Siamois * carre_no_pc = new Siamois(3);
    carre_no_pc->carre_siamois("carre_siamois_no_pc",1);
    cout<< "carre_no_pc\n";
    carre_no_pc->AffichageCarre();

    Siamois * carre_so_dl = new Siamois(3);
    carre_so_dl->carre_siamois("carre_siamois_so_dl",1);
    cout<< "carre_so_dl\n";
    carre_so_dl->AffichageCarre();

    Siamois * carre_so_pc = new Siamois(3);
    carre_so_pc->carre_siamois("carre_siamois_so_pc",1);
    cout<< "carre_so_pc\n";
    carre_so_pc->AffichageCarre();*/

   /* Siamois * carre_ne_dc = new Siamois(3);
    carre_ne_dc->carre_siamois("carre_siamois_ne_dc",1);

    OutilCarre *test1 = new OutilCarre(carre_ne_dc->getOrdre(),carre_ne_dc->getCarre());
    cout << test1->sum_ligne(1) <<endl;
    cout << test1->sum_colonne(1) <<endl;
    cout << test1->sum_diag1() <<endl;
    cout << test1->sum_diag2() <<endl;
    cout << test1->carre_est_magique() <<endl;

    delete test1;
*/
    int n = 5057;
    int k = 2465;

    Siamois * carre_ne_pl = new Siamois(n);
    carre_ne_pl->carre_siamois_ne_pl(k);
    OutilCarre * test_ne_pl = new OutilCarre(n, carre_ne_pl->getCarre());
    cout << test_ne_pl->carre_est_magique() <<endl;


    Siamois * carre_ne_dc = new Siamois(n);
    carre_ne_dc->carre_siamois_ne_dc(k);
    OutilCarre * test_ne_dc = new OutilCarre(n, carre_ne_dc->getCarre());
    cout << test_ne_dc->carre_est_magique() <<endl;


    Siamois * carre_se_dl = new Siamois(n);
    carre_se_dl->carre_siamois_se_dl(k);
    OutilCarre * test_se_dl = new OutilCarre(n, carre_se_dl->getCarre());
    cout << test_se_dl->carre_est_magique() <<endl;


    Siamois * carre_se_dc = new Siamois(n);
    carre_se_dc->carre_siamois_se_dc(k);
    OutilCarre * test_se_dc = new OutilCarre(n, carre_se_dc->getCarre());
    cout << test_se_dc->carre_est_magique() <<endl;


    Siamois * carre_no_pl = new Siamois(n);
    carre_no_pl->carre_siamois_no_pl(k);
    OutilCarre * test_no_pl = new OutilCarre(n, carre_no_pl->getCarre());
    cout << test_no_pl->carre_est_magique() <<endl;


    Siamois * carre_no_pc = new Siamois(n);
    carre_no_pc->carre_siamois_no_pc(k);
    OutilCarre * test_no_pc = new OutilCarre(n, carre_no_pc->getCarre());
    cout << test_no_pc->carre_est_magique() <<endl;


    Siamois * carre_so_dl = new Siamois(n);
    carre_so_dl->carre_siamois_so_dl(k);
    OutilCarre * test_so_dl = new OutilCarre(n, carre_so_dl->getCarre());
    cout << test_so_dl->carre_est_magique() <<endl;


    Siamois * carre_so_pc = new Siamois(n);
    carre_so_pc->carre_siamois_so_pc(k);
    OutilCarre * test_so_pc = new OutilCarre(n, carre_so_pc->getCarre());
    cout << test_so_pc->carre_est_magique() <<endl;


    delete carre_ne_pl;

    delete carre_ne_dc;

    delete carre_se_dl;

    delete carre_se_dc;

    delete carre_no_pl;

    delete carre_no_pc;

    delete carre_so_dl;

    delete carre_so_pc;


}
