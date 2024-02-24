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
#include <stdlib.h>

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


/* Fonction pour additionner 2 carrés de même ordre*/
int ** addCarre(int ** , int ** , int );

/* Fonction pour soustraire 2 carrés de même ordre*/
int ** souCarre(int ** , int ** , int);

/* Fonction pour multiplier 2 carrés de même ordre*/
int ** mulCarre(int ** , int ** , int);

/* multiplie chaque case de la ligne iligne du carre1 et de la colone jcol du carre2 et les additionne ensemble*/
int ligneCol(int ** , int ** , int , int , int );

/*  multiplication comme 2 vecteurs*/
int ** mulVecCarre( int ** , int ** , int);

#endif /* outil_carre_h */

