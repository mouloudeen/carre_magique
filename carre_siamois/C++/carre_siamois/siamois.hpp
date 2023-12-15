#ifndef SIAMOIS_HPP
#define SIAMOIS_HPP

#include <iostream>


using namespace std;

class Siamois
{
public:
    /*Constructeur*/
    Siamois(int ordre);


    /* Affichage du carré magique*/
void AffichageCarre();

    /*Destructeur*/
    ~Siamois();
private:
    int m_ordre;
    int ** m_carre;
};

#endif // SIAMOIS_HPP
