//
//  main.c
//  carre_siamois
//
//  Created by sidali zitouni terki on 05/12/2023.
//

#include <stdio.h>

#include "carre_siamois.h"
#include "outil_carre.h"

int main(int argc, const char * argv[]) {
    // insert code here...
    
     /* teste les 8 formes carre siamois*/
     /* int n = 3;
    int k = 1;
    int ** carre_ne_pl;
    carre_ne_pl = carre_siamois_ne_pl(n, k);
    AffichageCarre(carre_ne_pl,n);
    int ** carre_ne_dc;
    carre_ne_dc = carre_siamois_ne_dc(n, k);
    AffichageCarre(carre_ne_dc,n);
    int ** carre_se_dl;
    carre_se_dl = carre_siamois_se_dl(n, k);
    AffichageCarre(carre_se_dl,n);
    int ** carre_se_dc;
    carre_se_dc = carre_siamois_se_dc(n, k);
    AffichageCarre(carre_se_dc,n);
    int ** carre_no_pl;
    carre_no_pl = carre_siamois_no_pl(n, k);
    AffichageCarre(carre_no_pl,n);
    int ** carre_no_pc;
    carre_no_pc = carre_siamois_no_pc(n, k);
    AffichageCarre(carre_no_pc,n);
    int ** carre_so_dl;
    carre_so_dl = carre_siamois_so_dl(n, k);
    AffichageCarre(carre_so_dl,n);
    int ** carre_so_pc;
    carre_so_pc = carre_siamois_so_pc(n, k);
    AffichageCarre(carre_ne_pl,n);*/
    
    /* teste avec les outils*/
    /* teste les 8 formes carre siamois*/
    /*int n = 541;
   int k = 1;
   int ** carre_ne_pl;
   carre_ne_pl = carre_siamois_ne_pl(n, k);
    printf("carre_ne_pl est magique : %i \n",carre_est_magique(carre_ne_pl, n));
   int ** carre_ne_dc;
   carre_ne_dc = carre_siamois_ne_dc(n, k);
    printf("carre_ne_dc est magique : %i \n",carre_est_magique(carre_ne_dc, n));
   int ** carre_se_dl;
   carre_se_dl = carre_siamois_se_dl(n, k);
    printf("carre_se_dl est magique : %i \n",carre_est_magique(carre_se_dl, n));
   int ** carre_se_dc;
   carre_se_dc = carre_siamois_se_dc(n, k);
    printf("carre_se_dc est magique : %i \n",carre_est_magique(carre_se_dc, n));
   int ** carre_no_pl;
   carre_no_pl = carre_siamois_no_pl(n, k);
    printf("carre_no_pl est magique : %i \n",carre_est_magique(carre_no_pl, n));
   int ** carre_no_pc;
   carre_no_pc = carre_siamois_no_pc(n, k);
    printf("carre_no_pc est magique : %i \n",carre_est_magique(carre_no_pc, n));
   int ** carre_so_dl;
   carre_so_dl = carre_siamois_so_dl(n, k);
    printf("carre_so_dl est magique : %i \n",carre_est_magique(carre_so_dl, n));
   int ** carre_so_pc;
   carre_so_pc = carre_siamois_so_pc(n, k);
    printf("carre_so_pc est magique : %i \n",carre_est_magique(carre_so_pc, n));
    */
    /*int n = 3;
    int k = 1;
    
    int ** carre_no_pl;
    carre_no_pl = carre_siamois_no_pl(n, k);
    AffichageCarre(carre_no_pl,n);
    int ** carre_no_pc;
    carre_no_pc = carre_siamois_no_pc(n, k);
    AffichageCarre(carre_no_pc,n);
    int ** carre_so_dl;
    carre_so_dl = carre_siamois_so_dl(n, k);
    AffichageCarre(carre_so_dl,n);
    int ** carre_so_pc;
    carre_so_pc = carre_siamois_so_pc(n, k);
    AffichageCarre(carre_so_pc,n);*/
    
    /*int c = 243;
    int n = 3;
    int k = debut_carre(n, c);
    printf("k = %d\n",k);
    
    int ** carre_no_pl;
    carre_no_pl = carre_siamois_no_pl(n, k);
    printf("somme de la ligne d'indice 2 : %d\n", sum_colonne(carre_no_pl, 2, n));*/
    
    
    int n = 5057;
    int k = 2465;
   
    int ** carre_ne_pl;
    carre_ne_pl = carre_siamois_ne_pl(n, k);
    
    
    int ** carre_ne_dc;
    carre_ne_dc = carre_siamois_ne_dc(n, k);
    
    
    int ** carre_se_dl;
    carre_se_dl = carre_siamois_se_dl(n, k);
    
    
    int ** carre_se_dc;
    carre_se_dc = carre_siamois_se_dc(n, k);
    
    
    int ** carre_no_pl;
    carre_no_pl = carre_siamois_no_pl(n, k);
    
    
    int ** carre_no_pc;
    carre_no_pc = carre_siamois_no_pc(n, k);
    
    
    int ** carre_so_dl;
    carre_so_dl = carre_siamois_so_dl(n, k);
    
    
    int ** carre_so_pc;
    carre_so_pc = carre_siamois_so_pc(n, k);
    
    printf("carre_siamois_ne_pl est magique %d\n",carre_est_magique(carre_ne_pl,n));
    
    printf("carre_siamois_ne_dc est magique %d\n",carre_est_magique(carre_ne_dc,n));
    
    printf("carre_siamois_se_dl est magique %d\n",carre_est_magique(carre_se_dl,n));
    
    printf("carre_siamois_se_dc est magique %d\n",carre_est_magique(carre_se_dc,n));
    
    printf("carre_siamois_no_pl est magique %d\n",carre_est_magique(carre_no_pl,n));
    
    printf("carre_siamois_no_pc est magique %d\n",carre_est_magique(carre_no_pc,n));
    
    printf("carre_siamois_so_dl est magique %d\n",carre_est_magique(carre_so_dl,n));
    
    printf("carre_siamois_so_pc est magique %d\n",carre_est_magique(carre_so_pc,n));
    
    Free_carre(carre_ne_pl,n);
    Free_carre(carre_ne_dc,n);
    Free_carre(carre_se_dl,n);
    Free_carre(carre_se_dc,n);
    Free_carre(carre_no_pl,n);
    Free_carre(carre_no_pc,n);
    Free_carre(carre_so_dl,n);
    Free_carre(carre_so_pc,n);
    
    
    
    return 0;
}
