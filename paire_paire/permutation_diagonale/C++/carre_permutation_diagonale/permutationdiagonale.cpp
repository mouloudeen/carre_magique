#include "permutationdiagonale.h"


/* Constructeur*/
permutationDiagonale::permutationDiagonale(int ordre): m_ordre(ordre) {
    m_carre = new int* [m_ordre];

    for (int i = 0; i < m_ordre; i++){
        m_carre[i] = new int [m_ordre];
    }

    for (int i =0; i < m_ordre; i++){
        for(int j =0; j < m_ordre;j++){
            m_carre[i][j] = (m_ordre*m_ordre +1) - (i* m_ordre + j + 1);
        }
    }

}

/*On remplit partant du coordonnée (i,j) avec comme déplacement (idep,jdep)*/
void permutationDiagonale::initialisation(int i, int j, int idep, int jdep){
    int cpt = 1;

    /*on remplit la 1er valeur de coordonnée (i,j)*/
    m_carre[i][j]= i*m_ordre + j+1;
    /*puis on continue en se deplaçant (m_ordre-1) fois*/
    while (cpt < m_ordre) {

        if (i == 0){
            i = m_ordre;
        }
        if (j == 0){
            j = m_ordre;
        }
        i = (i +idep)%m_ordre;
        j = (j+jdep)%m_ordre;
        m_carre[i][j]= i*m_ordre + j+1;

        cpt += 1;
    }

}


/* carre magique de la façon des diagonales*/
void permutationDiagonale::permu_diag(){
    /*cpt est égale au quotient de ordre/4 (on sait que l'ordre est divisible par 4)*/
    int cpt = m_ordre/4;

    /*on initialise les 2 coordonnées (i0,j0) et (i0,j1)*/
    int i0 = 0;
    int j0 = 0;
    int j1 = m_ordre-1;

    /*on le fait autant que la valeur cpt*/
    for(int i =0; i < cpt; i++){
        initialisation(i0, j0, 1, 1);
        initialisation(i0,j1, 1, -1);
        i0 += 4;
    }
}


/* getter*/
/* recupere le carre*/
int ** permutationDiagonale::getCarre(){
    return m_carre;
}

/* recupere l'ordre*/
int permutationDiagonale::getOrdre(){
    return m_ordre;
}


/* Affichage du carré magique*/
void permutationDiagonale::AffichageCarre(){
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
permutationDiagonale::~permutationDiagonale(){
    for (int i = 0; i < m_ordre; i++){
        delete [] m_carre[i];
    }
    delete [] m_carre;
}




