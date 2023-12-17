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


/* Remplir le carré magique */
void Siamois::remplir_carre( int k, int debut_i, int debut_j, int dep_i, int dep_j, int depls_i, int depls_j){



    for (int i = 0; i < m_ordre; i++){
        for (int j =0; j < m_ordre; j++){
            m_carre[i][j] = 0;
        }
    }
    /* On initialise l qui est le nombre de chiffres rajoutés au carré*/
int l = 1;
/*On initialise i qui sera le numero de ligne à debut_i*/
    uint i = debut_i;

    /*On initialise j qui sera le numero de colonne à debut_j*/
    uint j =  debut_j;
    /* valeur de départ que donnera la personne qui utilise la fonction*/

    m_carre[i][j] = k;

    /*Tant que le carré n'est pas rempli on continue*/
    while ( l != m_ordre*m_ordre){

        /* au cas i = 0, on ne peut utiliser le modulo m_ordre*/
if (i==0){
    i = m_ordre;
}

/* au cas j = 0, on ne peut utiliser le modulo m_ordre*/
if (j==0){
    j = m_ordre;
}
/* On verifie si le case ((i +dep_i) % m_ordre,(j +dep_j) % m_ordre) n est pas rempli*/
if (m_carre[(i + dep_i)%m_ordre][(j + dep_j)%m_ordre] != 0){
    /* alors on rempli la case ((i + depls_i) % m_ordre, (j+ depls_j)% m_ordre)*/
    i = (i + depls_i)%m_ordre;
    j = (j + depls_j)%m_ordre;
    /* on augmente la valeur precedente*/
    k += 1;
    m_carre[i][j] = k;
    /*On rajoute + 1 aux nombres de chiffres rajoutés*/
            l += 1;

        }
        else{
            /* on rempli la case (i +dep_i) % m_ordre,(j +dep_j) % m_ordre)*/
    i = (i + dep_i)%m_ordre;
    j = (j + dep_j)%m_ordre;

    /* on augmente la valeur precedente*/
    k += 1;
    /*On rempli cette case avec la valeur augmente*/
    m_carre[i][j] = k;
    /*On rajoute + 1 aux nombres de chiffres rajoutés*/
            l += 1;

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


