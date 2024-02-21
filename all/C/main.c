//
//  main.c
//  carre_lozenge
//
//  Created by sidali zitouni terki on 31/12/2023.
//
#include "carre_lozenge.h"
#include "carre_siamois.h"
#include "lux.h"
#include "carre_permutation_diagonale.h"
#include "outil_carre.h"

/* Affichage du carré magique*/
void AffichageCarre(int ** , int);

/* Desalloué la mémoire du carre */
void Free_carre(int **, int);




int main(int argc, const char * argv[]) {
    
    int ** carre;
    /* On teste les ordres de 3 à 20 */
    for (int i = 3; i < 21; i++){
        /* i impair alors on utilise carre_lozenge*/
        if (i%2 == 1){
            carre = carre_lozenge(i);
            AffichageCarre(carre,i);
            printf("carre d'ordre %d est magique : %d\n", i, carre_est_magique(carre,i));
            
        }
        /* i divisible par 4 on utilise permutation diagonale*/
        else if (i%4 == 0){
            carre = permu_diag(i,1,1);
            AffichageCarre(carre,i);
            printf("carre d'ordre %d est magique : %d\n", i, carre_est_magique(carre,i));
        }
        /*sinon i est pair et n'est pas divisible par 4 on utilise lux*/
        else {
            carre = LUX(i,1,1);
            AffichageCarre(carre,i);
            printf("carre d'ordre %d est magique : %d\n", i, carre_est_magique(carre,i));
        }
    }
    
/* Grand nombre aléatoire*/
    int L[] = {5301, 7339, 9591, 3687, 7243, 7630, 3986, 4770, 5498, 9746, 2380, 4472, 8312, 6244, 6088};
    
    for (int i = 0; i < 15; i++){
        /* i impair alors on utilise carre_lozenge*/
        if (L[i]%2 == 1){
            carre = carre_lozenge(L[i]);
            printf("carre d'ordre %d est magique : %d\n", L[i], carre_est_magique(carre,L[i]));
            
        }
        /* i divisible par 4 on utilise permutation diagonale*/
        else if (L[i]%4 == 0){
            carre = permu_diag(L[i],1,1);
            printf("carre d'ordre %d est magique : %d\n", L[i], carre_est_magique(carre,L[i]));
        }
        /*sinon i est pair et n'est pas divisible par 4 on utilise lux*/
        else {
            carre = LUX(L[i],1,1);
            printf("carre d'ordre %d est magique : %d\n", L[i], carre_est_magique(carre,L[i]));
        }
    }
    
    Free_carre(carre,L[14]);
    
    return 0;
}


/* Affichage du carré magique*/
void AffichageCarre(int ** carre, int n){
    for (int i = 0; i< n; i++){
        for(int j =0; j < n; j++){
            printf(" ------");
        }
        printf("\n");
        for(int j =0; j < n; j++){
            printf("| %4.d ",carre[i][j]);
        }
        printf("|");
        printf("\n");
        
        
    }
    for(int j =0; j < n; j++){
        printf(" ------");
    }
    printf("\n");
}

/* Desalloué la mémoire du carre */
void Free_carre(int ** carre,int n){
    if (carre != NULL){
        for (int i = 0; i<n; i++){
            free(carre[i]);
        }
        free(carre);
    }
}
