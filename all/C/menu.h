#include "carre_lozenge.h"
#include "carre_siamois.h"
#include "lux.h"
#include "carre_permutation_diagonale.h"
#include "outil_carre.h"

/* Affichage du carré magique*/
void AffichageCarre(int ** , int);

/* Desalloué la mémoire du carre */
void Free_carre(int **, int);


/* Affichage du carre de l'ordre entre 3 et 21*/
void Affichage_carre(int);

/*Non affichage, il ya que le test si c'est bien un carré */
void nonAffichage_Carre(int);

/* Exemple predefinis*/
void test_predefinis();

/* Pour recommencer ou non*/
void carreother(void (*fonction)(void)  , void (*precedent)(void));

/* construction par l'algorithme Lozenge*/
void algoLozenge();

/* choisir parmi les 8 constructions du carre siamois*/
void choixSiamois(int , int , int);

/* construction par l'algorithme siamois*/
void algoSiamois();

/* Construction par l'algorithme Permutation des diagonales*/
void algoPermutation();

/* Construction par l'algorithme LUX*/
void algoLUX();

/* choisir un carre siamois*/
int ** choixImpairOperation2(int);

/* choisir un carre d'ordre impair*/
int ** choixImpairOperation(int);

/* pour recommencer avec les memes carres*/
int ** choixRecommencer(int, int **, int **);

/* Operateurs*/
int ** choixOperateur(int **, int **, int);

/* les opérations avec les 4 algorithmes de constructions du carre magique*/
void choixOperation();

/* choix de l'algorithme de construction */
void algoCarre();

/* choisir l'ordre du carre */
void ordreCarre();

/* Choix des carrés soit par ordre ou construction*/
void choix_carre();

/*Accueil du menu */
void debut();

/* Affichage du menu complet */
void menu();

