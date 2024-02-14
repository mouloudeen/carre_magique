#include "lux.h"

lux::lux(int ordre) : m_ordre(ordre) {

    m_carre = new int*[m_ordre];
    for( int i = 0; i < m_ordre; i++){
        m_carre[i] = new int[m_ordre];
    }

    for(int i = 0; i < m_ordre; i++){
        for(int j = 0; j < m_ordre; j++){
            m_carre[i][j] = 0;
        }
    }
}

/* On crée un tableau de lettres L, U et X*/
char ** lux::remplir_LUX(){
    /* comme on sait n = 2*(2m+1)*/
    int m = (m_ordre-2)/4;

    /*crée un tableau vide de dimension 2m+1 sur 2m+1*/
    char ** lettre;
    lettre = new char*[2*m+1];



    for (int i =0; i < 2*m+1; i++){
        lettre[i] = new char[2*m+1];;

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
void lux::trL(int ** carre,int i0,int j0,int k,int m){
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
void lux::trU(int ** carre,int i0,int j0,int k,int m){
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
void lux::trX(int ** carre,int i0,int j0,int k,int m){
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
void lux::traduLUX(char ** lettre,int debut,int pas){

    int m =  (m_ordre-2)/4;
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
             trL(m_carre,i,j,k,pas);
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
             trU(m_carre,i,j,k,pas);
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
             trX(m_carre,i,j,k,pas);
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
     for (int i = 0; i < 2*m+1; i++){
         delete [] lettre[i];
     }
     delete [] lettre;


}


void lux::LUX(int debut, int pas){
    /*creation du tableau de lettres L, U et X*/
    char ** lettre = remplir_LUX();
    /*on traduit chaque lettre pour avoir notre carre magique comme  le debut
et les pas*/
     traduLUX(lettre,debut,pas);

 }

/* getter*/
/* recupere le carre*/
int ** lux::getCarre(){
    return m_carre;
}

/* recupere l'ordre*/
int lux::getOrdre(){
    return m_ordre;
}


/* Affichage du carré magique*/
void lux::AffichageCarre(){
    for (int i = 0; i< m_ordre; i++){
        for(int j = 0; j < m_ordre; j++){
            cout <<" ---";
        }
        cout << "\n";
        cout <<"| ";
        for(int j = 0; j < m_ordre; j++){
            cout   <<m_carre[i][j] <<" | ";
        }

        cout <<"\n";


    }
    for(int j =0; j < m_ordre; j++){
        cout <<" ---";
    }
    cout<< "\n";
}

/* Destructeur*/
lux::~lux(){
    for (int i = 0; i < m_ordre; i++){
        delete [] m_carre[i];
    }
    delete [] m_carre;
}

