#ifndef PERMUTATIONDIAGONALE_H
#define PERMUTATIONDIAGONALE_H

#include "carre.h"

class permutationDiagonale : public Carre
{
public:
    /* Constructeur*/
    permutationDiagonale(int ordre);

   /*On remplit partant du coordonnée (i,j) avec comme déplacement (idep,jdep)*/
    void initialisation(int i, int j, int idep, int jdep,int pas, int debut);

    /* carre magique de la façon des diagonales*/
    void permu_diag(int pas, int debut);

    /* Destructeur*/
    ~permutationDiagonale();

};

#endif // PERMUTATIONDIAGONALE_H
