import random
import carre_siamois
import outil_carre_magique

n = 7
k = 4

carre_ne = carre_siamois.carre_siamois_ne(n,k)
print(f'carre siamois Nord Est d ordre {n} avec comme début {k}')
for i in range(n):
    print (f'{carre_ne[i]} ')

print(f'Est ce un carré magique : {outil_carre_magique.carre_is_magic(carre_ne,n)} ')

carre_se = carre_siamois.carre_siamois_se(n,k)
print(f'carre siamois Sud Est d ordre {n} avec comme début {k}')
for i in range(n):
    print (f'{carre_se[i]} ')

print(f'Est ce un carré magique : {outil_carre_magique.carre_is_magic(carre_se,n)} ')

carre_no = carre_siamois.carre_siamois_no(n,k)
print(f'carre siamois Nord Ouest d ordre {n} avec comme début {k}')
for i in range(n):
    print (f'{carre_no[i]} ')

print(f'Est ce un carré magique : {outil_carre_magique.carre_is_magic(carre_no,n)} ')

carre_so = carre_siamois.carre_siamois_so(n,k)
print(f'carre siamois Sud Ouest d ordre {n} avec comme début {k}')
for i in range(n):
    print (f'{carre_so[i]} ')

print(f'Est ce un carré magique : {outil_carre_magique.carre_is_magic(carre_so,n)} ')

print("on teste avec un ordre impaire  alétoire et le début aléatoire")

n = random.randint(1,10000)
while (n%2 != 1):
	n = random.randint(1,10000)
k = random.randint(1,10000)


print(f'carre siamois d ordre {n} avec comme début {k}')

carre_ne = carre_siamois.carre_siamois_ne(n,k)
carre_no = carre_siamois.carre_siamois_no(n,k)
carre_se = carre_siamois.carre_siamois_se(n,k)
carre_so = carre_siamois.carre_siamois_so(n,k)
print(f'Est ce un carré façons Nord-Est est magique : {outil_carre_magique.carre_is_magic(carre_ne,n)} ')
print(f'Est ce un carré façons Nord-Ouest est magique : {outil_carre_magique.carre_is_magic(carre_no,n)} ')
print(f'Est ce un carré façons Sud-Est est magique : {outil_carre_magique.carre_is_magic(carre_se,n)} ')
print(f'Est ce un carré façons Sud-Ouest est magique : {outil_carre_magique.carre_is_magic(carre_so,n)} ')
