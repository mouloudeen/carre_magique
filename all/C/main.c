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
    printf("On teste les ordres de 3 à 20\n");
    for (int i = 3; i < 21; i++){
        /* i impair alors on utilise carre_lozenge*/
        if (i%2 == 1){
            carre = carre_lozenge(i);
            AffichageCarre(carre,i);
            carre_est_magique(carre,i);
            
        }
        /* i divisible par 4 on utilise permutation diagonale*/
        else if (i%4 == 0){
            carre = permu_diag(i,1,1);
            AffichageCarre(carre,i);
            carre_est_magique(carre,i);
        }
        /*sinon i est pair et n'est pas divisible par 4 on utilise lux*/
        else {
            carre = LUX(i,1,1);
            AffichageCarre(carre,i);
            carre_est_magique(carre,i);
        }
    }
    
    printf("Grand nombre aléatoire\n");
    int L[] = {5301, 7339, 9591, 3687, 7243, 7630, 3986, 4770, 5498, 9746, 2380, 4472, 8312, 6244, 6088};
    
    for (int i = 0; i < 15; i++){
        /* i impair alors on utilise carre_lozenge*/
        if (L[i]%2 == 1){
            carre = carre_lozenge(L[i]);
            carre_est_magique(carre,L[i]);
            
        }
        /* i divisible par 4 on utilise permutation diagonale*/
        else if (L[i]%4 == 0){
            carre = permu_diag(L[i],1,1);
            carre_est_magique(carre,L[i]);
        }
        /*sinon i est pair et n'est pas divisible par 4 on utilise lux*/
        else {
            carre = LUX(L[i],1,1);
            carre_est_magique(carre,L[i]);
        }
    }
    
    Free_carre(carre,L[14]);
    
    printf("\n\n");
    
printf("On teste maintenant quelque calcul de carre pour voir si le résultat donne un carré magique\n");

printf("on teste d'abord avec les 2 algo des ordres impaires\n");


int ordre = 3;
int ** carre1 = carre_lozenge(ordre);
int ** carre2 = carre_siamois_se_dl(ordre,4);
int ** carre3 = addCarre(carre1, carre2, ordre);
int ** carre4 = souCarre(carre1, carre2, ordre);
int ** carre5 = mulCarre(carre1, carre2, ordre);
int ** carre6 = mulVecCarre(carre1, carre2, ordre);

printf("carre lozenge\n");
AffichageCarre(carre1,ordre);
carre_est_magique(carre1,ordre);
printf("carre siamois se dl\n");
AffichageCarre(carre2,ordre);
carre_est_magique(carre2,ordre);
printf("addition\n");
AffichageCarre(carre3,ordre);
carre_est_magique(carre3,ordre);
printf("soustraction\n");
AffichageCarre(carre4,ordre);
carre_est_magique(carre4,ordre);
printf("multiplication\n");
AffichageCarre(carre5,ordre);
carre_est_magique(carre5,ordre);
printf("multiplication vectorielle\n");
AffichageCarre(carre6,ordre);
carre_est_magique(carre6,ordre);



printf(" on teste avec l algo des ordres pairement paire\n");

ordre = 4;
carre1 = permu_diag(ordre,1,1);
carre2 = permu_diag(ordre,3,2);
carre3 = addCarre(carre1, carre2, ordre);
carre4 = souCarre(carre1, carre2, ordre);
carre5 = mulCarre(carre1, carre2, ordre);
carre6 = mulVecCarre(carre1, carre2, ordre);


printf("carre permutation diagonale\n");
AffichageCarre(carre1,ordre);
carre_est_magique(carre1,ordre);
printf("carre permutation diagonale\n");
AffichageCarre(carre2,ordre);
carre_est_magique(carre2,ordre);
printf("addition\n");
AffichageCarre(carre3,ordre);
carre_est_magique(carre3,ordre);
printf("soustraction\n");
AffichageCarre(carre4,ordre);
carre_est_magique(carre4,ordre);
printf("multiplication\n");
AffichageCarre(carre5,ordre);
carre_est_magique(carre5,ordre);
printf("multiplication vectorielle\n");
AffichageCarre(carre6,ordre);
carre_est_magique(carre6,ordre);
    
    
printf(" on teste avec l algo des ordres pairement impaire\n");
    
ordre = 6;
carre1 = LUX(ordre,1,1);
carre2 = LUX(ordre,3,2);
carre3 = addCarre(carre1, carre2, ordre);
carre4 = souCarre(carre1, carre2, ordre);
carre5 = mulCarre(carre1, carre2, ordre);
carre6 = mulVecCarre(carre1, carre2, ordre);
    
printf("carre lux\n");
AffichageCarre(carre1,ordre);
carre_est_magique(carre1,ordre);
printf("carre lux\n");
AffichageCarre(carre2,ordre);
carre_est_magique(carre2,ordre);
printf("addition\n");
AffichageCarre(carre3,ordre);
carre_est_magique(carre3,ordre);
printf("soustraction\n");
AffichageCarre(carre4,ordre);
carre_est_magique(carre4,ordre);
printf("multiplication\n");
AffichageCarre(carre5,ordre);
carre_est_magique(carre5,ordre);
printf("multiplication vectorielle\n");
AffichageCarre(carre6,ordre);
carre_est_magique(carre6,ordre);
    
  
    Free_carre(carre1,ordre);
    Free_carre(carre2,ordre);
    Free_carre(carre3,ordre);
    Free_carre(carre4,ordre);
    Free_carre(carre5,ordre);
    Free_carre(carre6,ordre);
    
    
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
