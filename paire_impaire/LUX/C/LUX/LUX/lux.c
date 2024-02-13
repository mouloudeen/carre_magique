//
//  lux.c
//  LUX
//
//  Created by sidali zitouni terki on 12/02/2024.
//

#include "lux.h"

/* On crée un tableau de lettres L, U et X*/
char ** remplir_LUX(int ordre){
    /* comme on sait n = 2*(2m+1)*/
    int m = (ordre-2)/4;
    
    /*crée un tableau vide de dimension 2m+1 sur 2m+1*/
    char ** lettre;
    lettre = malloc((2*m+1) * sizeof(char*));
    
    if (lettre == NULL){
        fprintf(stderr, "matrix_alloc: error: memory full\n");
        exit(EXIT_FAILURE);
    }
    
    for (int i =0; i < 2*m+1; i++){
        lettre[i] = malloc((2*m+1) * sizeof(char));
        if (lettre[i] == NULL){
            fprintf(stderr, "matrix_alloc: error: memory full\n");
            exit(EXIT_FAILURE);
        }
    }
    
    
    for (int i = 0; i < 2*m+1; i++){
        for (int j = 0; j < 2*m+1; j++){
            lettre[i][j] =' ';
        }
    }
    
    /* on ecrit sur les m+1 premières lignes que L sur chaque case*/
    
    for (int i = 0; i < m+1; i++){
        for ( int j = 0; j < 2*m+1; j++){
            
            if(( i == m) & (j ==m)){
                lettre[i][j] = 'U';
            }
            
            else{
                lettre[i][j] = 'L';
            }
        }
    }
    
    /* on rajoute une ligne de U*/
    int i = m+1;
    for ( int j = 0; j < 2*m+1; j++){
        
        if(j == m){
            lettre[i][j] = 'L';
        }
        
        else{
            lettre[i][j] = 'U';
        }
    }
    
    for (int i = m+2; i < 2*m+1; i++){
        for ( int j = 0; j < 2*m+1; j++){
            
            lettre[i][j] = 'X';
            
        }
    }
    
    return lettre;
}
    
/*On transforme de la facon du L sur un petit carre de coté 2*/
void trL(int ** carre,int i0,int j0,int k,int m){
    int i = 2*i0;
    int j = 2*j0+1;
    carre[i][j] = k;
    i += 1;
    j -= 1;
    k += m;
    carre[i][j]=k;
    j += 1;
    k += m;
    carre[i][j]=k;
    i -= 1;
    j -= 1;
    k += m;
    carre[i][j]=k;
}

/*On transforme de la facon du U sur un petit carre de coté 2*/
void trU(int ** carre,int i0,int j0,int k,int m){
    int i = 2*i0;
    int j = 2*j0;
    carre[i][j]=k;
    i += 1;
    k += m;
    carre[i][j]=k;
    j += 1;
    k += m;
    carre[i][j]=k;
    i -= 1;
    k += m;
    carre[i][j]=k;
}


/*On transforme de la facon du X sur un petit carre de coté 2*/
void trX(int ** carre,int i0,int j0,int k,int m){
    int i = 2*i0;
    int j = 2*j0;
    carre[i][j]=k;
    i += 1;
    j += 1;
    k += m;
    carre[i][j]=k;
    j -= 1;
    k += m;
    carre[i][j]=k;
    i -= 1;
    j += 1;
    k += m;
    carre[i][j]=k;
}


/*on traduit le tableau lettres L, U et X pour chaque transformation*/
int ** traduLUX(char ** lettre,int ordre,int debut,int pas){
    
    int ** carre;
        carre = malloc (ordre * sizeof(int*));
        
        if (carre == NULL){
                fprintf(stderr, "matrix_alloc: error: memory full\n");
                exit(EXIT_FAILURE);
            }
        for (int i =0; i < ordre; i++){
            carre[i] = malloc (ordre * sizeof(int));
            
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
    int m =  (ordre-2)/4;
    int i = 0;
    int j = m;
    int cpt = 0;
    int k = debut;
    
/*tant qu'on n'a pas vidé le tableau des lettres*/
    while (cpt < ((2*m+1)*(2*m+1))){
        
       
        /*on voit pour chaque lettre qu'elle est la transformation donnée
         dans le carre
         on rajoute 4 à k pour chaque transformation
         on vide le tableau à ses coordonnées
         on se deplace en montant d'une diagonale en haut*/
        switch(lettre[i][j]){
            case 'L' :
                trL(carre,i,j,k,m);
                lettre[i][j] = ' ';
                if (i == 0){
                    i = 2*m+1;
                }
                i = (i-1)%(2*m+1);
                j = (j+1)%(2*m+1);
                k += 4*m;
                cpt += 1;
                break;
            
            case 'U':
                trU(carre,i,j,k,m);
                lettre[i][j] = ' ';
                if (i == 0){
                    i = 2*m+1;
                }
                i = (i-1)%(2*m+1);
                j = (j+1)%(2*m+1);
                k += 4*m;
                cpt += 1;
                break;
            
            case 'X' :
                trX(carre,i,j,k,m);
                lettre[i][j] = ' ';
                if (i == 0){
                    i = 2*m+1;
                }
                i = (i-1)%(2*m+1);
                j = (j+1)%(2*m+1);
                k += 4*m;
                cpt += 1;
                break;
/* si on lit un espace on se deplace 2 cases en descendant et deplace d'une case à gauche*/
            case ' ':
                if (j == 0){
                    j = 2*m+1;
                }
                i = (i+2)%(2*m+1);
                j = (j-1)%(2*m+1);
                break;
        }
        
    }
    return carre;
}

int ** LUX(int ordre, int debut, int pas){
/*creation du tableau de lettres L, U et X*/
    char ** lettre = remplir_LUX(ordre);
/*on traduit chaque lettre pour avoir notre carre magique comme  le debut
et les pas*/
    int ** carre = traduLUX(lettre,ordre,debut,pas);
    return carre;
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

/* Desalloué la mémoire du carre */
void Free_carre(int ** carre,int n){
    if (carre != NULL){
        for (int i = 0; i<n; i++){
            free(carre[i]);
        }
        free(carre);
    }
}
