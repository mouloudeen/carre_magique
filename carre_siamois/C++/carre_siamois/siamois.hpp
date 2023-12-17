#ifndef SIAMOIS_HPP
#define SIAMOIS_HPP

#include <iostream>


using namespace std;

class Siamois
{
public:
    /*Constructeur*/
    Siamois(int ordre);


    /* Remplir le carré magique */
    void remplir_carre( int k, int debut_i, int debut_j, int dep_i, int dep_j, int depls_i, int depls_j);


    /* Affichage du carré magique*/
    void AffichageCarre();

    /*Destructeur*/
    ~Siamois();
private:
    int m_ordre;
    int ** m_carre;
};

#endif // SIAMOIS_HPP
