//
//  main.c
//  carre_permutation_diagonale
//
//  Created by sidali zitouni terki on 08/02/2024.
//

#include "carre_permutation_diagonale.h"
#include "outil_carre.h"

int main(int argc, const char * argv[]) {
    
    /* On teste les premiers nombres divisible par 4*/
    int ordre = 4;
    int ** carre_4;
    carre_4 = permu_diag(ordre,1,1);
    AffichageCarre(carre_4, ordre);
    printf("carre d'ordre %d est magique: %d \n",ordre, carre_est_magique(carre_4, ordre));
    
    ordre = 8;
    int ** carre_8;
    carre_8 = permu_diag(ordre,1,1);
    AffichageCarre(carre_8, ordre);
    printf("carre d'ordre %d est magique: %d \n",ordre, carre_est_magique(carre_8, ordre));
    
    ordre = 12;
    int ** carre_12;
    carre_12 = permu_diag(ordre,1,1);
    AffichageCarre(carre_12, ordre);
    printf("carre d'ordre %d est magique: %d \n",ordre, carre_est_magique(carre_12, ordre));
    
    ordre = 16;
    int ** carre_16;
    carre_16 = permu_diag(ordre,1,1);
    AffichageCarre(carre_16, ordre);
    printf("carre d'ordre %d est magique: %d \n",ordre, carre_est_magique(carre_16, ordre));
    
    
    /* on teste avec des grands ordres impairs pris au random*/
    
    ordre = 2380;
    int ** carre1;
    carre1 = permu_diag(ordre,1,1);
    printf("carre d'ordre %d est magique: %d \n",ordre, carre_est_magique(carre1, ordre));
    
    ordre = 4472;
    carre1 = permu_diag(ordre,1,1);
    printf("carre d'ordre %d est magique: %d \n",ordre, carre_est_magique(carre1, ordre));
    
    ordre = 8312;
    carre1 = permu_diag(ordre,1,1);
    printf("carre d'ordre %d est magique: %d \n",ordre, carre_est_magique(carre1, ordre));
    
    ordre = 6244;
    carre1 = permu_diag(ordre,1,1);
    printf("carre d'ordre %d est magique: %d \n",ordre, carre_est_magique(carre1, ordre));
    
    ordre = 6088;
    carre1 = permu_diag(ordre,1,1);
    printf("carre d'ordre %d est magique: %d \n",ordre, carre_est_magique(carre1, ordre));
    
    free(carre_4);
    free(carre_8);
    free(carre_12);
    free(carre_16);
    free(carre1);
    return 0;
}
