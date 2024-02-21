#include "lozenge.hpp"



/* Constructeur*/
Lozenge::Lozenge(int ordre): Carre(ordre){
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


/*On commence à remplir les nombres impairs en forme de losange*/
void Lozenge::remplir_impair(int debut){



/*on commence par iniatiliser la borne inf*/
int imin = (m_ordre-1)/2;
int jmin = 0;
/*la borne sup*/
int imax = 0;
int jmax = (m_ordre - 1)/2;
/*initialise i ,j  et cpt à 0*/
    int i = 0;
    int j = 0;
    int cpt = 0;
   /*tant que k est inferieur ou égale m_ordre^2  */
    while (debut <= m_ordre*m_ordre){
        /*on change la valeur i et j en imin et jmin qui sont les coordonnées de la borne inf*/
        i = imin;
        j = jmin;
        /*tant que les coordonnes ne rejoignent les coordonnées de la borne sup:*/
        while  ((i >= imax) && (j <= jmax)){
            /*on inscrit debut au coordonnée (i,j)*/
            m_carre[i][j] = debut;

            /*on rajoute 2 pour que ca soit le nombre impairs suivant*/
debut += 2;
/*on utilise le sud-est (voir le carre siamois)*/
i -= 1;
j += 1;
}
/*borne inf et sup , change par rapport à chaque augmentation du compteur
         si le compteur est pair alors la borne inf va vers l'est et borne sup va vers le sud*/
if (cpt %2 ==0){
    cpt += 1;
    jmin += 1;
    imax += 1;
}

/*si le compteur est impair alors la borne inf va vers le sud et borne sup va vers l'est*/
else {
    cpt += 1;
    jmax += 1;
    imin += 1;
}
}

}


/*On remplit le coté droit en nombre pair qui sont les (m_ordre-1)^2 premiers nombres pairs*/
void Lozenge::remplir_pair_droite(int debut){
/*on commence aux coordonnées a coté a droite du milieu de la dernière ligne*/
int i_d = m_ordre-1;
int j_d = (m_ordre - 1)/2 + 1;

/*on initialise debut,arret à 0 et cptd à 1*/
debut -= 2;
int arret = 0;
int cptd = 1;
/*tant cptd est inferieur egale à (m_ordre-1)/2*/
    while (cptd <= (m_ordre-1)/2){
        /*on initialise cptvd à 1*/
        int cptvd = 1;
        /*on ajoute 2 à arret*/
        arret += 2;
        /*on avance au nombre pair suivant*/
debut += 2;
/*on initialise c à debut*/
        int c = debut;
        /*on initialise i,j à i_d,j_d*/
        int i = i_d;
        int j = j_d;
        /*on inscript c au coordonnée i,j*/
        m_carre[i][j] = c;
        /*tant que cptvd soit inferieur à l'arret*/
        while (cptvd < arret){
            /*on ajoute ordre-1 à c*/
            c += m_ordre - 1;
            /*on se décale vers le sud*/
            i = (i +1)%m_ordre;
            /* inscript la nouvelle valeur c*/
m_carre[i][j] =c;
cptvd += 1;
}

/*on se decale vers le sud est*/
i_d = (i_d -1)%m_ordre;
j_d = (j_d +1)%m_ordre;
cptd += 1;
}

}

/*On remplit le coté gauche en nombre pair qui sont entre (m_ordre-1)^2 et m_ordre^2-1*/
void Lozenge::remplir_pair_gauche(){
/*on commence aux coordonnées a coté a gauche du milieu de la premiere ligne*/
int i_d = 0;
int j_d = (m_ordre-1)/2-1;

/*on initialise k à m_ordre*m_ordre+1,arret à 0 et cptg à 1*/
int debut = m_ordre*m_ordre+1;
int arret = 0;
int cptg = 1;

/*tant cptg est inferieur egale à (m_ordre-1)/2*/
    while (cptg <= (m_ordre-1)/2){


        /*on initialise cptvg à 1*/
        int cptvg = 1;
        /*on ajoute 2 à arret*/
        arret += 2;
        /*on recule au nombre pair precedent*/
debut -= 2;
/*on initialise c à debut*/
        int c = debut;
        /*on initialise i,j à i_d,j_d*/
        int i = i_d;
        int j = j_d;
        /*on inscript c au coordonnée i,j*/
        m_carre[i][j] =c;
        /*tant que cptvg soit inferieur à l'arret*/
        while (cptvg < arret){
            /*on enlève m_ordre-1 à c*/
c -= m_ordre-1;

/* probleme quand i = 0 pour le modulo m_ordre */
if (i == 0){
    i = m_ordre;
}
/* on se décale vers le nord*/
            i = (i -1)%m_ordre;
            /* inscript la nouvelle valeur c*/
m_carre[i][j] = c;
cptvg += 1;
}

/*on se decale vers le sud ouest*/

i_d = (i_d +1)%m_ordre;
j_d = (j_d -1)%m_ordre;
cptg += 1;
}

}



/* carre magique en forme de lozenge*/
void Lozenge::carre_lozenge(){
    /*on commence par les nombres impairs*/
    remplir_impair(1);
    /*puis par les (m_ordre-1)^2 premiers nombres pairs*/
    remplir_pair_droite(2);
    /*a la fin,  les nombres pairs qui sont entre (ordre-1)^2 et ordre^2-1 inclus*/
    return remplir_pair_gauche();
}



/* Destructeur*/
Lozenge::~Lozenge(){
    for (int i = 0; i < m_ordre; i++){
        delete [] m_carre[i];
    }
    delete [] m_carre;
}
