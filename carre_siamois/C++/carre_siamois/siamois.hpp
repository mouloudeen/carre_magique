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


    /* Siamois Nord Est avec comme départ le milieu de la première ligne */
    void carre_siamois_ne_pl(int k);

    /*Siamois Nord Est avec comme départ le milieu de la dernière colonne*/
    void carre_siamois_ne_dc(int k);

    /*Siamois Sud Est comme départ le milieu de la dernière ligne*/
    void carre_siamois_se_dl(int k);

    /*Siamois Sud Est comme départ le milieu de la dernière colonne*/
    void carre_siamois_se_dc(int k);

    /*Siamois Nord Ouest avec comme départ le milieu de la première ligne*/
    void carre_siamois_no_pl(int k);

    /*Siamois Nord Ouest avec comme départ le milieu de la première colonne*/
    void carre_siamois_no_pc(int k);

    /*Siamois Sud Ouest comme départ le milieu de la dernière ligne*/
    void carre_siamois_so_dl(int k);

    /*Siamois Sud Ouest comme départ le milieu de la première colonne*/
    void carre_siamois_so_pc(int k);

    /*Fonction qui trouve le chiffre de début en connaissant la constante magique*/
    int debut_carre(int c);

    /* Affichage du carré magique*/
    void AffichageCarre();

    /*Destructeur*/
    ~Siamois();
private:
    int m_ordre;
    int ** m_carre;
};

#endif // SIAMOIS_HPP
