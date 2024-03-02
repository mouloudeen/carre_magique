import carre_lozenge
import carre_siamois
import permutation_diagonale
import lux
import outil_carre_magique

#Affichage du carre de l'ordre entre 3 et 21
def affichage_Carre(i):
        # i impair alors on utilise carre_lozenge
        if (i%2 == 1):
            carre = carre_lozenge.carre_lozenge(i)
            print(f"carre lozenge d'ordre {i} est {outil_carre_magique.carre_is_magic(carre,i)}")
            for j in range(i):
                print(f"{carre[j]}")
            
     
        # i divisible par 4 on utilise permutation diagonale
        elif (i%4 == 0):
            carre = permutation_diagonale.permu_diag(i,1,1)
            print(f"carre permutation diagonale d'ordre {i} est {outil_carre_magique.carre_is_magic(carre,i)}")
            for j in range(i):
                print(f"{carre[j]}")
           
    
        #sinon i est pair et n'est pas divisible par 4 on utilise lux
        else :
            carre = lux.LUX(i,1,1)
            print(f"carre LUX d'ordre {i} est {outil_carre_magique.carre_is_magic(carre,i)}")
            for j in range(i):
                print(f"{carre[j]}")
            

def nonAffichage_Carre(i):
        # i impair alors on utilise carre_lozenge
        if (i%2 == 1):
            carre = carre_lozenge.carre_lozenge(i)
            print(f"carre lozenge d'ordre {i} est {outil_carre_magique.carre_is_magic(carre,i)}")
            
            
        # i divisible par 4 on utilise permutation diagonale
        elif (i%4 == 0):
            carre = permutation_diagonale.permu_diag(i,1,1)
            print(f"carre permutation diagonale d'ordre {i} est {outil_carre_magique.carre_is_magic(carre,i)}")
            
           
        #sinon i est pair et n'est pas divisible par 4 on utilise lux
        else :
            carre = lux.LUX(i,1,1)
            print(f"carre LUX d'ordre {i} est {outil_carre_magique.carre_is_magic(carre,i)}")
            
    

# exemple prédéfinis
def test_predefinis():
    print("On teste les ordres de 3 à 20")
    for i in range(3,21):
        affichage_Carre(i)
            

    print(" Grand nombre aléatoire")
    L = [5301, 7339, 9591, 3687, 7243, 7630, 3986, 4770, 5498, 9746, 2380, 4472, 8312, 6244, 6088]

    for i in L:
        nonAffichage_Carre(i)

    print("On teste maintenant quelque calcul de carre pour voir si le résultat donne un carré magique\n")

    print(" on teste d'abord avec les 2 algo des ordres impaires\n")
    n = 3
    carre1 = carre_lozenge.carre_lozenge(n)
    carre2 = carre_siamois.carre_siamois_se_dc(n,1,1)
    carre3 = outil_carre_magique.addCarre(carre1,carre2,n)
    carre4 = outil_carre_magique.souCarre(carre1,carre2,n)
    carre5 = outil_carre_magique.mulCarre(carre1,carre2,n)
    carre6 = outil_carre_magique.mulVecCarre(carre1,carre2,n)


    print("carre lozenge : ")
    for j in range(n):
        print(f" {carre1[j]}")
    print(f"carre est magique : {outil_carre_magique.carre_is_magic(carre1,n)}")
    
    print("carre siamois_se_dc : ")
    for j in range(n):
        print(f" {carre2[j]}")
    print(f"carre est magique : {outil_carre_magique.carre_is_magic(carre2,n)}")

    print("addition des 2 carrés : ")
    for j in range(n):
        print(f" {carre3[j]}")
    print(f"carre est magique : {outil_carre_magique.carre_is_magic(carre3,n)}")

    print("soustraction des 2 carrés : ")
    for j in range(n):
        print(f" {carre4[j]}")
    print(f"carre est magique : {outil_carre_magique.carre_is_magic(carre4,n)}")

    print("multiplication des 2 carrés : ")
    for j in range(n):
        print(f" {carre5[j]}")
    print(f"carre est magique : {outil_carre_magique.carre_is_magic(carre5,n)}")

    print("multiplication vectorielle des 2 carrés : ")
    for j in range(n):
        print(f" {carre6[j]}")
    print(f"carre est magique : {outil_carre_magique.carre_is_magic(carre6,n)}")


    print(" on teste avec l algo des ordres pairement paire\n")

    n = 4
    carre1 = permutation_diagonale.permu_diag(n,1,1)
    carre2 = permutation_diagonale.permu_diag(n,3,2)
    carre3 = outil_carre_magique.addCarre(carre1,carre2,n)
    carre4 = outil_carre_magique.souCarre(carre1,carre2,n)
    carre5 = outil_carre_magique.mulCarre(carre1,carre2,n)
    carre6 = outil_carre_magique.mulVecCarre(carre1,carre2,n)


    print("carre permutation diagonale : ")
    for j in range(n):
        print(f" {carre1[j]}")
    print(f"carre est magique : {outil_carre_magique.carre_is_magic(carre1,n)}")
    
    print("carre permutation diagonale : ")
    for j in range(n):
        print(f" {carre2[j]}")
    print(f"carre est magique : {outil_carre_magique.carre_is_magic(carre2,n)}")

    print("addition des 2 carrés : ")
    for j in range(n):
        print(f" {carre3[j]}")
    print(f"carre est magique : {outil_carre_magique.carre_is_magic(carre3,n)}")

    print("soustraction des 2 carrés : ")
    for j in range(n):
        print(f" {carre4[j]}")
    print(f"carre est magique : {outil_carre_magique.carre_is_magic(carre4,n)}")

    print("multiplication des 2 carrés : ")
    for j in range(n):
        print(f" {carre5[j]}")
    print(f"carre est magique : {outil_carre_magique.carre_is_magic(carre5,n)}")

    print("multiplication vectorielle des 2 carrés : ")
    for j in range(n):
        print(f" {carre6[j]}")
    print(f"carre est magique : {outil_carre_magique.carre_is_magic(carre6,n)}")


    print(" on teste avec l algo des ordres pairement impaire\n")

    n = 6
    carre1 = lux.LUX(n,1,1)
    carre2 = lux.LUX(n,3,2)
    carre3 = outil_carre_magique.addCarre(carre1,carre2,n)
    carre4 = outil_carre_magique.souCarre(carre1,carre2,n)
    carre5 = outil_carre_magique.mulCarre(carre1,carre2,n)
    carre6 = outil_carre_magique.mulVecCarre(carre1,carre2,n)


    print("carre LUX : ")
    for j in range(n):
        print(f" {carre1[j]}")
    print(f"carre est magique : {outil_carre_magique.carre_is_magic(carre1,n)}")
    
    print("carre LUX : ")
    for j in range(n):
        print(f" {carre2[j]}")
    print(f"carre est magique : {outil_carre_magique.carre_is_magic(carre2,n)}")

    print("addition des 2 carrés : ")
    for j in range(n):
        print(f" {carre3[j]}")
    print(f"carre est magique : {outil_carre_magique.carre_is_magic(carre3,n)}")

    print("soustraction des 2 carrés : ")
    for j in range(n):
        print(f" {carre4[j]}")
    print(f"carre est magique : {outil_carre_magique.carre_is_magic(carre4,n)}")

    print("multiplication des 2 carrés : ")
    for j in range(n):
        print(f" {carre5[j]}")
    print(f"carre est magique : {outil_carre_magique.carre_is_magic(carre5,n)}")

    print("multiplication vectorielle des 2 carrés : ")
    for j in range(n):
        print(f" {carre6[j]}")
    print(f"carre est magique : {outil_carre_magique.carre_is_magic(carre6,n)}")

# Pour se deplacer dans le menu
def non_ordreCarre(precedent):
    print("# : revenir au precedent menu")
    print("0 : accueil")
    print("q : quitter")
    n = input()
    match(n):
        case '#':
            precedent()
        case '0':
            debut()
        case 'q':
            print("au revoir, a bientôt")
        case other:
            print("Vous pouvez utilisé soit #, 0 ou q")
            non_ordreCarre()


# Pour recommencer ou non
def carreother(fonction, precedent):
    print("Est-ce que vous voulez recommencer: (oui/non)")
    n = input()
    match n:
        case "oui":
            fonction()
        case "non":
            non_ordreCarre(precedent)
        case other:
            print("soit oui ou non")
            carreother(fonction, precedent)

def ordreCarre():
    print("Choisir l'ordre du carre entre 3 à 20 sinon il n'y aura pas d'affichage du carre")
    n = input()
    if  3 <= int(n) and int(n) <= 20:
        affichage_Carre(int(n))
    else:
        nonAffichage_Carre(int(n))
    carreother(ordreCarre,choix_carre)

# construction par l'algorithme Lozenge
def algoLozenge():
    print("Choisir l'ordre impair du carre entre 3 à 20 sinon il n'y aura pas d'affichage du carre")
    n = input()
    
    if int(n)%2 != 1:
        print("l'ordre doit être impair")
        algoLozenge()
    else:
        carre = carre_lozenge.carre_lozenge(int(n))
        print(f"carre lozenge d'ordre {n} est {outil_carre_magique.carre_is_magic(carre,int(n))}")
        if  3 <= int(n) and int(n) <= 20:
            for j in range(int(n)):
                print(f" {carre[j]}")
    
        carreother(algoLozenge,algoCarre)


# choisir parmi les 8 constructions du carre siamois
def choixSiamois(n, k, pas):
    print("1 : carre siamois Nord-Est : commence au milieu premiere ligne")
    print("2 : carre siamois Nord-Est : commence au milieu derniere colonne")
    print("3 : carre siamois Sud-Est : commence au milieu derniere ligne" )
    print("4 : carre siamois Sud-Est : commence au milieu derniere colonne")
    print("5 : carre siamois Nord-Ouest : commence au milieu premiere ligne")
    print("6 : carre siamois Nord-Ouest : commence au milieu premiere colonne")
    print("7 : carre siamois Sud-Ouest : commence au milieu derniere ligne")
    print("8 : carre siamois Sud-Ouest : commence au milieu premiere colonne")
    choix = input()
    match(choix):
        case '1':
            carre = carre_siamois.carre_siamois_ne_pl(n, pas, k)
            print(f"carre_siamois_ne_pl d'ordre {n} et commence par {k} avec {pas} est {outil_carre_magique.carre_is_magic(carre,int(n))}")
            
        case '2':
            carre = carre_siamois.carre_siamois_ne_dc(n, pas, k)
            print(f"carre_siamois_ne_dc d'ordre {n} et commence par {k} avec {pas} est {outil_carre_magique.carre_is_magic(carre,int(n))}")
            
        case '3':
            carre = carre_siamois.carre_siamois_se_dl(n, pas, k)
            print(f"carre_siamois_se_dl d'ordre {n} et commence par {k} avec {pas} est {outil_carre_magique.carre_is_magic(carre,int(n))}")
        case '4':
            carre = carre_siamois.carre_siamois_se_dc(n, pas, k)
            print(f"carre_siamois_se_dc d'ordre {n} et commence par {k} avec {pas} est {outil_carre_magique.carre_is_magic(carre,int(n))}")
        case '5':
            carre = carre_siamois.carre_siamois_no_pl(n, pas, k)
            print(f"carre_siamois_no_pl d'ordre {n} et commence par {k} avec {pas} est {outil_carre_magique.carre_is_magic(carre,int(n))}")
        case '6':
            carre = carre_siamois.carre_siamois_no_pc(n, pas, k)
            print(f"carre_siamois_no_pc d'ordre {n} et commence par {k} avec {pas} est {outil_carre_magique.carre_is_magic(carre,int(n))}")
        case '7':
            carre = carre_siamois.carre_siamois_so_dl(n, pas, k)
            print(f"carre_siamois_so_dl d'ordre {n} et commence par {k} avec {pas} est {outil_carre_magique.carre_is_magic(carre,int(n))}")
        case '8':
            carre = carre_siamois.carre_siamois_so_pc(n, pas, k)
            print(f"carre_siamois_so_pc d'ordre {n} et commence par {k} avec {pas} est {outil_carre_magique.carre_is_magic(carre,int(n))}")
        case other :
            print("choix doit etre entre 1 et 8 inclus")
            choixSiamois(n, k, pas)
    if  3 <= n and n <= 20:
        for j in range(n):
            print(f" {carre[j]}")
            
# construction par l'algorithme siamois
def algoSiamois():
    print("Choisir l'ordre impair, l'ordre superieur à 20 n'est pas affichable")
    n = input()
    
    if int(n)%2 != 1:
        print("l'ordre doit être impair")
        algoSiamois()
    else:
        print("choisir le debut du carre")
        k = input()
    
        print("choisir le nombre de pas")
        pas = input()
    
        choixSiamois(int(n), int(k), int(pas))
        carreother(algoSiamois,algoCarre)
    

#Construction par l'algorithme Permutation des diagonales
def algoPermutation():
    print("Choisir un ordre divisible par 4 , l'ordre superieur à 20 n'est pas affichable ")
    n = input()
    
    if int(n)%4 != 0:
        print("l'ordre doit être divisible par 4")
        algoPermutation()
    else:
        print("choisir le debut du carre")
        k = input()
    
        print("choisir le nombre de pas")
        pas = input()
        
        carre = permutation_diagonale.permu_diag(int(n), int(pas), int(k))
        print(f"carre_permutation d'ordre {int(n)} et commence par {int(k)} avec {int(pas)} est {outil_carre_magique.carre_is_magic(carre,int(n))}")
        if  3 <= int(n) and int(n) <= 20:
            for j in range(int(n)):
                print(f" {carre[j]}")
        carreother(algoPermutation,algoCarre)
        
#Construction par l'algorithme LUX
def algoLUX():
    print("Choisir un ordre divisible par 2 mais pas divisible par 4 , l'ordre superieur à 20 n'est pas affichable ")
    n = input()
    
    if int(n)%4 == 0 or int(n)%2 ==1:
        print("l'ordre ne doit être divisible par 4 mais divisible que par 2")
        algoLUX()
    else:
        print("choisir le debut du carre")
        k = input()
    
        print("choisir le nombre de pas")
        pas = input()
        
        carre = lux.LUX(int(n), int(pas), int(k))
        print(f"carre_LUX d'ordre {int(n)} et commence par {int(k)} avec {int(pas)} est {outil_carre_magique.carre_is_magic(carre,int(n))}")
        if  3 <= int(n) and int(n) <= 20:
            for j in range(int(n)):
                print(f" {carre[j]}")
        carreother(algoLUX,algoCarre)
        
def choixImpairOperation2(n):
        
    print("debut")
    k = input()
    print("pas")
    pas = input()
    print("1 : carre siamois Nord-Est : commence au milieu premiere ligne")
    print("2 : carre siamois Nord-Est : commence au milieu derniere colonne")
    print("3 : carre siamois Sud-Est : commence au milieu derniere ligne" )
    print("4 : carre siamois Sud-Est : commence au milieu derniere colonne")
    print("5 : carre siamois Nord-Ouest : commence au milieu premiere ligne")
    print("6 : carre siamois Nord-Ouest : commence au milieu premiere colonne")
    print("7 : carre siamois Sud-Ouest : commence au milieu derniere ligne")
    print("8 : carre siamois Sud-Ouest : commence au milieu premiere colonne")
    choix = input()
    match(choix):
        case '1':
            carre = carre_siamois.carre_siamois_ne_pl(n, int(pas), int(k))
            print(f"carre_siamois_ne_pl d'ordre {n} et commence par {k} avec {pas} est {outil_carre_magique.carre_is_magic(carre,n)}")
        case '2':
            carre = carre_siamois.carre_siamois_ne_dc(n, int(pas), int(k))
            print(f"carre_siamois_ne_dc d'ordre {n} et commence par {k} avec {pas} est {outil_carre_magique.carre_is_magic(carre,n)}")
        case '3':
            carre = carre_siamois.carre_siamois_se_dl(n, int(pas), int(k))
            print(f"carre_siamois_se_dl d'ordre {n} et commence par {k} avec {pas} est {outil_carre_magique.carre_is_magic(carre,n)}")
        case '4':
            carre = carre_siamois.carre_siamois_se_dc(n, int(pas), int(k))
            print(f"carre_siamois_se_dc d'ordre {n} et commence par {k} avec {pas} est {outil_carre_magique.carre_is_magic(carre,n)}")
        case '5':
            carre = carre_siamois.carre_siamois_no_pl(n, int(pas), int(k))
            print(f"carre_siamois_no_pl d'ordre {n} et commence par {k} avec {pas} est {outil_carre_magique.carre_is_magic(carre,n)}")
        case '6':
            carre = carre_siamois.carre_siamois_no_pc(n, int(pas), int(k))
            print(f"carre_siamois_no_pc d'ordre {n} et commence par {k} avec {pas} est {outil_carre_magique.carre_is_magic(carre,n)}")
        case '7':
            carre = carre_siamois.carre_siamois_so_dl(n, int(pas), int(k))
            print(f"carre_siamois_so_dl d'ordre {n} et commence par {k} avec {pas} est {outil_carre_magique.carre_is_magic(carre,n)}")
        case '8':
            carre = carre_siamois.carre_siamois_so_pc(n, int(pas), int(k))
            print(f"carre_siamois_so_pc d'ordre {n} et commence par {k} avec {pas} est {outil_carre_magique.carre_is_magic(carre,n)}")
            
        case other :
            print("choix doit etre entre 1 et 8 inclus")
            choixImpairOperation2(n)
    return carre

def choixImpairOperation(n):
        print("1: Lozenge")
        print("2 : Siamois")
        choix = input()
        match(choix):
            case '1':
                carre =  carre_lozenge.carre_lozenge(n)
                print(f"carre_lozenge d'ordre {n} et commence par 1 avec 1 est {outil_carre_magique.carre_is_magic(carre,n)}")
            case '2':
                carre = choixImpairOperation2(n)
        return carre

#operateur
def choixOperateur(carre1, carre2,n):
    print("1 : additionner")
    print("2 : soustraction")
    print("3 : multiplication")
    print("4 : multiplication matricielle")
    choix = input()
    match(choix):
        case '1':
            print("Addition")
            carre = outil_carre_magique.addCarre(carre1,carre2,n)
        case '2':
            print("soustraction")
            carre = outil_carre_magique.souCarre(carre1,carre2,n)
        case '3':
            print("multiplication")
            carre = outil_carre_magique.mulCarre(carre1,carre2,n)
        case '4':
            print("multiplication matricielle")
            carre = outil_carre_magique.mulVecCarre(carre1,carre2,n)
        case other:
            print("Vous pouvez utilisé  1, 2, 3 et 4")
            choixOperateur(carre1, carre2,n)
        
    return carre

# pour recommencer avec les memes carres
def choixRecommencer(n, carre1, carre2):
    print("Voulez-vous utiliser les 2 memes carres :(oui/...)")
    choix = input()
    
    if (choix == "oui"):
        carre = choixOperateur(carre1, carre2,n)
        print(f"carre d'ordre {n}  est {outil_carre_magique.carre_is_magic(carre,n)}")
        for j in range(n):
            print(f" {carre[j]}")
        choixRecommencer(n, carre1, carre2)
    

#les opérations avec les 4 algorithmes de constructions du carre magique
def choixOperation():
    print("Choisir l'ordre entre 3 et 20")
    n = input()
    #recommence si n < 3 ou n > 20
    if (int(n) < 3 or int(n)> 20):
        choixOperation()
    
    # si nombre impaire
    if int(n)%2 == 1 :
        print("choix du premier carre")
        carre1 = choixImpairOperation(int(n))
        
        for j in range(int(n)):
            print(f" {carre1[j]}")
        print("choix du deuxieme carre")
        carre2 = choixImpairOperation(int(n))
        for j in range(int(n)):
            print(f" {carre2[j]}")
        
    # si divisible par 4
    elif int(n)%4 == 0:
        print("choix du premier carre")
        print("debut")
        k = input()
        print("pas")
        pas = input()
        carre1 = permutation_diagonale.permu_diag(int(n), int(pas), int(k))
        print(f"carre_permutation d'ordre {int(n)} et commence par {int(k)} avec {int(pas)} est {outil_carre_magique.carre_is_magic(carre1,int(n))}")
        for j in range(int(n)):
            print(f" {carre1[j]}")
        print("choix du deuxieme carre")
        print("debut")
        k = input()
        print("pas")
        pas = input()
        carre2 = permutation_diagonale.permu_diag(int(n), int(pas), int(k))
        print(f"carre_permutation d'ordre {int(n)} et commence par {int(k)} avec {int(pas)} est {outil_carre_magique.carre_is_magic(carre2,int(n))}")
        for j in range(int(n)):
            print(f" {carre2[j]}")
        
    # si divisible par 2 mais pas par 4
    else:
        print("choix du premier carre")
        print("debut")
        k = input()
        print("pas")
        pas = input()
        carre1 = lux.LUX(int(n), int(pas), int(k))
        print(f"carre_lux d'ordre {int(n)} et commence par {int(k)} avec {int(pas)} est {outil_carre_magique.carre_is_magic(carre1,int(n))}")
        for j in range(int(n)):
            print(f" {carre1[j]}")
        print("choix du deuxieme carre")
        print("debut")
        k = input()
        print("pas")
        pas = input()
        carre2 = lux.LUX(int(n), int(pas), int(k))
        print(f"carre_lux d'ordre {int(n)} et commence par {int(k)} avec {int(pas)} est {outil_carre_magique.carre_is_magic(carre2,int(n))}")
        for j in range(int(n)):
            print(f" {carre2[j]}")
            
    carre = choixOperateur(carre1, carre2,int(n))
    print(f"carre d'ordre {int(n)}  est {outil_carre_magique.carre_is_magic(carre,int(n))}")
    for j in range(int(n)):
        print(f" {carre[j]}")
        
    
    choixRecommencer(int(n), carre1, carre2)
    
    carreother(choixOperation,algoCarre)

# choix de l'algorithme de construction:
def algoCarre():
    print("1 : carre lozenge")
    print("2 : carre siamois")
    print("3 : carre permutation")
    print("4 : carre LUX")
    print("5 : operation de 2 carres de meme ordre")
    print("0 : accueil")
    print("# : revenir au precedent menu")
    print("q : quitter")
    n = input()
    match(n):
        case '1':
            print("carre lozenge")
            algoLozenge()
        case '2':
            print("carre siamois")
            algoSiamois()
        case '3':
            print("carre permutation")
            algoPermutation()
        case '4':
            print("carre LUX")
            algoLUX()
        case '5':
            print("operation de 2 carres")
            choixOperation()
        case '0':
            debut()
        case '#':
            choix_carre()
        case 'q':
            print("au revoir, a bientôt")
        case other:
            print("Vous pouvez utilisé q, #, 0, 1, 2, 3 et 4")
            algoCarre()

# choix des carrés soit par ordre ou par construction
def choix_carre():
    print("1 : choisir un ordre du carré magique")
    print("2 : choisir l'algorithme de construction du carré")
    print("0 : Accueil")
    print("q : quitter")
    n = input()
    match n:
        case '1':
            print("choix de l'ordre")
            ordreCarre()
        case '2':
            print("choix du carre")
            algoCarre()
        case  '0':
            debut()
        case 'q':
            print("au revoir, a bientôt")
        case other:
            print("Vous pouvez utilisé soit q, 0, 1 ou 2")
            choix_carre()

# debut du menu
def debut():
    print("1 : test manuel des carrés magiques")
    print("2 : test avec des exemples prédéfinis des carrés magiques")
    print("q : quitter")
    n = input()
    match n:
        case '1':
            print("manuel")
            choix_carre()
        case '2':
            print("Automatisé")
            test_predefinis()
        case 'q':
            print("au revoir, a bientôt")
            
        case other:
            print("Vous pouvez utilisé soit q, 1 ou 2")
            debut()
    



#affichage du menu complet
def menu():
    debut()
    
