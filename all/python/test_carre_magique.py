import carre_lozenge
import carre_siamois
import permutation_diagonale
import lux
import outil_carre_magique

# On teste les ordres de 3 à 20
for i in range(3,21):
    # i impair alors on utilise carre_lozenge
    if (i%2 == 1):
        carre = carre_lozenge.carre_lozenge(i)
        for j in range(i):
            print(f"{carre[j]}")
        print(f"carre d'ordre {i} est {outil_carre_magique.carre_is_magic(carre,i)}")
     
    # i divisible par 4 on utilise permutation diagonale
    elif (i%4 == 0):
        carre = permutation_diagonale.permu_diag(i,1,1)
        for j in range(i):
            print(f"{carre[j]}")
        print(f"carre d'ordre {i} est {outil_carre_magique.carre_is_magic(carre,i)}")
    
    #sinon i est pair et n'est pas divisible par 4 on utilise lux
    else :
        carre = lux.LUX(i,1,1)
        for j in range(i):
            print(f"{carre[j]}")
        print(f"carre d'ordre {i} est {outil_carre_magique.carre_is_magic(carre,i)}")

# Grand nombre aléatoire
L = [5301, 7339, 9591, 3687, 7243, 7630, 3986, 4770, 5498, 9746, 2380, 4472, 8312, 6244, 6088]

for i in L:
    # i impair alors on utilise carre_lozenge
    if (i%2 == 1):
        carre = carre_lozenge.carre_lozenge(i)
        print(f"carre d'ordre {i} est {outil_carre_magique.carre_is_magic(carre,i)}")
        
    # i divisible par 4 on utilise permutation diagonale
    elif (i%4 == 0):
        carre = permutation_diagonale.permu_diag(i,1,1)
        print(f"carre d'ordre {i} est {outil_carre_magique.carre_is_magic(carre,i)}")
    
    #sinon i est pair et n'est pas divisible par 4 on utilise lux
    else :
        carre = lux.LUX(i,1,1)
        print(f"carre d'ordre {i} est {outil_carre_magique.carre_is_magic(carre,i)}")
