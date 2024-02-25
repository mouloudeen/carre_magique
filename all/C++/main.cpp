#include "lozenge.hpp"
#include "siamois.hpp"
#include "lux.h"
#include "permutationdiagonale.h"
#include "carre.h"
#include "outilCarre.hpp"

using namespace std;

int main()
{
   /* Carre *carre1 = new Carre(10);
    carre1->AffichageCarre();*/
    
    /*Lozenge *carre2 = new Lozenge(3);
    carre2->carre_lozenge();
    carre2->AffichageCarre();*/
    
   /* Siamois *carre3 = new Siamois(5);
    carre3->carre_siamois_no_pc(3);
    carre3->AffichageCarre();*/
    
    /*permutationDiagonale *carre4 = new permutationDiagonale(4);
    carre4->permu_diag(1,1);
    carre4->AffichageCarre();*/
    
    /*lux *carre5 = new lux(6);
    carre5->LUX(1,1);
    carre5->AffichageCarre();*/
    
    
    Carre *carre;
    OutilCarre *test;
    Lozenge *carre11 ;
    permutationDiagonale *carre22;
    lux *carre33;
    
    /* On teste les ordres de 3 à 20 */
    for (int i = 3; i < 21; i++){
        /* i impair alors on utilise carre_lozenge*/
        if (i%2 == 1){
            carre11 = new Lozenge(i);
            carre11->carre_lozenge();
            carre11->AffichageCarre();
            test = new OutilCarre(carre11->GetOrdre(), carre11->GetCarre());
            cout << "carre d'ordre " << i << " est magique : " << test->carre_est_magique() << endl;
            
        }
        /* i divisible par 4 on utilise permutation diagonale*/
        else if (i%4 == 0){
            carre22 = new permutationDiagonale(i);
            carre22->permu_diag(1,1);
            carre22->AffichageCarre();
            test = new OutilCarre(carre22->GetOrdre(), carre22->GetCarre());
            cout << "carre d'ordre " << i << " est magique : " << test->carre_est_magique() << endl;
        }
        /*sinon i est pair et n'est pas divisible par 4 on utilise lux*/
        else {
            carre33 = new lux(i);
            carre33->LUX(1,1);
            carre33->AffichageCarre();
            test = new OutilCarre(carre33->GetOrdre(), carre33->GetCarre());
            cout << "carre d'ordre " << i << " est magique : " << test->carre_est_magique() << endl;
        }
    }
    
    /* Grand nombre aléatoire*/
        int L[] = {5301, 7339, 9591, 3687, 7243, 7630, 3986, 4770, 5498, 9746, 2380, 4472, 8312, 6244, 6088};
    
    for (int i = 0; i < 15; i++){
        /* L[i] impair alors on utilise carre_lozenge*/
        if (L[i]%2 == 1){
            carre11 = new Lozenge(L[i]);
            carre11->carre_lozenge();
            test = new OutilCarre(carre11->GetOrdre(), carre11->GetCarre());
            cout << "carre d'ordre " << L[i] << " est magique : " << test->carre_est_magique() << endl;
            
        }
        /* L[i] divisible par 4 on utilise permutation diagonale*/
       else if (L[i]%4 == 0){
            carre22 = new permutationDiagonale(L[i]);
            carre22->permu_diag(1,1);
            test = new OutilCarre(carre22->GetOrdre(), carre22->GetCarre());
            cout << "carre d'ordre " << L[i] << " est magique : " << test->carre_est_magique() << endl;
        }
        /*sinon L[i] est pair et n'est pas divisible par 4 on utilise lux*/
        else {
            carre33 = new lux(L[i]);
            carre33->LUX(1,1);
            test = new OutilCarre(carre33->GetOrdre(), carre33->GetCarre());
            cout << "carre d'ordre " << L[i] << " est magique : " << test->carre_est_magique() << endl;
        }
    }
   
    int ordre =0;
    cout <<"On teste maintenant quelque calcul de carre pour voir si le résultat donne un carré magique"<<endl;

    cout <<"on teste d'abord avec les 2 algo des ordres impaires"<<endl;
    
    ordre = 3;
    cout << "carre lozenge" <<endl;
    Lozenge *carre1 = new Lozenge(ordre);
    carre1->carre_lozenge();
    carre1->AffichageCarre();
    test = new OutilCarre(carre1->GetOrdre(), carre1->GetCarre());
    test->carre_est_magique();
    
    cout << "carre siamois" <<endl;
    Siamois *carre2 = new Siamois(ordre);
    carre2->carre_siamois_ne_pl(2);
    carre2->AffichageCarre();
    test = new OutilCarre(carre2->GetOrdre(), carre2->GetCarre());
    test->carre_est_magique();
    
    cout << "addition" <<endl;
    carre1->addCarre(carre2);
    carre1->AffichageCarre();
    test = new OutilCarre(carre1->GetOrdre(), carre1->GetCarre());
    test->carre_est_magique();
    
    carre1 = new Lozenge(ordre);
    carre1->carre_lozenge();
    cout << "soustraction" <<endl;
    carre1->souCarre(carre2);
    carre1->AffichageCarre();
    test = new OutilCarre(carre1->GetOrdre(), carre1->GetCarre());
    test->carre_est_magique();
    
    carre1 = new Lozenge(ordre);
    carre1->carre_lozenge();
    cout << "multiplication" <<endl;
    carre1->mulCarre(carre2);
    carre1->AffichageCarre();
    test = new OutilCarre(carre1->GetOrdre(), carre1->GetCarre());
    test->carre_est_magique();
    
    carre1 = new Lozenge(ordre);
    carre1->carre_lozenge();
    cout << "multiplication vectorielle" <<endl;
    carre1->mulVecCarre(carre2);
    carre1->AffichageCarre();
    test = new OutilCarre(carre1->GetOrdre(), carre1->GetCarre());
    test->carre_est_magique();
    
    cout << " on teste avec l algo des ordres pairement paire" <<endl;
    ordre = 4;
    cout << "carre permutation diagonale" <<endl;
    permutationDiagonale *carre3 = new permutationDiagonale(ordre);
    carre3->permu_diag(1,1);
    carre3->AffichageCarre();
    test = new OutilCarre(carre3->GetOrdre(), carre3->GetCarre());
    test->carre_est_magique();
    
    cout << "carre siamois" <<endl;
    permutationDiagonale *carre4 = new permutationDiagonale(ordre);
    carre4->permu_diag(3,2);
    carre4->AffichageCarre();
    test = new OutilCarre(carre4->GetOrdre(), carre4->GetCarre());
    test->carre_est_magique();
    
    cout << "addition" <<endl;
    carre3->addCarre(carre4);
    carre3->AffichageCarre();
    test = new OutilCarre(carre3->GetOrdre(), carre3->GetCarre());
    test->carre_est_magique();
    
    carre3 = new permutationDiagonale(ordre);
    carre3->permu_diag(1,1);
    cout << "soustraction" <<endl;
    carre3->souCarre(carre4);
    carre3->AffichageCarre();
    test = new OutilCarre(carre3->GetOrdre(), carre3->GetCarre());
    test->carre_est_magique();
    
    carre3 = new permutationDiagonale(ordre);
    carre3->permu_diag(1,1);
    cout << "multiplication" <<endl;
    carre3->mulCarre(carre4);
    carre3->AffichageCarre();
    test = new OutilCarre(carre3->GetOrdre(), carre3->GetCarre());
    test->carre_est_magique();
    
    carre3 = new permutationDiagonale(ordre);
    carre3->permu_diag(1,1);
    cout << "multiplication vectorielle" <<endl;
    carre3->mulVecCarre(carre4);
    carre3->AffichageCarre();
    test = new OutilCarre(carre3->GetOrdre(), carre3->GetCarre());
    test->carre_est_magique();
    
    
    cout << "On teste avec l algo des ordres pairement impaire" <<endl;
    ordre = 6;
    cout << "carre lux" <<endl;
    lux *carre5 = new lux(ordre);
    carre5->LUX(1,1);
    carre5->AffichageCarre();
    test = new OutilCarre(carre5->GetOrdre(), carre5->GetCarre());
    test->carre_est_magique();
    
    cout << "carre lux" <<endl;
    lux *carre6 = new lux(ordre);
    carre6->LUX(3,2);
    carre6->AffichageCarre();
    test = new OutilCarre(carre6->GetOrdre(), carre6->GetCarre());
    test->carre_est_magique();
    
    cout << "addition" <<endl;
    carre5->addCarre(carre6);
    carre5->AffichageCarre();
    test = new OutilCarre(carre5->GetOrdre(), carre5->GetCarre());
    test->carre_est_magique();
    
    carre5 = new lux(ordre);
    carre5->LUX(1,1);
    cout << "soustraction" <<endl;
    carre5->souCarre(carre6);
    carre5->AffichageCarre();
    test = new OutilCarre(carre5->GetOrdre(), carre5->GetCarre());
    test->carre_est_magique();
    
    carre5 = new lux(ordre);
    carre5->LUX(1,1);
    cout << "multiplication" <<endl;
    carre5->mulCarre(carre6);
    carre5->AffichageCarre();
    test = new OutilCarre(carre5->GetOrdre(), carre5->GetCarre());
    test->carre_est_magique();
    
    carre5 = new lux(ordre);
    carre5->LUX(1,1);
    cout << "multiplication vectorielle" <<endl;
    carre5->mulVecCarre(carre6);
    carre5->AffichageCarre();
    test = new OutilCarre(carre5->GetOrdre(), carre5->GetCarre());
    test->carre_est_magique();
    
    return 0;
}
