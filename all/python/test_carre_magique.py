import carre_lozenge
import carre_siamois
import permutation_diagonale
import lux
import outil_carre_magique

print("On teste les ordres de 3 à 20")
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

print(" Grand nombre aléatoire")
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
