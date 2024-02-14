#ifndef LUX_H
#define LUX_H

#include <iostream>

using namespace std;

class lux
{
public:
    lux(int ordre);

    /* On crée un tableau de lettres L, U et X*/
    char ** remplir_LUX();

    /*On transforme de la facon du L sur un petit carre de coté 2*/
    void trL(int **, int, int, int, int);

    /*On transforme de la facon du U sur un petit carre de coté 2*/
    void trU(int **, int, int, int, int);

    /*On transforme de la facon du X sur un petit carre de coté 2*/
    void trX(int **, int, int, int, int);

    /*on traduit le tableau lettres L, U et X pour chaque transformation*/
    void traduLUX(char **, int, int);

    void LUX(int debut, int pas);

    /* getter*/
    /* recupere le carre*/
    int ** getCarre();
    /* recupere l'ordre*/
    int getOrdre();

    /* Affichage du carré magique*/
    void AffichageCarre();

    /* Destructeur*/
    ~lux();

private:
    int m_ordre;
    int ** m_carre;
};

#endif // LUX_H
