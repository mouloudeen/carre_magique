#include "siamois.hpp"

/*Constructeur*/
Siamois::Siamois(int ordre): m_ordre(ordre)
{

    m_carre = new int* [m_ordre];
    for (int i =0; i < m_ordre; i++){
    m_carre[i] = new int[m_ordre];
    }

    for(int i = 0; i < m_ordre;i++){
        for(int j = 0; j < m_ordre; j++){
            m_carre[i][j] = 100;
        }
    }
}


/* Affichage du carré magique*/
void Siamois::AffichageCarre(){
    for (int i = 0; i< m_ordre; i++){
        for(int j =0; j < m_ordre; j++){
            cout <<" ---";
        }
        cout << "\n";
        cout <<"| ";
        for(int j =0; j < m_ordre; j++){
            cout   <<m_carre[i][j] <<" | ";
        }

       cout <<"\n";


    }
    for(int j =0; j < m_ordre; j++){
        cout <<" ---";
    }
    cout<< "\n";
}


/*Destructeur*/
Siamois::~Siamois(){}


