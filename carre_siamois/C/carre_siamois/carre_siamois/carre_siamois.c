//
//  carre_siamois.c
//  carre_siamois
//
//  Created by sidali zitouni terki on 05/12/2023.
//

#include "carre_siamois.h"

/*Les 8 modèles possibles de la construction de façon siamois*/

/*Siamois Nord Est avec comme départ le milieu de la première ligne*/
int ** carre_siamois_ne_pl(int n, int k){
    
    /* Creation d'un carré rempli de 0*/
    int** carre;
    
    carre = malloc (n * sizeof(int*));
    
    if (carre == NULL)
      {
        fprintf (stderr, "matrix_alloc: error: memory full!\n");
        exit (EXIT_FAILURE);
      }
    
    for (int i = 0; i < n; i++){
        carre[i] = malloc (n * sizeof(int));
        
        if (carre[i] == NULL)
      {
        fprintf (stderr, "matrix_alloc: error: memory full!\n");
        exit (EXIT_FAILURE);
      }
    }
    
    
    for (int i = 0; i < n; i++){
        for (int j =0; j < n; j++){
            carre[i][j] = 0;
        }
    }
    
    /* On initialise l qui est le nombre de chiffres rajoutés au carré*/
    int l = 1;
    /*On initialise i qui sera le numero de ligne à 0*/
    uint i = 1;
    i -= 1;
    /*On initialise j qui sera le numero de colonne qui sera le milieu de la ligne*/
    uint j =  (n-1)/2;
    /* valeur de départ que donnera la personne qui utilise la fonction*/
    
    carre[i][j] = k;
    
    /*Tant que le carré n'est pas rempli on continue*/
    
   
    
    while ( l != n*n){
        /* On verifie si le case Nord-Est de la precedente case
        est rempli*/
        /* au cas i = 0, on ne peut utiliser le modulo n*/
        if (i==0){
            i = n;
        }
        if (carre[(i - 1)%n][(j + 1)%n] != 0){
            /* alors on descend d'une case*/
            i = (i + 1)%n;
            
            /* on augmente la valeur precedente*/
            k += 1;
            carre[i][j] = k;
            /*On rajoute + 1 aux nombres de chiffres rajoutés*/
            l += 1;
            
        }
        else{
            /* Comme la case Nord-Est de la precedente case n'est pas rempli*/
            i = (i - 1)%n;
            j = (j + 1)%n;
            /* on augmente la valeur precedente*/
           
            k += 1;
            /*On rempli cette case Nord-Est  avec la valeur augmente*/
            carre[i][j] = k;
            /*On rajoute + 1 aux nombres de chiffres rajoutés*/
            l += 1;
            
        }
    }
    return carre;
}
