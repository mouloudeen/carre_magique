//
//  carre_lozenge.c
//  carre_lozenge
//
//  Created by sidali zitouni terki on 31/12/2023.
//

#include "carre_lozenge.h"


/*On commence à remplir les nombres impairs en forme de losange*/
int ** remplir_impair(int ordre, int debut){
    /*genere un carre d'ordre n avec que des 0*/
    int ** carre;
    carre = malloc (ordre * sizeof(int*));
    
    if (carre == NULL){
        fprintf(stderr, "matrix_alloc: error: memory full\n");
        exit(EXIT_FAILURE);
    }
    for (int i = 0; i < ordre; i++){
        carre[i] = malloc(ordre * sizeof(int));
        if (carre[i] == NULL){
            fprintf(stderr, "matrix_alloc: error: memory full\n");
            exit(EXIT_FAILURE);
        }
    }
    for (int i =0; i < ordre; i++){
        for(int j =0; j < ordre;j++){
            carre[i][j] = 0;
        }
    }
    
    /*on commence par iniatiliser la borne inf*/
    int imin = (ordre-1)/2;
    int jmin = 0;
   /*la borne sup*/
    int imax = 0;
    int jmax = (ordre - 1)/2;
   /*initialise i ,j  et cpt à 0*/
    int i = 0;
    int j = 0;
    int cpt = 0;
   /*tant que k est inferieur ou égale ordre^2  */
    while (debut <= ordre*ordre){
        /*on change la valeur i et j en imin et jmin qui sont les coordonnées de la borne inf*/
        i = imin;
        j = jmin;
        /*tant que les coordonnes ne rejoignent les coordonnées de la borne sup:*/
        while  ((i >= imax) && (j <= jmax)){
            /*on inscrit debut au coordonnée (i,j)*/
            carre[i][j] = debut;
            
            /*on rajoute 2 pour que ca soit le nombre impairs suivant*/
            debut += 2;
            /*on utilise le sud-est (voir le carre siamois)*/
            i -= 1;
            j += 1;
        }
        /*borne inf et sup , change par rapport à chaque augmentation du compteur
         si le compteur est pair alors la borne inf va vers l'est et borne sup va vers le sud*/
        if (cpt %2 ==0){
            cpt += 1;
            jmin += 1;
            imax += 1;
        }
        
        /*si le compteur est impair alors la borne inf va vers le sud et borne sup va vers l'est*/
        else {
            cpt += 1;
            jmax += 1;
            imin += 1;
        }
    }
    return carre;
}


/*On remplit le coté droit en nombre pair qui sont les (ordre-1)^2 premiers nombres pairs*/
int ** remplir_pair_droite(int ** carre,int ordre ,int debut){
/*on commence aux coordonnées a coté a droite du milieu de la dernière ligne*/
    int i_d = ordre-1;
    int j_d = (ordre - 1)/2 + 1;
    
/*on initialise debut,arret à 0 et cptd à 1*/
    debut -= 2;
    int arret = 0;
    int cptd = 1;
    /*tant cptd est inferieur egale à (ordre-1)/2*/
    while (cptd <= (ordre-1)/2){
        /*on initialise cptvd à 1*/
        int cptvd = 1;
        /*on ajoute 2 à arret*/
        arret += 2;
        /*on avance au nombre pair suivant*/
        debut += 2;
        /*on initialise c à debut*/
        int c = debut;
        /*on initialise i,j à i_d,j_d*/
        int i = i_d;
        int j = j_d;
        /*on inscript c au coordonnée i,j*/
        carre[i][j] = c;
        /*tant que cptvd soit inferieur à l'arret*/
        while (cptvd < arret){
            /*on ajoute ordre-1 à c*/
            c += ordre - 1;
            /*on se décale vers le sud*/
            i = (i +1)%ordre;
            /* inscript la nouvelle valeur c*/
            carre[i][j] =c;
            cptvd += 1;
        }
        
        /*on se decale vers le sud est*/
        i_d = (i_d -1)%ordre;
        j_d = (j_d +1)%ordre;
        cptd += 1;
    }
    return carre;
}


/*On remplit le coté gauche en nombre pair qui sont entre (ordre-1)^2 et ordre^2-1*/
int ** remplir_pair_gauche(int ** carre ,int ordre){
/*on commence aux coordonnées a coté a gauche du milieu de la premiere ligne*/
    int i_d = 0;
    int j_d = (ordre-1)/2-1;
    
    /*on initialise k à ordre*ordre+1,arret à 0 et cptg à 1*/
    int debut = ordre*ordre+1;
    int arret = 0;
    int cptg = 1;
    
/*tant cptg est inferieur egale à (ordre-1)/2*/
    while (cptg <= (ordre-1)/2){
        
        
        /*on initialise cptvg à 1*/
        int cptvg = 1;
        /*on ajoute 2 à arret*/
        arret += 2;
        /*on recule au nombre pair precedent*/
        debut -= 2;
        /*on initialise c à debut*/
        int c = debut;
        /*on initialise i,j à i_d,j_d*/
        int i = i_d;
        int j = j_d;
        /*on inscript c au coordonnée i,j*/
        carre[i][j] =c;
        /*tant que cptvg soit inferieur à l'arret*/
        while (cptvg < arret){
            /*on enlève ordre-1 à c*/
            c -= ordre-1;
            
            /* probleme quand i = 0 pour le modulo ordre */
            if (i == 0){
                i = ordre;
            }
            /* on se décale vers le nord*/
            i = (i -1)%ordre;
            /* inscript la nouvelle valeur c*/
            carre[i][j] = c;
            cptvg += 1;
        }
        
        /*on se decale vers le sud ouest*/
        
        i_d = (i_d +1)%ordre;
        j_d = (j_d -1)%ordre;
        cptg += 1;
    }
    return carre;
}


/* carre magique en forme de lozenge*/
int ** carre_lozenge(int ordre){
/*on commence par les nombres impairs*/
    int ** carre = remplir_impair(ordre,1);
    /*puis par les (ordre-1)^2 premiers nombres pairs*/
    carre = remplir_pair_droite(carre,ordre,2);
    /*a la fin,  les nombres pairs qui sont entre (ordre-1)^2 et ordre^2-1 inclus*/
    return remplir_pair_gauche(carre,ordre);
}


