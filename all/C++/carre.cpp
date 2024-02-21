#include "carre.h"

/* Constructeur*/
Carre::Carre(int ordre): m_ordre(ordre){
    m_carre = new int* [m_ordre];

    for (int i = 0; i < m_ordre; i++){
        m_carre[i] = new int [m_ordre];
    }

    for (int i =0; i < m_ordre; i++){
        for(int j =0; j < m_ordre;j++){
            m_carre[i][j] = 0;
        }
    }
}

/* Getter*/
int Carre::GetOrdre() const {
return m_ordre;
}

int ** Carre::GetCarre() const {
return m_carre;
}

/* Affichage du carré magique*/
void Carre::AffichageCarre(){
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

/* Destructeur*/
Carre::~Carre(){
    for (int i = 0; i < m_ordre; i++){
        delete [] m_carre[i];
    }
    delete [] m_carre;
}
