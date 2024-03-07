#include "menu.h"

/* Affichage du carré magique*/
void AffichageCarre(int ** carre, int ordre){
    
        for (int i = 0; i< ordre; i++){
            for(int j =0; j < ordre; j++){
                printf(" ------");
            }
            printf("\n");
            for(int j =0; j < ordre; j++){
                printf("| %4.d ",carre[i][j]);
            }
            printf("|");
            printf("\n");
            
            
        }
        for(int j =0; j < ordre; j++){
            printf(" ------");
        }
        printf("\n");
    
}

/* Desalloué la mémoire du carre */
void Free_carre(int ** carre,int n){
    if (carre != NULL){
        for (int i = 0; i<n; i++){
            free(carre[i]);
        }
        free(carre);
    }
}


/* Affichage du carre de l'ordre entre 3 et 21*/
void Affichage_carre(int ordre){
    int ** carre = NULL;
    /* ordre impair alors on utilise carre_lozenge */
    if (ordre%2 == 1){
        printf("carre lozenge :\n");
        carre = carre_lozenge(ordre);
        carre_est_magique(carre,ordre);
        AffichageCarre(carre,ordre);
        
    }
    /* ordre divisible par 4 on utilise permutation diagonale*/
    else if(ordre%4 == 0){
        printf("carre permutation diagonale :\n");
        carre = permu_diag(ordre,1,1);
        carre_est_magique(carre,ordre);
        AffichageCarre(carre,ordre);
    }
    /* sinon ordre est pair et n'est pas divisible par 4 on utilise lux*/
    else {
        printf("carre lux :\n");
        carre = LUX(ordre,1,1);
        carre_est_magique(carre,ordre);
        AffichageCarre(carre,ordre);
    }
    Free_carre(carre,ordre);
}

/*Non affichage, il ya que le test si c'est bien un carré */
void nonAffichage_Carre(int ordre){
    int ** carre = NULL;
    /* ordre impair alors on utilise carre_lozenge */
    if (ordre%2 == 1){
        printf("carre lozenge :\n");
        carre = carre_lozenge(ordre);
        carre_est_magique(carre,ordre);
        
        
    }
    /* ordre divisible par 4 on utilise permutation diagonale*/
    else if(ordre%4 == 0){
        printf("carre permutation diagonale :\n");
        carre = permu_diag(ordre,1,1);
        carre_est_magique(carre,ordre);
        
    }
    /* sinon ordre est pair et n'est pas divisible par 4 on utilise lux*/
    else {
        printf("carre lux :\n");
        carre = LUX(ordre,1,1);
        carre_est_magique(carre,ordre);
        
    }
    Free_carre(carre,ordre);
}


/* Exemple predefinis*/
void test_predefinis(){
    printf("On teste les ordres de 3 à 20\n");
    for (int i = 3; i < 21; i++){
        Affichage_carre(i);
        
    }
    
    printf("Grand nombre aléatoire\n");
    int L[] = {5301, 7339, 9591, 3687, 7243, 7630, 3986, 4770, 5498, 9746, 2380, 4472, 8312, 6244, 6088};
    
    for (int i = 0; i < 15; i++){
        nonAffichage_Carre(L[i]);
        
    }
    
    printf("\n\n");
    
    printf("On teste maintenant quelque calcul de carre pour voir si le résultat donne un carré magique\n");
    
    printf("on teste d'abord avec les 2 algo des ordres impaires\n");
    
    
    int ordre = 3;
    int ** carre1 = carre_lozenge(ordre);
    int ** carre2 = carre_siamois_se_dl(ordre,2,4);
    int ** carre3 = addCarre(carre1, carre2, ordre);
    int ** carre4 = souCarre(carre1, carre2, ordre);
    int ** carre5 = mulCarre(carre1, carre2, ordre);
    int ** carre6 = mulVecCarre(carre1, carre2, ordre);
    
    printf("carre lozenge\n");
    AffichageCarre(carre1,ordre);
    carre_est_magique(carre1,ordre);
    printf("carre siamois se dl\n");
    AffichageCarre(carre2,ordre);
    carre_est_magique(carre2,ordre);
    printf("addition\n");
    AffichageCarre(carre3,ordre);
    carre_est_magique(carre3,ordre);
    printf("soustraction\n");
    AffichageCarre(carre4,ordre);
    carre_est_magique(carre4,ordre);
    printf("multiplication\n");
    AffichageCarre(carre5,ordre);
    carre_est_magique(carre5,ordre);
    printf("multiplication vectorielle\n");
    AffichageCarre(carre6,ordre);
    carre_est_magique(carre6,ordre);
    
    
    printf(" on teste avec l algo des ordres pairement paire\n");
    
    ordre = 4;
    carre1 = permu_diag(ordre,1,1);
    carre2 = permu_diag(ordre,3,2);
    carre3 = addCarre(carre1, carre2, ordre);
    carre4 = souCarre(carre1, carre2, ordre);
    carre5 = mulCarre(carre1, carre2, ordre);
    carre6 = mulVecCarre(carre1, carre2, ordre);
    
    
    printf("carre permutation diagonale\n");
    AffichageCarre(carre1,ordre);
    carre_est_magique(carre1,ordre);
    printf("carre permutation diagonale\n");
    AffichageCarre(carre2,ordre);
    carre_est_magique(carre2,ordre);
    printf("addition\n");
    AffichageCarre(carre3,ordre);
    carre_est_magique(carre3,ordre);
    printf("soustraction\n");
    AffichageCarre(carre4,ordre);
    carre_est_magique(carre4,ordre);
    printf("multiplication\n");
    AffichageCarre(carre5,ordre);
    carre_est_magique(carre5,ordre);
    printf("multiplication vectorielle\n");
    AffichageCarre(carre6,ordre);
    carre_est_magique(carre6,ordre);
    
    
    printf(" on teste avec l algo des ordres pairement impaire\n");
    
    ordre = 6;
    carre1 = LUX(ordre,1,1);
    carre2 = LUX(ordre,3,2);
    carre3 = addCarre(carre1, carre2, ordre);
    carre4 = souCarre(carre1, carre2, ordre);
    carre5 = mulCarre(carre1, carre2, ordre);
    carre6 = mulVecCarre(carre1, carre2, ordre);
    
    printf("carre lux\n");
    AffichageCarre(carre1,ordre);
    carre_est_magique(carre1,ordre);
    printf("carre lux\n");
    AffichageCarre(carre2,ordre);
    carre_est_magique(carre2,ordre);
    printf("addition\n");
    AffichageCarre(carre3,ordre);
    carre_est_magique(carre3,ordre);
    printf("soustraction\n");
    AffichageCarre(carre4,ordre);
    carre_est_magique(carre4,ordre);
    printf("multiplication\n");
    AffichageCarre(carre5,ordre);
    carre_est_magique(carre5,ordre);
    printf("multiplication vectorielle\n");
    AffichageCarre(carre6,ordre);
    carre_est_magique(carre6,ordre);
    
    
    Free_carre(carre1,ordre);
    Free_carre(carre2,ordre);
    Free_carre(carre3,ordre);
    Free_carre(carre4,ordre);
    Free_carre(carre5,ordre);
    Free_carre(carre6,ordre);
    
    carreother(test_predefinis, debut);
}

/* Pour recommencer ou non*/
void carreother(void (*fonction)(void)  , void (*precedent)(void)){
    char choix;
    printf("Est-ce que vous voulez recommencer: (o/n)\n");
    scanf("%c", &choix);
    if ((choix != 'o') && (choix != 'n')){
        printf("Vous pouvez utiliser o ou n\n");
        carreother(fonction,precedent);
    }
    switch(choix){
        case 'o':
            (*fonction)();
            break;
        case 'n':
            (*precedent)();
            break;
        
    }
}

/* choisir l'ordre du carre */
void ordreCarre(){
    int ordre;
    printf("Choisir l'ordre du carre entre 3 à 20 sinon il n'y aura pas d'affichage du carre\n");
    scanf("%d",&ordre);
    
    if( (ordre >= 3) && (ordre <= 20)){
        Affichage_carre(ordre);
    }
    else {
        nonAffichage_Carre(ordre);
    }
    carreother(ordreCarre, choix_carre);
}

/* construction par l'algorithme Lozenge*/
void algoLozenge(){
    int ordre;
    printf("Choisir l'ordre impair du carre entre 3 à 20 sinon il n'y aura pas d'affichage du carre\n");
    scanf("%d", &ordre);
    
    if(ordre%2 != 1){
        printf("l'ordre doit être impair\n");
        algoLozenge();
    }
    
    int ** carre = NULL;
    carre = carre_lozenge(ordre);
    printf("carre_lozenge d'ordre %d\n",ordre);
    carre_est_magique(carre,ordre);
    if( (ordre >= 3) && (ordre <= 20)){
        AffichageCarre(carre,ordre);
    }
    Free_carre(carre,ordre);
    carreother(algoLozenge, algoCarre);
    
}

/* choisir parmi les 8 constructions du carre siamois*/
void choixSiamois(int ordre, int debut, int pas){
    int choix;
    int ** carre = NULL;
    printf("1 : carre siamois Nord-Est : commence au milieu premiere ligne\n");
    printf("2 : carre siamois Nord-Est : commence au milieu derniere colonne\n");
    printf("3 : carre siamois Sud-Est : commence au milieu derniere ligne\n" );
    printf("4 : carre siamois Sud-Est : commence au milieu derniere colonne\n");
    printf("5 : carre siamois Nord-Ouest : commence au milieu premiere ligne\n");
    printf("6 : carre siamois Nord-Ouest : commence au milieu premiere colonne\n");
    printf("7 : carre siamois Sud-Ouest : commence au milieu derniere ligne\n");
    printf("8 : carre siamois Sud-Ouest : commence au milieu premiere colonne\n");
    scanf("%d",&choix);
    
    switch(choix){
        case 1:
            carre = carre_siamois_ne_pl(ordre, pas, debut);
            printf("carre_siamois_ne_pl d'ordre %d et commence par %d avec %d\n",ordre, debut, pas);
            break;
        case 2:
            carre = carre_siamois_ne_dc(ordre, pas, debut);
            printf("carre_siamois_ne_dc d'ordre %d et commence par %d avec %d\n",ordre, debut, pas);
            break;
        case 3:
            carre = carre_siamois_se_dl(ordre, pas, debut);
            printf("carre_siamois_se_dl d'ordre %d et commence par %d avec %d\n",ordre, debut, pas);
            break;
        case 4:
            carre = carre_siamois_se_dc(ordre, pas, debut);
            printf("carre_siamois_se_dc d'ordre %d et commence par %d avec %d\n",ordre, debut, pas);
            break;
        case 5:
            carre = carre_siamois_no_pl(ordre, pas, debut);
            printf("carre_siamois_no_pl d'ordre %d et commence par %d avec %d\n",ordre, debut, pas);
            break;
        case 6:
            carre = carre_siamois_no_pc(ordre, pas, debut);
            printf("carre_siamois_no_pc d'ordre %d et commence par %d avec %d\n",ordre, debut, pas);
            break;
        case 7:
            carre = carre_siamois_so_dl(ordre, pas, debut);
            printf("carre_siamois_so_dl d'ordre %d et commence par %d avec %d\n",ordre, debut, pas);
            break;
        case 8:
            carre = carre_siamois_so_pc(ordre, pas, debut);
            printf("carre_siamois_so_pc d'ordre %d et commence par %d avec %d\n",ordre, debut, pas);
            break;
        default:
            printf("choix doit etre entre 1 et 8 inclus\n");
            choixSiamois(ordre, debut, pas);
    }
    carre_est_magique(carre,ordre);
    if( (ordre >= 3) && (ordre <= 20)){
        AffichageCarre(carre,ordre);
    }
    Free_carre(carre,ordre);
}
/* construction par l'algorithme siamois*/
void algoSiamois(){
    int ordre, debut, pas;
    printf("Choisir l'ordre impair, l'ordre superieur à 20 n'est pas affichable\n");
    scanf("%d",&ordre);
    
    if (ordre%2 !=1){
        printf("l'ordre doit être impair\n");
        algoSiamois();
    }
    printf("choisir le debut du carre\n");
    scanf("%d",&debut);

    printf("choisir le nombre de pas\n");
    scanf("%d",&pas);
    
    choixSiamois(ordre, debut, pas);
    carreother(algoSiamois,algoCarre);
}

/* Construction par l'algorithme Permutation des diagonales*/
void algoPermutation(){
    int ordre, debut, pas;
    int ** carre = NULL;
    printf("Choisir un ordre divisible par 4 , l'ordre superieur à 20 n'est pas affichable \n");
    scanf("%d", &ordre);
    
    if(ordre%4 != 0){
        printf("l'ordre doit être divisible par 4\n");
        algoPermutation();
    }
    
    printf("choisir le debut du carre\n");
    scanf("%d",&debut);

    printf("choisir le nombre de pas\n");
    scanf("%d",&pas);
    
    carre = permu_diag(ordre, pas, debut);
    printf("carre_permutation d'ordre %d et commence par %d avec %d\n",ordre, debut, pas);
    carre_est_magique(carre, ordre);
    
    if( (ordre >= 3) && (ordre <= 20)){
        AffichageCarre(carre,ordre);
    }
    Free_carre(carre,ordre);
    carreother(algoPermutation,algoCarre);
}

/* Construction par l'algorithme LUX*/
void algoLUX(){
    int ordre, debut, pas;
    int ** carre = NULL;
    printf("Choisir un ordre divisible par 2 mais pas divisible par 4 , l'ordre superieur à 20 n'est pas affichable \n");
    scanf("%d", &ordre);
    
    if((ordre%4 == 0) || (ordre%2 == 1)){
        printf("l'ordre ne doit être divisible par 4 mais divisible que par 2\n");
        algoLUX();
        
    }
    
    printf("choisir le debut du carre\n");
    scanf("%d",&debut);

    printf("choisir le nombre de pas\n");
    scanf("%d",&pas);
    
    carre = LUX(ordre, pas, debut);
    printf("carre_LUX d'ordre %d et commence par %d avec %d\n",ordre, debut, pas);
    carre_est_magique(carre, ordre);
    
    if( (ordre >= 3) && (ordre <= 20)){
        AffichageCarre(carre,ordre);
    }
    Free_carre(carre,ordre);
    carreother(algoLUX,algoCarre);
}

/* choisir un carre siamois*/
int ** choixImpairOperation2(int ordre){
    int choix, debut, pas;
    int ** carre = NULL;
    
    printf("choisir le debut du carre\n");
    scanf("%d",&debut);
    
    printf("choisir le nombre de pas\n");
    scanf("%d",&pas);
    
    printf("1 : carre siamois Nord-Est : commence au milieu premiere ligne\n");
    printf("2 : carre siamois Nord-Est : commence au milieu derniere colonne\n");
    printf("3 : carre siamois Sud-Est : commence au milieu derniere ligne\n" );
    printf("4 : carre siamois Sud-Est : commence au milieu derniere colonne\n");
    printf("5 : carre siamois Nord-Ouest : commence au milieu premiere ligne\n");
    printf("6 : carre siamois Nord-Ouest : commence au milieu premiere colonne\n");
    printf("7 : carre siamois Sud-Ouest : commence au milieu derniere ligne\n");
    printf("8 : carre siamois Sud-Ouest : commence au milieu premiere colonne\n");
    scanf("%d",&choix);
    
    switch(choix){
        case 1:
            carre = carre_siamois_ne_pl(ordre, pas, debut);
            printf("carre_siamois_ne_pl d'ordre %d et commence par %d avec %d\n",ordre, debut, pas);
            break;
        case 2:
            carre = carre_siamois_ne_dc(ordre, pas, debut);
            printf("carre_siamois_ne_dc d'ordre %d et commence par %d avec %d\n",ordre, debut, pas);
            break;
        case 3:
            carre = carre_siamois_se_dl(ordre, pas, debut);
            printf("carre_siamois_se_dl d'ordre %d et commence par %d avec %d\n",ordre, debut, pas);
            break;
        case 4:
            carre = carre_siamois_se_dc(ordre, pas, debut);
            printf("carre_siamois_se_dc d'ordre %d et commence par %d avec %d\n",ordre, debut, pas);
            break;
        case 5:
            carre = carre_siamois_no_pl(ordre, pas, debut);
            printf("carre_siamois_no_pl d'ordre %d et commence par %d avec %d\n",ordre, debut, pas);
            break;
        case 6:
            carre = carre_siamois_no_pc(ordre, pas, debut);
            printf("carre_siamois_no_pc d'ordre %d et commence par %d avec %d\n",ordre, debut, pas);
            break;
        case 7:
            carre = carre_siamois_so_dl(ordre, pas, debut);
            printf("carre_siamois_so_dl d'ordre %d et commence par %d avec %d\n",ordre, debut, pas);
            break;
        case 8:
            carre = carre_siamois_so_pc(ordre, pas, debut);
            printf("carre_siamois_so_pc d'ordre %d et commence par %d avec %d\n",ordre, debut, pas);
            break;
        default:
            printf("choix doit etre entre 1 et 8 inclus\n");
            carre = choixImpairOperation2(ordre);
    }
    carre_est_magique(carre,ordre);
    
    return carre;
}

/* choisir un carre d'ordre impair*/
int ** choixImpairOperation(int ordre){
    char choix;
    
    printf("1: Lozenge\n");
    printf("2 : Siamois\n");
    scanf("%c", &choix);
    
    int ** carre = NULL;
    switch(choix){
        case '1':
            carre = carre_lozenge(ordre);
            printf("carre_lozenge d'ordre %d\n",ordre);
            carre_est_magique(carre,ordre);
            break;
        case '2' :
            carre = choixImpairOperation2(ordre);
            break;
        default :
            printf("Vous pouvez utilisé soit 1 ou 2\n");
            carre = choixImpairOperation(ordre);
            
    }
    
    return carre;
}

/* pour recommencer avec les memes carres*/
int ** choixRecommencer(int ordre, int ** carre1, int ** carre2){
    char choix;
    int ** carre = NULL;
    printf("Voulez-vous utiliser les 2 memes carres :(o/...)\n");
    scanf("%c", &choix);
    
    if (choix == 'o'){
        int ** carre = NULL;
        carre = choixOperateur(carre1, carre2,ordre);
        carre = choixRecommencer(ordre, carre1, carre2);
    }
    return carre;
}
    
/* Operateurs*/
int ** choixOperateur(int ** carre1, int ** carre2, int ordre){
    char choix;
    int ** carre ;
    printf("1 : additionner\n");
    printf("2 : soustraction\n");
    printf("3 : multiplication\n");
    printf("4 : multiplication matricielle\n");
    scanf("%c", &choix);
    
    switch(choix){
        case '1':
            printf("Addition\n");
            carre = addCarre(carre1, carre2, ordre);
            
            break;
        case '2':
            printf("Soustraction\n");
            carre = souCarre(carre1, carre2, ordre);
            
            break;
        case '3':
            printf("Multiplication\n");
            carre = mulCarre(carre1, carre2, ordre);
            
            break;
        case '4':
            printf("Multiplication matricielle\n");
            carre = mulVecCarre(carre1, carre2, ordre);
            AffichageCarre(carre,ordre);
            break;
        default:
            printf("Vous pouvez utilisé  1, 2, 3 et 4");
            carre = choixOperateur(carre1, carre2,ordre);
    }
    
    return carre;
}
/* les opérations avec les 4 algorithmes de constructions du carre magique*/
void choixOperation(){
    int ordre;
    printf("Choisir l'ordre entre 3 et 20\n");
    scanf("%d", &ordre);
    
    /*recommence si ordre < 3 ou ordre > 20*/
    if ((ordre < 3) || (ordre > 20)){
        choixOperation();
    }
    int ** carre;
    int ** carre1;
    int ** carre2;
    
    
    /* Si nombre impaire*/
    if (ordre%2 == 1){
        printf("choix du premier carre\n");
        carre1 = choixImpairOperation(ordre);
        AffichageCarre(carre1,ordre);
        printf("choix du deuxieme carre\n");
        carre2 = choixImpairOperation(ordre);
        AffichageCarre(carre2,ordre);
    }
    
    /* si l'ordre divisible par 4 */
    else if (ordre%4 == 0){
        int debut, pas;
        printf("choix du premier carre\n");
        printf("choisir le debut du carre\n");
        scanf("%d",&debut);
        
        printf("choisir le nombre de pas\n");
        scanf("%d",&pas);
        
        carre1 = permu_diag(ordre, pas, debut);
        printf("carre_permutation d'ordre %d et commence par %d avec %d\n",ordre, debut, pas);
        carre_est_magique(carre1, ordre);
        AffichageCarre(carre1,ordre);
        
        printf("choix du deuxieme carre\n");
        printf("choisir le debut du carre\n");
        scanf("%d",&debut);
        
        printf("choisir le nombre de pas\n");
        scanf("%d",&pas);
        
        carre2 = permu_diag(ordre, pas, debut);
        printf("carre_permutation d'ordre %d et commence par %d avec %d\n",ordre, debut, pas);
        carre_est_magique(carre2, ordre);
        AffichageCarre(carre2,ordre);
    }
    
    /* si l'ordre divisible par 2 mais pas par 4*/
    else{
        int debut, pas;
        printf("choix du premier carre\n");
        printf("choisir le debut du carre\n");
        scanf("%d",&debut);
        
        printf("choisir le nombre de pas\n");
        scanf("%d",&pas);
        
        carre1 = LUX(ordre, pas, debut);
        printf("carre_lux d'ordre %d et commence par %d avec %d\n",ordre, debut, pas);
        carre_est_magique(carre1, ordre);
        AffichageCarre(carre1,ordre);
        
        printf("choix du deuxieme carre\n");
        printf("choisir le debut du carre\n");
        scanf("%d",&debut);
        
        printf("choisir le nombre de pas\n");
        scanf("%d",&pas);
        
        carre2 = LUX(ordre, pas, debut);
        printf("carre_lux d'ordre %d et commence par %d avec %d\n",ordre, debut, pas);
        carre_est_magique(carre2, ordre);
        AffichageCarre(carre2,ordre);
    }
    carre = choixOperateur(carre1, carre2, ordre);
    AffichageCarre(carre,ordre);
    carre = choixRecommencer(ordre, carre1, carre2);
    Free_carre(carre,ordre);
    Free_carre(carre1,ordre);
    Free_carre(carre2,ordre);
    
    carreother(choixOperation,algoCarre);
}

/* choix de l'algorithme de construction */
void algoCarre(){
    char choix;
    printf("1 : carre lozenge\n");
    printf("2 : carre siamois\n");
    printf("3 : carre permutation\n");
    printf("4 : carre LUX\n");
    printf("5 : operation de 2 carres de meme ordre\n");
    printf("0 : accueil\n");
    printf("# : revenir au precedent menu\n");
    printf("q : quitter\n");
    scanf("%c",&choix);
    
    switch(choix){
        case '1':
            printf("carre lozenge\n");
            algoLozenge();
            break;
        case '2' :
            printf("carre siamois\n");
            algoSiamois();
            break;
        case '3':
            printf("carre permutation diagonale\n");
            algoPermutation();
            break;
        case '4':
            printf("LUX\n");
            algoLUX();
            break;
        case '5':
            printf("operation de 2 carres de meme ordre\n");
            choixOperation();
            break;
        case '0':
            debut();
            break;
        case '#':
            choix_carre();
            break;
        case 'q':
            printf("Au revoir, a bientot\n");
            break;
        default:
            printf("Vous pouvez utilisé soit q, #, 0, 1, 2, 3, 4 et 5\n");
            algoCarre();
    }
}

/* Choix des carrés soit par ordre ou construction*/
void choix_carre(){
    char choix;
    
    printf("1 : choisir un ordre du carré magique\n");
    printf("2 : choisir l'algorithme de construction du carré\n");
    printf("0 : Accueil\n");
    printf("q : quitter\n\n");
    scanf("%c",&choix);
    
    
    
    
        switch(choix){
            case '1':
                printf("choix de l'ordre\n");
                ordreCarre();
                break;
            case '2' :
                printf("choix du carre\n");
                algoCarre();
                break;
            case '0':
                debut();
                break;
            case 'q':
                printf("Au revoir, a bientot\n");
                break;
            default:
                printf("Vous pouvez utilisé soit q, 0, 1 ou 2\n");
                choix_carre();
        }
    
}


/*Accueil du menu */
void debut(){
    char choix;
    printf("1 : test manuel des carrés magiques\n");
    printf("2 : test avec des exemples prédéfinis des carrés magiques\n");
    printf("q : quitter\n\n");
    scanf("%c",&choix);
    
    
    
    switch(choix){
        case '1':
            printf("manuel\n");
            choix_carre();
            break;
        case '2' :
            printf("Automatisé\n");
            test_predefinis();
            break;
        case 'q':
            printf("Au revoir, a bientot\n");
            break;
        default:
            printf("Vous pouvez utilisé soit q, 1 ou 2\n");
            debut();
       }
}

/* Affichage du menu complet */
void menu(){
    debut();
}
