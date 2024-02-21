#ifndef LOZENGE_HPP
#define LOZENGE_HPP


#include "carre.h"


class Lozenge : public Carre
{
public:
    /* Constructeur*/
    Lozenge(int ordre);

    /*On commence à remplir les nombres impairs en forme de losange*/
    void remplir_impair(int debut);


    /*On remplit le coté droit en nombre pair qui sont les (m_ordre-1)^2 premiers nombres pairs*/
    void remplir_pair_droite(int debut);


    /*On remplit le coté gauche en nombre pair qui sont entre (m_ordre-1)^2 et m_ordre^2-1*/
    void remplir_pair_gauche();

    /* carre magique en forme de lozenge*/
    void carre_lozenge();


    /* destructeur*/
    ~Lozenge();
};

#endif // LOZENGE_HPP
