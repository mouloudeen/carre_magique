//
//  outil_carre.c
//  carre_permutation_diagonale
//
//  Created by sidali zitouni terki on 08/02/2024.
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
            return false;
        }
        else if (sum_colonne(carre,i,n) != sum_colonne(carre,i+1,n)){
            return false;
            
        }
    }
                 if (sum_diag1(carre,n) != sum_diag2(carre,n)){
            return false;
        }
                 return true;
}
