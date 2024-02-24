//
//  outil_carre.c
//  carre_siamois
//
//  Created by sidali zitouni terki on 11/12/2023.
//

#include "outil_carre.h"

/* calculer la somme de la ligne d'indice*/
int sum_ligne(int ** carre, int indice, int n){
    int somme = 0;
    for (int j =0; j< n; j++){
        somme += carre[indice][j];
    }
    return somme;
}


/* calculer la somme de la colone d'indice*/
int sum_colonne(int ** carre, int indice, int n){
    int somme = 0;
    for (int j =0; j< n; j++){
        somme += carre[j][indice];
    }
    return somme;
}


/*calculer la somme de la diagonale qui part de en haut à gauche vers en bas à droite*/
int sum_diag1(int ** carre,int n){
    int somme = 0;
    for (int i = 0; i < n; i++){
        somme += carre[i][i];
    }
    return somme;
}
/*calculer la somme de la diagonale qui part de en haut à droite vers en bas à gauche*/
int sum_diag2(int ** carre,int n){
    int somme = 0;
    for (int i = 0; i < n; i++){
        somme += carre[i][n-1-i];
    }
    return somme;
}


/* Verification si c'est bien un carre magique*/
bool carre_est_magique(int ** carre, int n){
    for (int i = 0; i <n-1; i++){
        if (sum_ligne(carre,i,n) !=  sum_ligne(carre,i+1,n)){
            printf("Ce n'est pas un carré magique d'ordre %d\n\n",n);
            return false;
        }
        else if (sum_colonne(carre,i,n) != sum_colonne(carre,i+1,n)){
            printf("Ce n'est pas un carré magique d'ordre %d\n\n",n);
            return false;
            
        }
    }
                 if (sum_diag1(carre,n) != sum_diag2(carre,n)){
                     printf("Ce n'est pas un carré magique d'ordre %d\n\n",n);
                    return false;
        }
    printf("C'est bien un carré magique d'ordre %d\n\n", n);
    return true;
}

/* Outil de calcul des carrés*/

/* Fonction pour additionner 2 carrés de même ordre*/
int ** addCarre(int ** carre1, int ** carre2, int ordre){
    int ** carre;
    
    carre = malloc(ordre * sizeof(int*));
    
    if (carre == NULL){
        fprintf (stderr, "matrix_alloc: error: memory full!\n");
        exit(EXIT_FAILURE);
    }
    for(int i = 0; i < ordre; i++){
        carre[i] = malloc( ordre * sizeof(int));
        if (carre[i] == NULL){
            fprintf (stderr, "matrix_alloc: error: memory full!\n");
            exit(EXIT_FAILURE);
        }
    }
    
    for( int i = 0; i < ordre; i++){
        for( int j = 0; j < ordre; j++){
            carre[i][j] = carre1[i][j] + carre2[i][j];
        }
    }
    return carre;
}

/* Fonction pour soustraire 2 carrés de même ordre*/
int ** souCarre(int ** carre1, int ** carre2, int ordre){
    int ** carre;
    
    carre = malloc(ordre *sizeof(int*));
    
    if (carre == NULL){
        fprintf (stderr, "matrix_alloc: error: memory full!\n");
        exit (EXIT_FAILURE);
    }
    for(int i = 0; i < ordre; i++){
        carre[i] = malloc( ordre * sizeof(int));
        if (carre[i] == NULL){
            fprintf (stderr, "matrix_alloc: error: memory full!\n");
            exit(EXIT_FAILURE);
        }
    }
    
    for( int i = 0; i < ordre; i++){
        for( int j = 0; j < ordre; j++){
            carre[i][j] = carre1[i][j] - carre2[i][j];
            
        }
    }
    return carre;
}

/* Fonction pour multiplier 2 carrés de même ordre*/
int ** mulCarre(int ** carre1, int ** carre2, int ordre){
    int ** carre;
    
    carre = malloc(ordre * sizeof(int*));
    
    if (carre == NULL){
        fprintf (stderr, "matrix_alloc: error: memory full!\n");
        exit(EXIT_FAILURE);
    }
    for(int i = 0; i < ordre; i++){
        carre[i] = malloc( ordre * sizeof(int));
        if (carre[i] == NULL){
            fprintf (stderr, "matrix_alloc: error: memory full!\n");
            exit(EXIT_FAILURE);
        }
    }
    
    for( int i = 0; i < ordre; i++){
        for( int j = 0; j < ordre; j++){
            carre[i][j] = carre1[i][j] * carre2[i][j];
        }
    }
    return carre;
}

/* multiplie chaque case de la ligne iligne du carre1 et de la colone jcol du carre2 et les additionne ensemble*/
int ligneCol(int ** carre1, int ** carre2, int iligne, int jcol, int ordre){
    int res = 0;
    
    for( int k = 0; k < ordre; k++){
        res += carre1[iligne][k] * carre2[jcol][k];
    }
    return res;
    
}

/*  multiplication comme 2 vecteurs*/
int ** mulVecCarre( int ** carre1, int ** carre2, int ordre){
    int ** carre;
    
    carre = malloc(ordre *sizeof(int*));
    
    if (carre == NULL){
        fprintf (stderr, "matrix_alloc: error: memory full!\n");
        exit(EXIT_FAILURE);
    }
    for(int i = 0; i < ordre; i++){
        carre[i] = malloc( ordre * sizeof(int));
        if (carre[i] == NULL){
            fprintf (stderr, "matrix_alloc: error: memory full!\n");
            exit(EXIT_FAILURE);
        }
    }
    
    for( int i = 0; i < ordre; i++){
        for( int j = 0; j < ordre; j++){
            carre[i][j] = ligneCol(carre1, carre2, i,j,ordre);
        }
    }
    return carre;
}
