import random
import carre_siamois
import outil_carre_magique

n = 7
k = 4

carre = carre_siamois.carre_siamois_ne(n,k)
print(f'carre siamois d ordre {n} avec comme début {k}')
for i in range(n):
    print (f'{carre[i]} ')

print(f'Est ce un carré magique : {outil_carre_magique.carre_is_magic(carre,n)} ')

print("on teste avec un ordre impaire  alétoire et le début aléatoire")

n = random.randint(1,10000)
while (n%2 != 1):
	n = random.randint(1,10000)
k = random.randint(1,10000)

carre = carre_siamois.carre_siamois_ne(n,k)
print(f'carre siamois d ordre {n} avec comme début {k}')
print(f'Est ce un carré magique : {outil_carre_magique.carre_is_magic(carre,n)} ')
