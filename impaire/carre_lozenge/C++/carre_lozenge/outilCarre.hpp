#ifndef OUTILCARRE_HPP
#define OUTILCARRE_HPP


class OutilCarre
{
public:
    /* Constructeur*/
    OutilCarre(int ordre, int ** carre);

    /* calculer la somme de la ligne d'indice*/
    int sum_ligne(int indice) ;

    /* calculer la somme de la colone d'indice*/
    int sum_colonne(int indice);

    /*calculer la somme de la diagonale qui part de en haut à gauche vers en bas à droite*/
    int sum_diag1();

    /*calculer la somme de la diagonale qui part de en haut à droite vers en bas à gauche*/
    int sum_diag2();

    /* Verification si c'est bien un carre magique*/
    bool carre_est_magique();

    /*destructeur*/
    ~OutilCarre ();
private:
    int m_ordre;
    int ** m_carre;
};

#endif // OUTILCARRE_HPP
