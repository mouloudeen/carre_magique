//
//  carre_lozenge.h
//  carre_lozenge
//
//  Created by sidali zitouni terki on 31/12/2023.
//

#ifndef carre_lozenge_h
#define carre_lozenge_h

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*On commence à remplir les nombres impairs en forme de losange*/
int ** remplir_impair(int , int);

/*On remplit le coté droit en nombre pair qui sont les (ordre-1)^2 premiers nombres pairs*/
int ** remplir_pair_droite(int **, int , int);

/*On remplit le coté gauche en nombre pair qui sont entre (ordre-1)^2 et ordre^2-1*/
int ** remplir_pair_gauche(int ** , int);

/* carre magique en forme de lozenge*/
int ** carre_lozenge(int);

#endif /* carre_lozenge_h */
