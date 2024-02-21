#ifndef CARRE_H
#define CARRE_H

#include <iostream>

using namespace std;

class Carre
{
public:
    /* Constructeur*/
    Carre(int ordre);
    
    /*Getter*/
    int GetOrdre() const;
    int ** GetCarre() const;

    /* Affichage du carré magique*/
    void AffichageCarre();
    
    /* destructeur*/
    ~Carre();
    
protected:
    int m_ordre;
    int ** m_carre;
};

#endif // CARRE_H
