//
//  main.c
//  LUX
//
//  Created by sidali zitouni terki on 12/02/2024.
//

#include "lux.h"
#include "outil_carre.h"

int main(int argc, const char * argv[]) {
    // insert code here...
    
    /* On teste les premiers nombres divisible par 2 mais pas par 4*/
        int ordre = 6;
        int ** carre_6;
        carre_6 = LUX(ordre,1,1);
        AffichageCarre(carre_6, ordre);
        printf("carre d'ordre %d est magique: %d \n",ordre, carre_est_magique(carre_6, ordre));
        
        ordre = 10;
        int ** carre_10;
        carre_10 = LUX(ordre,1,1);
        AffichageCarre(carre_10, ordre);
        printf("carre d'ordre %d est magique: %d \n",ordre, carre_est_magique(carre_10, ordre));
        
        ordre = 14;
        int ** carre_14;
        carre_14 = LUX(ordre,1,1);
        AffichageCarre(carre_14, ordre);
        printf("carre d'ordre %d est magique: %d \n",ordre, carre_est_magique(carre_14, ordre));
        
        ordre = 18;
        int ** carre_18;
        carre_18 = LUX(ordre,1,1);
        AffichageCarre(carre_18, ordre);
        printf("carre d'ordre %d est magique: %d \n",ordre, carre_est_magique(carre_18, ordre));
    
    
    /* on teste avec des grands ordres impairs pris au random*/
        
        ordre = 7630;
        int ** carre1;
        carre1 = LUX(ordre,1,1);
        printf("carre d'ordre %d est magique: %d \n",ordre, carre_est_magique(carre1, ordre));
        
        ordre = 3986;
        carre1 = LUX(ordre,1,1);
        printf("carre d'ordre %d est magique: %d \n",ordre, carre_est_magique(carre1, ordre));
        
        ordre = 4770;
        carre1 = LUX(ordre,1,1);
        printf("carre d'ordre %d est magique: %d \n",ordre, carre_est_magique(carre1, ordre));
        
        ordre = 5498;
        carre1 = LUX(ordre,1,1);
        printf("carre d'ordre %d est magique: %d \n",ordre, carre_est_magique(carre1, ordre));
        
        ordre = 9746;
        carre1 = LUX(ordre,1,1);
        printf("carre d'ordre %d est magique: %d \n",ordre, carre_est_magique(carre1, ordre));
        
        free(carre_6);
        free(carre_10);
        free(carre_14);
        free(carre_18);
        free(carre1);
    
    return 0;
}
