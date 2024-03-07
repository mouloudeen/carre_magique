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

/* Opérateur*/
/* Fonction pour additionner 2 carrés de même ordre*/
void Carre::addCarre(Carre *carre){
    if (carre->GetOrdre() != m_ordre){
        printf("erreur d'ordre pour calculer\n");
        exit(EXIT_FAILURE);
    }
    for( int i = 0; i < m_ordre; i++){
        for( int j = 0; j < m_ordre; j++){
            m_carre[i][j] += carre->GetCarre()[i][j];
        }
    }
}

/* Fonction pour soustraire 2 carrés de même ordre*/
void Carre::souCarre(Carre *carre){
    if (carre->GetOrdre() != m_ordre){
        printf("erreur d'ordre pour calculer\n");
        exit(EXIT_FAILURE);
    }
    for( int i = 0; i < m_ordre; i++){
        for( int j = 0; j < m_ordre; j++){
            m_carre[i][j] -= carre->GetCarre()[i][j];
        }
    }
}

/* Fonction pour multiplier 2 carrés de même ordre*/
void Carre::mulCarre(Carre *carre){
    if (carre->GetOrdre() != m_ordre){
        printf("erreur d'ordre pour calculer\n");
        exit(EXIT_FAILURE);
    }
    for( int i = 0; i < m_ordre; i++){
        for( int j = 0; j < m_ordre; j++){
            m_carre[i][j] *= carre->GetCarre()[i][j];
        }
    }
}

/* multiplie chaque case de la ligne iligne du carre1 et de la colone jcol du carre2 et les additionne ensemble*/
int Carre::ligneCol(Carre *carre, int iligne, int jcol){
    
    int res = 0;
    
    for( int k = 0; k < m_ordre; k++){
        res += m_carre[iligne][k] * carre->GetCarre()[k][jcol];
    }
    
    return res;
    
}

/*  multiplication comme 2 vecteurs*/
void Carre::mulVecCarre(Carre *carre){
    if (carre->GetOrdre() != m_ordre){
        printf("erreur d'ordre pour calculer\n");
        exit(EXIT_FAILURE);
    }
    int ** carre1 ;
    carre1 = new int* [m_ordre];

    for (int i = 0; i < m_ordre; i++){
        carre1[i] = new int [m_ordre];
    }

    
    for( int i = 0; i < m_ordre; i++){
        for( int j = 0; j < m_ordre; j++){
            carre1[i][j] = ligneCol(carre, i,j);
        }
    }
    for( int i = 0; i < m_ordre; i++){
        for( int j = 0; j < m_ordre; j++){
            m_carre[i][j] = carre1[i][j];
        }
        
    }
    
}


/* choix des Operateurs*/
 void Carre::choixOperateur(Carre *carre){
    char choix;
    
    cout <<"1 : additionner" <<endl;
     cout <<"2 : soustraction" <<endl;
     cout <<"3 : multiplication" <<endl;
     cout <<"4 : multiplication matricielle" <<endl;
    scanf("%c", &choix);
    
    switch(choix){
        case '1':
            cout <<"Addition" <<endl;
            addCarre(carre);
            
            break;
        case '2':
            cout <<"Soustraction" <<endl;
            souCarre(carre);
            
            break;
        case '3':
            cout <<"Multiplication" <<endl;
            mulCarre(carre);
            
            break;
        case '4':
            cout <<"Multiplication matricielle" <<endl;
            mulVecCarre(carre);
            
            break;
        default:
            cout <<"Vous pouvez utilisé  1, 2, 3 et 4" <<endl;
            choixOperateur(carre);
    }
    
    
}


/* Getter*/
int Carre::GetOrdre() const {
return m_ordre;
}

int ** Carre::GetCarre() const {
return m_carre;
}

/* Setter*/
void Carre::SetCarre(int ** tab){
    for( int i = 0; i < m_ordre; i++){
        for( int j = 0; j < m_ordre; j++){
            m_carre[i][j] = tab[i][j];
        }
    }
}

/* Affichage du carré magique*/
void Carre::AffichageCarre(){
    for (int i = 0; i< m_ordre; i++){
        for(int j =0; j < m_ordre; j++){
            printf(" ------");
        }
        printf("\n");
        for(int j =0; j < m_ordre; j++){
            printf("| %4.d ",m_carre[i][j]);
        }
        printf("|");
        printf("\n");
        
        
    }
    for(int j =0; j < m_ordre; j++){
        printf(" ------");
    }
    printf("\n");
}

/* Destructeur*/
Carre::~Carre(){
    for (int i = 0; i < m_ordre; i++){
        delete [] m_carre[i];
    }
    delete [] m_carre;
}
