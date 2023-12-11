//
//  carre_siamois.c
//  carre_siamois
//
//  Created by sidali zitouni terki on 05/12/2023.
//

#include "carre_siamois.h"

/*Les 8 modèles possibles de la construction de façon siamois*/

/* Remplir le carré magique */
int ** remplir_carre(int n, int k, int debut_i, int debut_j, int dep_i, int dep_j, int depls_i, int depls_j){
    
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
    /*On initialise i qui sera le numero de ligne à debut_i*/
    uint i = debut_i;
    
    /*On initialise j qui sera le numero de colonne à debut_j*/
    uint j =  debut_j;
    /* valeur de départ que donnera la personne qui utilise la fonction*/
    
    carre[i][j] = k;
    
    /*Tant que le carré n'est pas rempli on continue*/
    while ( l != n*n){
        
        /* au cas i = 0, on ne peut utiliser le modulo n*/
        if (i==0){
            i = n;
        }
        
        /* au cas j = 0, on ne peut utiliser le modulo n*/
        if (j==0){
            j = n;
        }
        /* On verifie si le case ((i +dep_i) % n,(j +dep_j) % n) n est pas rempli*/
        if (carre[(i + dep_i)%n][(j + dep_j)%n] != 0){
            /* alors on rempli la case ((i + depls_i) % n, (j+ depls_j)%n)*/
            i = (i + depls_i)%n;
            j = (j + depls_j)%n;
            /* on augmente la valeur precedente*/
            k += 1;
            carre[i][j] = k;
            /*On rajoute + 1 aux nombres de chiffres rajoutés*/
            l += 1;
            
        }
        else{
            /* on rempli la case (i +dep_i) % n,(j +dep_j) % n)*/
            i = (i + dep_i)%n;
            j = (j + dep_j)%n;
            
            /* on augmente la valeur precedente*/
            k += 1;
            /*On rempli cette case avec la valeur augmente*/
            carre[i][j] = k;
            /*On rajoute + 1 aux nombres de chiffres rajoutés*/
            l += 1;
            
        }
    }
    return carre;
    
}

/*Siamois Nord Est avec comme départ le milieu de la première ligne*/
int ** carre_siamois_ne_pl(int n, int k){
    
    return remplir_carre(n,k,0,(n-1)/2,-1,1,1,0);
}

/*Siamois Nord Est avec comme départ le milieu de la dernière colonne*/
int ** carre_siamois_ne_dc(int n, int k){
    
    return remplir_carre(n,k,(n-1)/2,n - 1,-1,1,0,-1);
}

/*Siamois Sud Est comme départ le milieu de la dernière ligne*/
int ** carre_siamois_se_dl(int n, int k){
    return remplir_carre(n,k,n-1,(n-1)/2,1,1,-1,0);
}
    
/*Siamois Sud Est comme départ le milieu de la dernière colonne*/
int ** carre_siamois_se_dc(int n, int k){
    return remplir_carre(n,k,(n-1)/2,n - 1,1,1,0,-1);
    }

/*Siamois Nord Ouest avec comme départ le milieu de la première ligne*/
int ** carre_siamois_no_pl(int n, int k){
    return remplir_carre(n,k,0,(n-1)/2,-1,-1,1,0);
        }


/*Siamois Nord Ouest avec comme départ le milieu de la première colonne*/
int ** carre_siamois_no_pc(int n, int k){
    return remplir_carre(n,k,(n-1)/2,0,-1,-1,0,1);
            }

    
/*Siamois Sud Ouest comme départ le milieu de la dernière ligne*/
int ** carre_siamois_so_dl(int n, int k){
    return remplir_carre(n,k,n-1,(n-1)/2,1,-1,-1,0);
                }
    

/*Siamois Sud Ouest comme départ le milieu de la première colonne*/
int ** carre_siamois_so_pc(int n, int k){
    return remplir_carre(n,k,(n-1)/2,0,1,-1,0,1);
                    }

/*Fonction qui trouve le chiffre de début en connaissant l'ordre et la constante magique*/
int debut_carre(int n,int c){
    return (2*c +n*(-n*n+1))/(2*n);
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
