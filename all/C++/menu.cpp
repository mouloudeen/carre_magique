#include "menu.h"

using namespace std;

/* Constructeur*/
Menu::Menu(){};


/* Affichage du carre de l'ordre entre 3 et 21*/
void Menu::Affichage_carre(int ordre){
    OutilCarre *test;
    
    
    
    
    /* ordre impair alors on utilise carre_lozenge*/
    if (ordre%2 == 1){
        Lozenge *carre11 ;
        carre11 = new Lozenge(ordre);
        carre11->carre_lozenge();
        test = new OutilCarre(carre11->GetOrdre(), carre11->GetCarre());
         test->carre_est_magique();
        carre11->AffichageCarre();
        
        
    }
    /* ordre divisible par 4 on utilise permutation diagonale*/
    else if (ordre%4 == 0){
        permutationDiagonale *carre22;
        carre22 = new permutationDiagonale(ordre);
        carre22->permu_diag(1,1);
        test = new OutilCarre(carre22->GetOrdre(), carre22->GetCarre());
         test->carre_est_magique();
        carre22->AffichageCarre();
        
    }
    /*sinon ordre est pair et n'est pas divisible par 4 on utilise lux*/
    else {
        lux *carre33;
        carre33 = new lux(ordre);
        carre33->LUX(1,1);
        test = new OutilCarre(carre33->GetOrdre(), carre33->GetCarre());
         test->carre_est_magique();
        carre33->AffichageCarre();
        
    }
}


/*Non affichage, il ya que le test si c'est bien un carré */
void Menu::nonAffichage_Carre(int ordre){
    OutilCarre *test;
    
    
    
    
    /* ordre impair alors on utilise carre_lozenge*/
    if (ordre%2 == 1){
        Lozenge *carre11 ;
        carre11 = new Lozenge(ordre);
        carre11->carre_lozenge();
        test = new OutilCarre(carre11->GetOrdre(), carre11->GetCarre());
         test->carre_est_magique();
        
        
        
    }
    /* ordre divisible par 4 on utilise permutation diagonale*/
    else if (ordre%4 == 0){
        permutationDiagonale *carre22;
        carre22 = new permutationDiagonale(ordre);
        carre22->permu_diag(1,1);
        test = new OutilCarre(carre22->GetOrdre(), carre22->GetCarre());
         test->carre_est_magique();
        
        
    }
    /*sinon ordre est pair et n'est pas divisible par 4 on utilise lux*/
    else {
        lux *carre33;
        carre33 = new lux(ordre);
        carre33->LUX(1,1);
        test = new OutilCarre(carre33->GetOrdre(), carre33->GetCarre());
         test->carre_est_magique();
        
        
    }
}


/* Pour recommencer ou non*/
void Menu::carreother(void (*fonction)(void)  , void (*precedent)(void)){
    char choix;
    cout<<"Est-ce que vous voulez recommencer: (o/n)" <<endl;
    scanf("%c", &choix);
    if ((choix != 'o') && (choix != 'n')){
        cout<<"Vous pouvez utiliser o ou n" <<endl;
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
void Menu::ordreCarre(){
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
void Menu::algoLozenge(){
    int ordre;
    cout <<"Choisir l'ordre impair du carre entre 3 à 20 sinon il n'y aura pas d'affichage du carre" << endl;
    scanf("%d", &ordre);
    
    if(ordre%2 != 1){
        cout <<"l'ordre doit être impair" << endl;
        algoLozenge();
    }
    
    Lozenge *carre;
    OutilCarre *test;
    carre = new Lozenge(ordre);
    carre->carre_lozenge();
    test = new OutilCarre(carre->GetOrdre(), carre->GetCarre());
    cout << "carre d'ordre " << ordre << " est magique : " << test->carre_est_magique() << endl;
    if( (ordre >= 3) && (ordre <= 20)){
        carre->AffichageCarre();
    }
    
    carreother(algoLozenge, algoCarre);
    
}

/* choisir parmi les 8 constructions du carre siamois*/
void Menu::choixSiamois(int ordre, int debut, int pas){
    int choix;
    Siamois * carre;
    carre = new Siamois(ordre);
    cout <<"1 : carre siamois Nord-Est : commence au milieu premiere ligne" <<endl;
    cout <<"2 : carre siamois Nord-Est : commence au milieu derniere colonne" <<endl;
    cout <<"3 : carre siamois Sud-Est : commence au milieu derniere ligne" <<endl;
    cout <<"4 : carre siamois Sud-Est : commence au milieu derniere colonne" <<endl;
    cout <<"5 : carre siamois Nord-Ouest : commence au milieu premiere ligne" <<endl;
    cout <<"6 : carre siamois Nord-Ouest : commence au milieu premiere colonne" <<endl;
    cout <<"7 : carre siamois Sud-Ouest : commence au milieu derniere ligne\n" <<endl;
    cout <<"8 : carre siamois Sud-Ouest : commence au milieu premiere colonne" <<endl;
    scanf("%d",&choix);
    
    switch(choix){
        case 1:
            carre->carre_siamois_ne_pl(pas, debut);
            cout <<"carre_siamois_ne_pl d'ordre "<< ordre << " et commence par  "<< debut << "  avec " << pas <<endl;
            break;
        case 2:
            carre->carre_siamois_ne_dc(pas, debut);
            cout <<"carre_siamois_ne_dc d'ordre "<< ordre << " et commence par   "<< debut << "   avec  " << pas <<endl;
            break;
        case 3:
            carre->carre_siamois_se_dl(pas, debut);
            cout <<"carre_siamois_se_dl d'ordre "<< ordre << " et commence par   "<< debut << "   avec  " << pas <<endl;
            break;
        case 4:
            carre->carre_siamois_se_dc(pas, debut);
            cout <<"carre_siamois_se_dc d'ordre "<< ordre << " et commence par   "<< debut << "   avec  " << pas <<endl;
            break;
        case 5:
            carre->carre_siamois_no_pl(pas, debut);
            cout <<"carre_siamois_no_pl d'ordre "<< ordre << " et commence par   "<< debut << "   avec  " << pas <<endl;
            break;
        case 6:
            carre->carre_siamois_no_pc(pas, debut);
            cout <<"carre_siamois_no_pc d'ordre "<< ordre << " et commence par   "<< debut << "   avec  " << pas <<endl;
            break;
        case 7:
            carre->carre_siamois_so_dl(pas, debut);
            cout <<"carre_siamois_so_dl d'ordre "<< ordre << " et commence par   "<< debut << "   avec  " << pas <<endl;
            break;
        case 8:
            carre->carre_siamois_so_pc(pas, debut);
            cout <<"carre_siamois_so_pc d'ordre "<< ordre << " et commence par   "<< debut << "   avec  " << pas <<endl;
            break;
        default:
            cout <<"choix doit etre entre 1 et 8 inclus" <<endl;
            choixSiamois(ordre, debut, pas);
    }
    OutilCarre *test;
    
    test = new OutilCarre(carre->GetOrdre(), carre->GetCarre());
    cout << "carre d'ordre " << ordre << " est magique : " << test->carre_est_magique() << endl;
    if( (ordre >= 3) && (ordre <= 20)){
        carre->AffichageCarre();
    }
    
}

/* construction par l'algorithme siamois*/
void Menu::algoSiamois(){
    int ordre, debut, pas;
    cout <<"Choisir l'ordre impair, l'ordre superieur à 20 n'est pas affichable" << endl;
    scanf("%d",&ordre);
    
    if (ordre%2 !=1){
        cout <<"l'ordre doit être impair" << endl;
        algoSiamois();
    }
    cout <<"choisir le debut du carre" << endl;
    scanf("%d",&debut);

    cout <<"choisir le nombre de pas" << endl;
    scanf("%d",&pas);
    
    choixSiamois(ordre, debut, pas);
    carreother(algoSiamois,algoCarre);
}

/* Construction par l'algorithme Permutation des diagonales*/
void Menu::algoPermutation(){
    int ordre, debut, pas;
    
    cout <<"Choisir un ordre divisible par 4 , l'ordre superieur à 20 n'est pas affichable" << endl;
    scanf("%d", &ordre);
    
    if(ordre%4 != 0){
        cout <<"l'ordre doit être divisible par 4" << endl;
        algoPermutation();
    }
    
    cout <<"choisir le debut du carre" << endl;
    scanf("%d",&debut);

    cout <<"choisir le nombre de pas" << endl;
    scanf("%d",&pas);
    
    permutationDiagonale *carre = new permutationDiagonale(ordre);
    
    carre->permu_diag(pas, debut);
    cout <<"carre_permutation d'ordre " << ordre << " et commence par " << debut << " avec  "<< pas << endl;
    OutilCarre *test;
    
    test = new OutilCarre(carre->GetOrdre(), carre->GetCarre());
    cout << "carre d'ordre " << ordre << " est magique : " << test->carre_est_magique() << endl;
    
    if( (ordre >= 3) && (ordre <= 20)){
        carre->AffichageCarre();
    }
    
    carreother(algoPermutation,algoCarre);
}

/* Construction par l'algorithme LUX*/
void Menu::algoLUX(){
    int ordre, debut, pas;
    
    cout <<"Choisir un ordre divisible par 2 mais pas divisible par 4 , l'ordre superieur à 20 n'est pas affichable" << endl;
    scanf("%d", &ordre);
    
    if((ordre%4 == 0) || (ordre%2 == 1)){
        cout <<"l'ordre ne doit être divisible par 4 mais divisible que par 2" << endl;
        algoLUX();
        
    }
    
    cout <<"choisir le debut du carre" << endl;
    scanf("%d",&debut);

    cout <<"choisir le nombre de pas" << endl;
    scanf("%d",&pas);
    
    lux *carre = new lux(ordre);
    carre->LUX(pas, debut);
    cout <<"carre_permutation d'ordre " << ordre << " et commence par " << debut << " avec  "<< pas << endl;
    OutilCarre *test;
    
    test = new OutilCarre(carre->GetOrdre(), carre->GetCarre());
    cout << "carre d'ordre " << ordre << " est magique : " << test->carre_est_magique() << endl;
    
    if( (ordre >= 3) && (ordre <= 20)){
        carre->AffichageCarre();
    }
    carreother(algoLUX,algoCarre);
}

/* choisir un carre siamois*/
int ** Menu::choixImpairOperation2(int ordre){
    int choix, debut, pas;
    int ** tab = NULL;
    
    printf("choisir le debut du carre\n");
    scanf("%d",&debut);
    
    printf("choisir le nombre de pas\n");
    scanf("%d",&pas);
    
    Siamois * carre;
    carre = new Siamois(ordre);
    cout <<"1 : carre siamois Nord-Est : commence au milieu premiere ligne" <<endl;
    cout <<"2 : carre siamois Nord-Est : commence au milieu derniere colonne" <<endl;
    cout <<"3 : carre siamois Sud-Est : commence au milieu derniere ligne" <<endl;
    cout <<"4 : carre siamois Sud-Est : commence au milieu derniere colonne" <<endl;
    cout <<"5 : carre siamois Nord-Ouest : commence au milieu premiere ligne" <<endl;
    cout <<"6 : carre siamois Nord-Ouest : commence au milieu premiere colonne" <<endl;
    cout <<"7 : carre siamois Sud-Ouest : commence au milieu derniere ligne\n" <<endl;
    cout <<"8 : carre siamois Sud-Ouest : commence au milieu premiere colonne" <<endl;
    scanf("%d",&choix);
    
    switch(choix){
        case 1:
            carre->carre_siamois_ne_pl(pas, debut);
            cout <<"carre_siamois_ne_pl d'ordre "<< ordre << " et commence par  "<< debut << "  avec " << pas <<endl;
            break;
        case 2:
            carre->carre_siamois_ne_dc(pas, debut);
            cout <<"carre_siamois_ne_dc d'ordre "<< ordre << " et commence par   "<< debut << "   avec  " << pas <<endl;
            break;
        case 3:
            carre->carre_siamois_se_dl(pas, debut);
            cout <<"carre_siamois_se_dl d'ordre "<< ordre << " et commence par   "<< debut << "   avec  " << pas <<endl;
            break;
        case 4:
            carre->carre_siamois_se_dc(pas, debut);
            cout <<"carre_siamois_se_dc d'ordre "<< ordre << " et commence par   "<< debut << "   avec  " << pas <<endl;
            break;
        case 5:
            carre->carre_siamois_no_pl(pas, debut);
            cout <<"carre_siamois_no_pl d'ordre "<< ordre << " et commence par   "<< debut << "   avec  " << pas <<endl;
            break;
        case 6:
            carre->carre_siamois_no_pc(pas, debut);
            cout <<"carre_siamois_no_pc d'ordre "<< ordre << " et commence par   "<< debut << "   avec  " << pas <<endl;
            break;
        case 7:
            carre->carre_siamois_so_dl(pas, debut);
            cout <<"carre_siamois_so_dl d'ordre "<< ordre << " et commence par   "<< debut << "   avec  " << pas <<endl;
            break;
        case 8:
            carre->carre_siamois_so_pc(pas, debut);
            cout <<"carre_siamois_so_pc d'ordre "<< ordre << " et commence par   "<< debut << "   avec  " << pas <<endl;
            break;
        default:
            cout <<"choix doit etre entre 1 et 8 inclus" <<endl;
            tab = choixImpairOperation2(ordre);
    }
    OutilCarre *test;
    
    test = new OutilCarre(carre->GetOrdre(), carre->GetCarre());
    cout << "carre d'ordre " << ordre << " est magique : " << test->carre_est_magique() << endl;
    carre->AffichageCarre();
    tab = carre->GetCarre();
    return tab;
}


/* choisir un carre d'ordre impair*/
int ** Menu::choixImpairOperation(int ordre){
    char choix;
    
    cout <<"1: Lozenge"<< endl;
    cout <<"2 : Siamois"<< endl;
    scanf("%c", &choix);
    
    
    
    int ** tab = NULL;
    switch(choix){
        case '1':
        {
            OutilCarre * test;
            Lozenge *carre = new Lozenge(ordre);
            carre->carre_lozenge();
            cout <<"carre_lozenge d'ordre " << ordre << endl;
            test = new OutilCarre(carre->GetOrdre(), carre->GetCarre());
            cout << "carre d'ordre " << ordre << " est magique : " << test->carre_est_magique() << endl;
            carre->AffichageCarre();
            tab = carre->GetCarre();
            break;
        }
        case '2' :
        {
            tab = choixImpairOperation2(ordre);
            break;
        }
        default :
            cout <<"Vous pouvez utilisé soit 1 ou 2"<< endl;
            tab = choixImpairOperation(ordre);
            
    }
    
    return tab;
}


/* pour recommencer avec les memes carres*/
void Menu::choixRecommencer(int ordre, int ** tab1, int ** tab2){
    char choix;
    
    int ** carre = NULL;
    cout<< "Voulez-vous utiliser les 2 memes carres :(o/n)" <<endl;
    scanf("%c", &choix);
    
    if ((choix != 'o') && (choix != 'n')){
        cout<<"Vous pouvez utiliser o ou n" <<endl;
        choixRecommencer(ordre, tab1, tab2);
    }
    switch(choix){
        case 'o':{
            Carre * carre1 = new Carre(ordre);
            carre1->SetCarre(tab1);
            
            Carre * carre2 = new Carre(ordre);
            carre2->SetCarre(tab2);
            
            carre1->choixOperateur(carre2);
            carre1->AffichageCarre();
            
            choixRecommencer(ordre, tab1, tab2);
            break;
        }
        case 'n':
            
            break;
        
    }
    
    
   
}


/* les opérations avec les 4 algorithmes de constructions du carre magique*/
void Menu::choixOperation(){
    int ordre;
    int ** tab1 =NULL;
    int ** tab2 = NULL;
    cout <<"Choisir l'ordre entre 3 et 20"<< endl;
    scanf("%d", &ordre);
    
    /*recommence si ordre < 3 ou ordre > 20*/
    if ((ordre < 3) || (ordre > 20)){
        choixOperation();
    }
    
    
    
    /* Si nombre impaire*/
    if (ordre%2 == 1){
        Carre * carre1 = new Carre(ordre);
        Carre * carre2 = new Carre(ordre);
        cout <<"choix du premier carre"<< endl;
        tab1 = choixImpairOperation(ordre);
        carre1->SetCarre(tab1);
        
        cout <<"choix du deuxieme carre"<< endl;
        tab2 = choixImpairOperation(ordre);
        carre2->SetCarre(tab2);
        
        carre1->choixOperateur(carre2);
        carre1->AffichageCarre();
    }
    
    /* si l'ordre divisible par 4 */
    else if (ordre%4 == 0){
        OutilCarre *test;
        permutationDiagonale *carre1 = new permutationDiagonale(ordre);
        int debut, pas;
        cout <<"choix du premier carre"<< endl;
        cout <<"choisir le debut du carre"<< endl;
        scanf("%d",&debut);
        
        cout <<"choisir le nombre de pas"<< endl;
        scanf("%d",&pas);
        
        carre1->permu_diag(pas, debut);
        cout <<"carre_permutation d'ordre " << ordre << " et commence par " << debut << " avec  "<< pas << endl;
        
        test = new OutilCarre(carre1->GetOrdre(), carre1->GetCarre());
        cout << "carre d'ordre " << ordre << " est magique : " << test->carre_est_magique() << endl;
        carre1->AffichageCarre();
        tab1 = carre1->GetCarre();
        
        permutationDiagonale *carre2 = new permutationDiagonale(ordre);
        cout <<"choix du deuxieme carre"<< endl;
        cout <<"choisir le debut du carre"<< endl;
        scanf("%d",&debut);
        
        cout <<"choisir le nombre de pas"<< endl;
        scanf("%d",&pas);
        
        carre2->permu_diag(pas, debut);
        cout <<"carre_permutation d'ordre " << ordre << " et commence par " << debut << " avec  "<< pas << endl;
        
        test = new OutilCarre(carre2->GetOrdre(), carre2->GetCarre());
        cout << "carre d'ordre " << ordre << " est magique : " << test->carre_est_magique() << endl;
        carre2->AffichageCarre();
        tab2 = carre2->GetCarre();
        
        carre1->choixOperateur(carre2);
        carre1->AffichageCarre();
    }
    
    /* si l'ordre divisible par 2 mais pas par 4*/
    else{
        OutilCarre *test;
        lux *carre1 = new lux(ordre);
        int debut, pas;
        cout <<"choix du premier carre"<< endl;
        cout <<"choisir le debut du carre"<< endl;
        scanf("%d",&debut);
        
        cout <<"choisir le nombre de pas"<< endl;
        scanf("%d",&pas);
        
        carre1->LUX(pas, debut);
        cout <<"carre_lux d'ordre " << ordre << " et commence par " << debut << " avec  "<< pas << endl;
        
        test = new OutilCarre(carre1->GetOrdre(), carre1->GetCarre());
        cout << "carre d'ordre " << ordre << " est magique : " << test->carre_est_magique() << endl;
        carre1->AffichageCarre();
        tab1 = carre1->GetCarre();
        
        lux *carre2 = new lux(ordre);
        cout <<"choix du deuxieme carre"<< endl;
        cout <<"choisir le debut du carre"<< endl;
        scanf("%d",&debut);
        
        cout <<"choisir le nombre de pas"<< endl;
        scanf("%d",&pas);
        
        carre2->LUX(pas, debut);
        cout <<"carre_lux d'ordre " << ordre << " et commence par " << debut << " avec  "<< pas << endl;
        
        test = new OutilCarre(carre2->GetOrdre(), carre2->GetCarre());
        cout << "carre d'ordre " << ordre << " est magique : " << test->carre_est_magique() << endl;
        carre2->AffichageCarre();
        tab2 = carre2->GetCarre();
        
        carre1->choixOperateur(carre2);
        carre1->AffichageCarre();
    }
    
    
    choixRecommencer(ordre, tab1, tab2);
    carreother(choixOperation,algoCarre);
}


/* choix de l'algorithme de construction */
void Menu::algoCarre(){
    char choix;
    cout <<"1 : carre lozenge" << endl;
    cout <<"2 : carre siamois" << endl;
    cout <<"3 : carre permutation" << endl;
    cout <<"4 : carre LUX" << endl;
    cout <<"5 : operation de 2 carres de meme ordre" << endl;
    cout <<"0 : accueil" << endl;
    cout <<"# : revenir au precedent menu" << endl;
    cout <<"q : quitter" << endl << endl;
    scanf("%c",&choix);
    
    switch(choix){
        case '1':
            cout <<"carre lozenge" << endl;
            algoLozenge();
            break;
        case '2' :
            cout <<"carre siamois" << endl;
             algoSiamois();
            break;
        case '3':
            cout <<"carre permutation diagonale" << endl;
             algoPermutation();
            break;
        case '4':
            cout <<"LUX" << endl;
             algoLUX();
            break;
        case '5':
            cout <<"operation de 2 carres de meme ordre" << endl;
             choixOperation();
            break;
        case '0':
            debut();
            break;
        case '#':
            choix_carre();
            break;
        case 'q':
            cout <<"Au revoir, a bientot" << endl;
            break;
        default:
            cout <<"Vous pouvez utilisé soit q, #, 0, 1, 2, 3, 4 et 5" << endl;
            algoCarre();
    }
}





/* Choix des carrés soit par ordre ou construction*/
void Menu::choix_carre(){
    char choix;
    
    cout <<"1 : choisir un ordre du carré magique" << endl;
    cout <<"2 : choisir l'algorithme de construction du carré" << endl;
    cout <<"0 : Accueil" << endl;
    cout <<"q : quitter" << endl << endl;
    scanf("%c",&choix);
    
    
    
    
        switch(choix){
            case '1':
                cout <<"choix de l'ordre" << endl;
                ordreCarre();
                break;
            case '2' :
                cout <<"choix du carre" << endl;
                algoCarre();
                break;
            case '0':
                debut();
                break;
            case 'q':
                cout <<"Au revoir, a bientot" << endl;
                break;
            default:
                cout <<"Vous pouvez utilisé soit q, 0, 1 ou 2" << endl;
                choix_carre();
        }
    
}


/* Exemple predefinis*/
void Menu::test_predefinis(){
    cout <<"On teste les ordres de 3 à 20" << endl;
    for (int i = 3; i < 21; i++){
        Affichage_carre(i);
        
    }
    
    cout <<"Grand nombre aléatoire" << endl;
    int L[] = {5301, 7339, 9591, 3687, 7243, 7630, 3986, 4770, 5498, 9746, 2380, 4472, 8312, 6244, 6088};
    
    for (int i = 0; i < 15; i++){
        nonAffichage_Carre(L[i]);
        
    }
    
    cout<<endl <<endl;
    
    cout <<"On teste maintenant quelque calcul de carre pour voir si le résultat donne un carré magique"<<endl;

    cout <<"on teste d'abord avec les 2 algo des ordres impaires"<<endl;
    
    OutilCarre *test;
    int ordre = 3;
    cout << "carre lozenge" <<endl;
    Lozenge *carre1 = new Lozenge(ordre);
    carre1->carre_lozenge();
    test = new OutilCarre(carre1->GetOrdre(), carre1->GetCarre());
    test->carre_est_magique();
    carre1->AffichageCarre();
    
    
    cout << "carre siamois" <<endl;
    Siamois *carre2 = new Siamois(ordre);
    carre2->carre_siamois_ne_pl(2,2);
    test = new OutilCarre(carre2->GetOrdre(), carre2->GetCarre());
    test->carre_est_magique();
    carre2->AffichageCarre();
    
    
    cout << "addition" <<endl;
    carre1->addCarre(carre2);
    test = new OutilCarre(carre1->GetOrdre(), carre1->GetCarre());
    test->carre_est_magique();
    carre1->AffichageCarre();
    
    
    carre1 = new Lozenge(ordre);
    carre1->carre_lozenge();
    cout << "soustraction" <<endl;
    carre1->souCarre(carre2);
    test = new OutilCarre(carre1->GetOrdre(), carre1->GetCarre());
    test->carre_est_magique();
    carre1->AffichageCarre();
    
    
    carre1 = new Lozenge(ordre);
    carre1->carre_lozenge();
    cout << "multiplication" <<endl;
    carre1->mulCarre(carre2);
    test = new OutilCarre(carre1->GetOrdre(), carre1->GetCarre());
    test->carre_est_magique();
    carre1->AffichageCarre();
    
    
    carre1 = new Lozenge(ordre);
    carre1->carre_lozenge();
    cout << "multiplication vectorielle" <<endl;
    carre1->mulVecCarre(carre2);
    test = new OutilCarre(carre1->GetOrdre(), carre1->GetCarre());
    test->carre_est_magique();
    carre1->AffichageCarre();
    
    
    cout << " on teste avec l algo des ordres pairement paire" <<endl;
    ordre = 4;
    cout << "carre permutation diagonale" <<endl;
    permutationDiagonale *carre3 = new permutationDiagonale(ordre);
    carre3->permu_diag(1,1);
    test = new OutilCarre(carre3->GetOrdre(), carre3->GetCarre());
    test->carre_est_magique();
    carre3->AffichageCarre();
    
    
    cout << "carre siamois" <<endl;
    permutationDiagonale *carre4 = new permutationDiagonale(ordre);
    carre4->permu_diag(3,2);
    test = new OutilCarre(carre4->GetOrdre(), carre4->GetCarre());
    test->carre_est_magique();
    carre4->AffichageCarre();
    
    
    cout << "addition" <<endl;
    carre3->addCarre(carre4);
    test = new OutilCarre(carre3->GetOrdre(), carre3->GetCarre());
    test->carre_est_magique();
    carre3->AffichageCarre();
    
    
    carre3 = new permutationDiagonale(ordre);
    carre3->permu_diag(1,1);
    cout << "soustraction" <<endl;
    carre3->souCarre(carre4);
    test = new OutilCarre(carre3->GetOrdre(), carre3->GetCarre());
    test->carre_est_magique();
    carre3->AffichageCarre();
    
    
    carre3 = new permutationDiagonale(ordre);
    carre3->permu_diag(1,1);
    cout << "multiplication" <<endl;
    carre3->mulCarre(carre4);
    carre3->AffichageCarre();
    test = new OutilCarre(carre3->GetOrdre(), carre3->GetCarre());
    test->carre_est_magique();
    
    carre3 = new permutationDiagonale(ordre);
    carre3->permu_diag(1,1);
    cout << "multiplication vectorielle" <<endl;
    carre3->mulVecCarre(carre4);
    test = new OutilCarre(carre3->GetOrdre(), carre3->GetCarre());
    test->carre_est_magique();
    carre3->AffichageCarre();
    
    
    
    cout << "On teste avec l algo des ordres pairement impaire" <<endl;
    ordre = 6;
    cout << "carre lux" <<endl;
    lux *carre5 = new lux(ordre);
    carre5->LUX(1,1);
    test = new OutilCarre(carre5->GetOrdre(), carre5->GetCarre());
    test->carre_est_magique();
    carre5->AffichageCarre();
   
    
    cout << "carre lux" <<endl;
    lux *carre6 = new lux(ordre);
    carre6->LUX(3,2);
    test = new OutilCarre(carre6->GetOrdre(), carre6->GetCarre());
    test->carre_est_magique();
    carre6->AffichageCarre();
    
    
    cout << "addition" <<endl;
    carre5->addCarre(carre6);
    test = new OutilCarre(carre5->GetOrdre(), carre5->GetCarre());
    test->carre_est_magique();
    carre5->AffichageCarre();
    
    
    carre5 = new lux(ordre);
    carre5->LUX(1,1);
    cout << "soustraction" <<endl;
    carre5->souCarre(carre6);
    test = new OutilCarre(carre5->GetOrdre(), carre5->GetCarre());
    test->carre_est_magique();
    carre5->AffichageCarre();
    
    
    carre5 = new lux(ordre);
    carre5->LUX(1,1);
    cout << "multiplication" <<endl;
    carre5->mulCarre(carre6);
    test = new OutilCarre(carre5->GetOrdre(), carre5->GetCarre());
    test->carre_est_magique();
    carre5->AffichageCarre();
    
    
    carre5 = new lux(ordre);
    carre5->LUX(1,1);
    cout << "multiplication vectorielle" <<endl;
    carre5->mulVecCarre(carre6);
    test = new OutilCarre(carre5->GetOrdre(), carre5->GetCarre());
    test->carre_est_magique();
    carre5->AffichageCarre();
    
    carreother(test_predefinis, debut);
    
}

/*Accueil du menu */
void Menu::debut(){
    char choix;
    cout <<"1 : test manuel des carrés magiques" << endl;
    cout <<"2 : test avec des exemples prédéfinis des carrés magiques" << endl;
    cout <<"q : quitter" << endl <<endl;
    scanf("%c",&choix);
    
    
    
    switch(choix){
        case '1':
            cout <<"manuel" << endl;
            choix_carre();
            break;
        case '2' :
            cout <<"Automatisé" << endl;
            test_predefinis();
            break;
        case 'q':
            cout <<"Au revoir, a bientot" << endl;
            break;
        default:
            cout <<"Vous pouvez utilisé soit q, 1 ou 2" << endl;
            debut();
       }
}

/* Affichage du menu complet */
void Menu::menu(){
    debut();
}

/* Destructeur*/
Menu::~Menu(){}
