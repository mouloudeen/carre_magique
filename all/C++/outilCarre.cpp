#include "outilCarre.hpp"

/* Constructeur*/
OutilCarre::OutilCarre(int ordre, int ** carre):m_ordre(ordre), m_carre(carre){}

/* calculer la somme de la ligne d'indice*/
int OutilCarre::sum_ligne(int indice){
    int somme = 0;
    for (int j =0; j< m_ordre; j++){
        somme += m_carre[indice][j];
    }
    return somme;
}

/* calculer la somme de la colone d'indice*/
int OutilCarre::sum_colonne(int indice){
    int somme = 0;
    for (int j =0; j< m_ordre; j++){
        somme += m_carre[j][indice];
    }
    return somme;
}


/*calculer la somme de la diagonale qui part de en haut à gauche vers en bas à droite*/
int OutilCarre::sum_diag1(){
    int somme = 0;
    for (int i = 0; i < m_ordre; i++){
        somme += m_carre[i][i];
    }
    return somme;
}


/*calculer la somme de la diagonale qui part de en haut à droite vers en bas à gauche*/
int OutilCarre::sum_diag2(){
    int somme = 0;
    for (int i = 0; i < m_ordre; i++){
        somme += m_carre[i][m_ordre-1-i];
    }
    return somme;
}


/* Verification si c'est bien un carre magique*/
bool OutilCarre::carre_est_magique(){
    for (int i = 0; i <m_ordre-1; i++){
        if (sum_ligne(i) !=  sum_ligne(i+1)){
            cout <<"Ce n'est pas un carré magique d'ordre "<< m_ordre <<endl;
            return false;
        }
        else if (sum_colonne(i) != sum_colonne(i+1)){
            cout <<"Ce n'est pas un carré magique d'ordre "<< m_ordre <<endl;
            return false;

        }
    }
    if (sum_diag1() != sum_diag2()){
        cout <<"Ce n'est pas un carré magique d'ordre "<< m_ordre <<endl;
        return false;
    }
    cout <<"C'est bien un carré magique d'ordre "<< m_ordre <<endl;;
    return true;
}

OutilCarre::~OutilCarre(){
    /* vidage mémoire */
    for (int i = 0; i < m_ordre; i++){
        delete [] m_carre[i];
    }
    delete [] m_carre;
}
