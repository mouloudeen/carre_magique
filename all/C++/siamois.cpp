#include "siamois.hpp"

/*Constructeur*/
Siamois::Siamois(int ordre): Carre(ordre)
{

    m_carre = new int* [m_ordre];
    for (int i =0; i < m_ordre; i++){
        m_carre[i] = new int[m_ordre];
    }

    for(int i = 0; i < m_ordre;i++){
        for(int j = 0; j < m_ordre; j++){
            m_carre[i][j] = 0;
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


    /*Siamois Nord Est avec comme départ le milieu de la première ligne*/
    void Siamois::carre_siamois_ne_pl(int k){

        return remplir_carre(k,0,(m_ordre-1)/2,-1,1,1,0);
    }

    /*Siamois Nord Est avec comme départ le milieu de la dernière colonne*/
    void Siamois::carre_siamois_ne_dc(int k){

        return remplir_carre(k,(m_ordre-1)/2,m_ordre - 1,-1,1,0,-1);
    }

    /*Siamois Sud Est comme départ le milieu de la dernière ligne*/
    void Siamois::carre_siamois_se_dl(int k){
        return remplir_carre(k,m_ordre-1,(m_ordre-1)/2,1,1,-1,0);
    }

    /*Siamois Sud Est comme départ le milieu de la dernière colonne*/
    void Siamois::carre_siamois_se_dc(int k){
        return remplir_carre(k,(m_ordre-1)/2,m_ordre - 1,1,1,0,-1);
    }

    /*Siamois Nord Ouest avec comme départ le milieu de la première ligne*/
    void Siamois::carre_siamois_no_pl(int k){
        return remplir_carre(k,0,(m_ordre-1)/2,-1,-1,1,0);
    }


    /*Siamois Nord Ouest avec comme départ le milieu de la première colonne*/
    void Siamois::carre_siamois_no_pc(int k){
        return remplir_carre(k,(m_ordre-1)/2,0,-1,-1,0,1);
    }


    /*Siamois Sud Ouest comme départ le milieu de la dernière ligne*/
    void Siamois::carre_siamois_so_dl(int k){
        return remplir_carre(k,m_ordre-1,(m_ordre-1)/2,1,-1,-1,0);
    }


    /*Siamois Sud Ouest comme départ le milieu de la première colonne*/
    void Siamois::carre_siamois_so_pc(int k){
        return remplir_carre(k,(m_ordre-1)/2,0,1,-1,0,1);
    }

    /*Fonction qui trouve le chiffre de début en connaissant la constante magique*/
int Siamois::debut_carre(int c){
    return (2*c +m_ordre*(-m_ordre*m_ordre+1))/(2*m_ordre);
}

/*Fonction qui construit un carre d'un des 8 modele qu'avec la constante magique*/
    void Siamois::carre_siamois(string funct,int c){
        /*si c a cette condition , il doit etre le minimum
     #possible de la constante magique*/
        if (c < (m_ordre*(m_ordre*(m_ordre*m_ordre+1)))/(2*m_ordre)){
            c = (m_ordre*(m_ordre*(m_ordre*m_ordre+1)))/(2*m_ordre);
        }
        /*On prendra le c le plus proche qui est divisible par m_ordre*/
        else if(c%m_ordre != 0){
            int i = c/m_ordre;
            c = i*m_ordre;
        }

        /*Recupère le nombre du début carré magique*/
        int k = debut_carre(c);

        if (strcmp(funct.c_str(), "carre_siamois_ne_pl") == 0){
            return carre_siamois_ne_pl(k);
        }

        else if (strcmp(funct.c_str(), "carre_siamois_ne_dc") == 0){
            return carre_siamois_ne_dc(k);
        }

        else if (strcmp(funct.c_str(), "carre_siamois_se_dl") == 0){
            return carre_siamois_se_dl(k);
        }

        else if (strcmp(funct.c_str(), "carre_siamois_se_dc") == 0){
            return carre_siamois_se_dc(k);
        }

        else if (strcmp(funct.c_str(), "carre_siamois_no_pl") == 0){
            return carre_siamois_no_pl(k);
        }

        else if (strcmp(funct.c_str(), "carre_siamois_no_pc") == 0){
            return carre_siamois_no_pc(k);
        }

        else if (strcmp(funct.c_str(), "carre_siamois_so_dl")){
            return carre_siamois_so_dl(k);
        }

        else if (strcmp(funct.c_str(), "carre_siamois_so_pc")){
            return carre_siamois_so_pc(k);
        }

        else {
            m_carre = NULL;
        }
    }


/*Destructeur*/
    Siamois::~Siamois(){
        /* vidage mémoire */
    for(int i=0;i< m_ordre;i++){
        delete [] m_carre[i];
    }
    delete [] m_carre;

}


