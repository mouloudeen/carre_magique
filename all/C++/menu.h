#ifndef MENU_H
#define MENU_H

#include "lozenge.hpp"
#include "siamois.hpp"
#include "lux.h"
#include "permutationdiagonale.h"
#include "carre.h"
#include "outilCarre.hpp"


class Menu {
public:
    /* Constructeur*/
    Menu();
    
    /* Affichage du carre de l'ordre entre 3 et 21*/
    static void Affichage_carre(int ordre);
    
    /*Non affichage, il ya que le test si c'est bien un carré */
    static void nonAffichage_Carre(int ordre);
    
    /* Pour recommencer ou non*/
    static void carreother(void (*fonction)(void)  , void (*precedent)(void));
    
    /* choisir l'ordre du carre */
    static void ordreCarre();
    
    /* construction par l'algorithme Lozenge*/
    static void algoLozenge();
    
    /* choisir parmi les 8 constructions du carre siamois*/
    static void choixSiamois(int ordre, int debut, int pas);
    
    /* construction par l'algorithme siamois*/
    static void algoSiamois();
    
    /* Construction par l'algorithme Permutation des diagonales*/
    static void algoPermutation();
    
    /* Construction par l'algorithme LUX*/
    static void algoLUX();
    
    /* choisir un carre siamois*/
    static int ** choixImpairOperation2(int ordre);
    
    /* choisir un carre d'ordre impair*/
    static int ** choixImpairOperation(int ordre);
    
    /* pour recommencer avec les memes carres*/
    static void choixRecommencer(int ordre, int ** tab1, int ** tab2);
    
    /* les opérations avec les 4 algorithmes de constructions du carre magique*/
    static void choixOperation();
    
    /* choix de l'algorithme de construction */
    static void algoCarre();
    
    /* Choix des carrés soit par ordre ou construction*/
    static void choix_carre();
    
    /* Exemple predefinis*/
    static void test_predefinis();
    
    /*Accueil du menu */
    static void debut();
    
    /* Affichage du menu complet */
    void menu();
    
    /* Destructeur*/
    ~Menu();
    
};

#endif // MENU_H
