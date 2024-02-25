//
//  carre_siamois.h
//  carre_siamois
//
//  Created by sidali zitouni terki on 05/12/2023.
//

#ifndef carre_siamois_h
#define carre_siamois_h

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef unsigned int uint;

/* pour remmettre le buffer à zero */
void flush_buffer(void);

/* Remplir le carré magique */
int ** remplir_carre(int, int, int,  int, int, int, int, int, int);

/* Siamois Nord Est avec comme départ le milieu de la première ligne */
int ** carre_siamois_ne_pl(int,int, int);

/*Siamois Nord Est avec comme départ le milieu de la dernière colonne*/
int ** carre_siamois_ne_dc(int,int, int);

/*Siamois Sud Est comme départ le milieu de la dernière ligne*/
int ** carre_siamois_se_dl(int,int, int);

/*Siamois Sud Est comme départ le milieu de la dernière colonne*/
int ** carre_siamois_se_dc(int,int, int);

/*Siamois Nord Ouest avec comme départ le milieu de la première ligne*/
int ** carre_siamois_no_pl(int,int, int);

/*Siamois Nord Ouest avec comme départ le milieu de la première colonne*/
int ** carre_siamois_no_pc(int,int, int);

/*Siamois Sud Ouest comme départ le milieu de la dernière ligne*/
int ** carre_siamois_so_dl(int,int, int);

/*Siamois Sud Ouest comme départ le milieu de la première colonne*/
int ** carre_siamois_so_pc(int,int, int);

/*Fonction qui trouve le chiffre de début en connaissant l'ordre et la constante magique*/
int debut_carre(int,int);


/*Fonction qui construit un carre d'un des 8 modele qu'avec la constante magique et l'ordre du carré*/
int ** carre_siamois(char[21],int,int);

#endif /* carre_siamois_h */
