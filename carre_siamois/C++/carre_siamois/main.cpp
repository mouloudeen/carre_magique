#include "siamois.hpp"

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

    Siamois * carre_ne_dc = new Siamois(3);
    carre_ne_dc->carre_siamois("carre_siamois_ne_dc",1);

    int ** carre2 = carre_ne_dc->getCarre();
    int ordre2 = carre_ne_dc->getOrdre();
    for (int i = 0; i< ordre2; i++){
        for(int j =0; j < ordre2; j++){
            cout <<" ---";
        }
        cout << "\n";
        cout <<"| ";
        for(int j =0; j <ordre2; j++){
            cout   <<carre2[i][j] <<" | ";
        }

        cout <<"\n";


    }
    for(int j =0; j < ordre2; j++){
        cout <<" ---";
    }
    cout<< "\n";

}
