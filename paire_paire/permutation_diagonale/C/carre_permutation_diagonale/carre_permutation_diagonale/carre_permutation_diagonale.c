//
//  carre_permutation_diagonale.c
//  carre_permutation_diagonale
//
//  Created by sidali zitouni terki on 08/02/2024.
//

#include "carre_permutation_diagonale.h"

/*On remplit partant du coordonnée (i,j) avec comme déplacement (idep,jdep)*/
int ** initialisation(int ** carre, int i, int j, int idep, int jdep,int pas, int debut, int ordre){
    int cpt = 1;
    /*on remplit la 1er valeur de coordonnée (i,j)*/
    carre[i][j]= (i*ordre + j+debut)*pas;
    /*puis on continue en se deplaçant (ordre-1) fois*/
    while (cpt < ordre) {
        
        if (i == 0){
            i = ordre;
        }
        if (j == 0){
            j = ordre;
        }
        i = (i +idep)%ordre;
        j = (j+jdep)%ordre;
        carre[i][j]= (i*ordre + j+debut)*pas;
        
        cpt += 1;
    }
    return carre;
}


int ** permu_diag(int ordre, int pas, int debut){
    /* genere un carre d'ordre n avec les indices inversé et en ajoutant 1*/
    
    int ** carre;
    carre = malloc (ordre * sizeof(int*));
    
    if (carre == NULL){
            fprintf(stderr, "matrix_alloc: error: memory full\n");
            exit(EXIT_FAILURE);
        }
    for (int i =0; i < ordre; i++){
        carre[i] = malloc (ordre * sizeof(int));
        
        if (carre[i] == NULL){
                    fprintf(stderr, "matrix_alloc: error: memory full\n");
                    exit(EXIT_FAILURE);
                }
    }
    for (int i =0; i < ordre; i++){
            for(int j =0; j < ordre;j++){
                carre[i][j] = pas*((ordre*ordre +1) - (i* ordre + j + 1)+ debut-1);
            }
        }
    /*cpt est égale au quotient de ordre/4 (on sait que l'ordre est divisible par 4)*/
    int cpt = ordre/4;
    
    /*on initialise les 2 coordonnées (i0,j0) et (i0,j1)*/
    int i0 = 0;
    int j0 = 0;
    int j1 = ordre-1;
    
    /*on le fait autant que la valeur cpt*/
    for(int i =0; i < cpt; i++){
        carre = initialisation(carre, i0, j0, 1, 1,pas,debut, ordre);
        carre = initialisation(carre,i0,j1, 1, -1,pas,debut,ordre);
        i0 += 4;
    }
    return carre;
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
