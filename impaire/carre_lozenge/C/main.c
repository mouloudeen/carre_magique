//
//  main.c
//  carre_lozenge
//
//  Created by sidali zitouni terki on 31/12/2023.
//


#include "carre_lozenge.h"
#include "outil_carre.h"


int main(int argc, const char * argv[]) {
    
    int ordre = 5;
    
    int ** carre_5 = carre_lozenge(ordre);
    
    /* On teste les premiers nombres impairs */
    printf("carre d'ordre %d \n",ordre);
    AffichageCarre(carre_5,ordre);
    
    printf("carre d'ordre %d est magique: %d \n",ordre,carre_est_magique(carre_5, ordre));
    
  
    ordre = 7;
    
    int ** carre_7 = carre_lozenge(ordre);
    
    printf("carre d'ordre %d \n",ordre);
    AffichageCarre(carre_7,ordre);
    
    printf("carre d'ordre %d est magique: %d \n",ordre,carre_est_magique(carre_7, ordre));
    
    ordre = 9;
    
    int ** carre_9 = carre_lozenge(ordre);
    
    printf("carre d'ordre %d \n",ordre);
    AffichageCarre(carre_9,ordre);
    
    printf("carre d'ordre %d est magique: %d \n",ordre,carre_est_magique(carre_9, ordre));
    
    ordre = 11;
    
    int ** carre_11 = carre_lozenge(ordre);
    
    printf("carre d'ordre %d \n",ordre);
    AffichageCarre(carre_11,ordre);
    
    printf("carre d'ordre %d est magique: %d \n",ordre,carre_est_magique(carre_11, ordre));
    
    printf("carre d'ordre %d est magique: %d \n",ordre,carre_est_magique(carre_11, ordre));
    
    ordre = 13;
    
    int ** carre_13 = carre_lozenge(ordre);
    
    printf("carre d'ordre %d \n",ordre);
    AffichageCarre(carre_13,ordre);
    
    printf("carre d'ordre %d est magique: %d \n",ordre,carre_est_magique(carre_13, ordre));
    
/*on teste avec des grands ordres impairs pris au random*/
    
    ordre = 5301;
    int ** carre1 = carre_lozenge(ordre);
    printf("carre d'ordre %d est magique: %d \n",ordre,carre_est_magique(carre1, ordre));
    
    ordre = 7339;
    carre1 = carre_lozenge(ordre);
    printf("carre d'ordre %d est magique: %d \n",ordre,carre_est_magique(carre1, ordre));
    
    ordre = 9591;
    carre1 = carre_lozenge(ordre);
    printf("carre d'ordre %d est magique: %d \n",ordre,carre_est_magique(carre1, ordre));
    
    ordre = 3687;
    carre1 = carre_lozenge(ordre);
    printf("carre d'ordre %d est magique: %d \n",ordre,carre_est_magique(carre1, ordre));
    
    ordre = 7243;
    carre1 = carre_lozenge(ordre);
    printf("carre d'ordre %d est magique: %d \n",ordre,carre_est_magique(carre1, ordre));
    
    Free_carre(carre_5,5);
    Free_carre(carre_7,7);
    Free_carre(carre_9,9);
    Free_carre(carre_11,11);
    Free_carre(carre_13,13);
    Free_carre(carre1,7243);
    return 0;
}
