//
//  outil_carre.h
//  carre_siamois
//
//  Created by sidali zitouni terki on 11/12/2023.
//

#ifndef outil_carre_h
#define outil_carre_h

#include <stdio.h>
#include <stdbool.h>

/* calculer la somme de la ligne indice*/
int sum_ligne(int **, int, int);

/* calculer la somme de la colone d'indice*/
int sum_colonne(int **, int, int);

/*calculer la somme de la diagonale qui part de en haut à gauche vers en bas à droite*/
int sum_diag1(int **,int);

/*calculer la somme de la diagonale qui part de en haut à droite vers en bas à gauche*/
int sum_diag2(int **,int);

/* Verification si c'est bien un carre magique*/
bool carre_est_magique(int **, int);

#endif /* outil_carre_h */

