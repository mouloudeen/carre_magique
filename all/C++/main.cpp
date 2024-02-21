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
    Lozenge *carre1 ;
    permutationDiagonale *carre2;
    lux *carre3;
    
    /* On teste les ordres de 3 à 20 */
    for (int i = 3; i < 21; i++){
        /* i impair alors on utilise carre_lozenge*/
        if (i%2 == 1){
            carre1 = new Lozenge(i);
            carre1->carre_lozenge();
            carre1->AffichageCarre();
            test = new OutilCarre(carre1->GetOrdre(), carre1->GetCarre());
            cout << "carre d'ordre " << i << " est magique : " << test->carre_est_magique() << endl;
            
        }
        /* i divisible par 4 on utilise permutation diagonale*/
        else if (i%4 == 0){
            carre2 = new permutationDiagonale(i);
            carre2->permu_diag(1,1);
            carre2->AffichageCarre();
            test = new OutilCarre(carre2->GetOrdre(), carre2->GetCarre());
            cout << "carre d'ordre " << i << " est magique : " << test->carre_est_magique() << endl;
        }
        /*sinon i est pair et n'est pas divisible par 4 on utilise lux*/
        else {
            carre3 = new lux(i);
            carre3->LUX(1,1);
            carre3->AffichageCarre();
            test = new OutilCarre(carre3->GetOrdre(), carre3->GetCarre());
            cout << "carre d'ordre " << i << " est magique : " << test->carre_est_magique() << endl;
        }
    }
    
    /* Grand nombre aléatoire*/
        int L[] = {5301, 7339, 9591, 3687, 7243, 7630, 3986, 4770, 5498, 9746, 2380, 4472, 8312, 6244, 6088};
    
    for (int i = 0; i < 15; i++){
        /* L[i] impair alors on utilise carre_lozenge*/
        if (L[i]%2 == 1){
            carre1 = new Lozenge(L[i]);
            carre1->carre_lozenge();
            test = new OutilCarre(carre1->GetOrdre(), carre1->GetCarre());
            cout << "carre d'ordre " << L[i] << " est magique : " << test->carre_est_magique() << endl;
            
        }
        /* L[i] divisible par 4 on utilise permutation diagonale*/
        else if (L[i]%4 == 0){
            carre2 = new permutationDiagonale(L[i]);
            carre2->permu_diag(1,1);
            test = new OutilCarre(carre2->GetOrdre(), carre2->GetCarre());
            cout << "carre d'ordre " << L[i] << " est magique : " << test->carre_est_magique() << endl;
        }
        /*sinon L[i] est pair et n'est pas divisible par 4 on utilise lux*/
        else {
            carre3 = new lux(L[i]);
            carre3->LUX(1,1);
            test = new OutilCarre(carre3->GetOrdre(), carre3->GetCarre());
            cout << "carre d'ordre " << L[i] << " est magique : " << test->carre_est_magique() << endl;
        }
    }
    return 0;
}
