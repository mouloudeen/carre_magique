#ifndef CARRE_H
#define CARRE_H

#include <iostream>

using namespace std;

class Carre
{
public:
    /* Constructeur*/
    Carre(int ordre);
    
    /* Fonction pour additionner 2 carrés de même ordre*/
    void addCarre(Carre *carre);
    
    /* Fonction pour soustraire 2 carrés de même ordre*/
    void souCarre(Carre *carre);
    
    /* Fonction pour multiplier 2 carrés de même ordre*/
    void mulCarre(Carre *carre);
    
    /* multiplie chaque case de la ligne iligne du carre1 et de la colone jcol du carre2 et les additionne ensemble*/
    int ligneCol(Carre *carre, int iligne, int jcol);
    
    /*  multiplication comme 2 vecteurs*/
    void mulVecCarre(Carre *carre);
    
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
