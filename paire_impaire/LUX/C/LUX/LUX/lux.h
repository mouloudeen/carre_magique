//
//  lux.h
//  LUX
//
//  Created by sidali zitouni terki on 12/02/2024.
//

#ifndef lux_h
#define lux_h

#include <stdio.h>
#include <stdlib.h>

/* On crée un tableau de lettres L, U et X*/
char ** remplir_LUX(int);

/*On transforme de la facon du L sur un petit carre de coté 2*/
void trL(int **, int, int, int, int);

/*On transforme de la facon du U sur un petit carre de coté 2*/
void trU(int **, int, int, int, int);

/*On transforme de la facon du X sur un petit carre de coté 2*/
void trX(int **, int, int, int, int);

/*on traduit le tableau lettres L, U et X pour chaque transformation*/
int ** traduLUX(char **, int, int, int);

int ** LUX(int, int, int);

/* Affichage du carré magique*/
void AffichageCarre(int **, int);

/* Desalloué la mémoire du carre */
void Free_carre(int **,int);

#endif /* lux_h */
