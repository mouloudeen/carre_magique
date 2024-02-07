#ifndef LOZENGE_HPP
#define LOZENGE_HPP


#include <iostream>

using namespace std;


class Lozenge
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

    /*Getter*/
    int GetOrdre() const;
    int ** GetCarre() const;

    /* Affichage du carré magique*/
    void AffichageCarre();

    /* destructeur*/
    ~Lozenge();
private:
    int m_ordre;
    int ** m_carre;
};

#endif // LOZENGE_HPP
