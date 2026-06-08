#ifndef PERMUTATIONDIAGONALE_H
#define PERMUTATIONDIAGONALE_H

#include <iostream>
using namespace std;

class permutationDiagonale
{
public:
    /* Constructeur*/
    permutationDiagonale(int ordre);

   /*On remplit partant du coordonnée (i,j) avec comme déplacement (idep,jdep)*/
    void initialisation(int i, int j, int idep, int jdep,int pas, int debut);

    /* carre magique de la façon des diagonales*/
    void permu_diag(int pas, int debut);

    /* getter*/
    /* recupere le carre*/
    int ** getCarre();
    /* recupere l'ordre*/
    int getOrdre();

    /* Affichage du carré magique*/
    void AffichageCarre();

    /* Destructeur*/
    ~permutationDiagonale();
private:
    int m_ordre;
    int ** m_carre;
};

#endif // PERMUTATIONDIAGONALE_H
