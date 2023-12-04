import random
import carre_siamois
import outil_carre_magique

n = 7
k = 4

carre_ne_pl = carre_siamois.carre_siamois_ne_pl(n,k)
print(f'carre siamois Nord Est avec comme départ le milieu de la première ligne et d ordre {n} avec comme début {k}')
for i in range(n):
    print (f'{carre_ne_pl[i]} ')

print(f'Est ce un carré magique : {outil_carre_magique.carre_is_magic(carre_ne_pl,n)} ')

carre_ne_dc = carre_siamois.carre_siamois_ne_dc(n,k)
print(f'carre siamois Nord Est avec comme départ le milieu de la dernière colonne et d ordre {n} avec comme début {k}')
for i in range(n):
    print (f'{carre_ne_dc[i]} ')

print(f'Est ce un carré magique : {outil_carre_magique.carre_is_magic(carre_ne_dc,n)} ')

carre_se_dl = carre_siamois.carre_siamois_se_dl(n,k)
print(f'carre siamois Sud Est comme départ le milieu de la dernière ligne et d ordre {n} avec comme début {k}')
for i in range(n):
    print (f'{carre_se_dl[i]} ')

print(f'Est ce un carré magique : {outil_carre_magique.carre_is_magic(carre_se_dl,n)} ')

carre_se_dc = carre_siamois.carre_siamois_se_dc(n,k)
print(f'carre siamois Sud Est comme départ le milieu de la dernière colonne et d ordre {n} avec comme début {k}')
for i in range(n):
    print (f'{carre_se_dc[i]} ')

print(f'Est ce un carré magique : {outil_carre_magique.carre_is_magic(carre_se_dc,n)} ')

carre_no_pl = carre_siamois.carre_siamois_no_pl(n,k)
print(f'carre siamois Nord Ouest avec comme départ le milieu de la première ligne et d ordre {n} avec comme début {k}')
for i in range(n):
    print (f'{carre_no_pl[i]} ')

print(f'Est ce un carré magique : {outil_carre_magique.carre_is_magic(carre_no_pl,n)} ')

carre_no_pc = carre_siamois.carre_siamois_no_pc(n,k)
print(f'carre siamois Nord Ouest avec comme départ le milieu de la première colonne et d ordre {n} avec comme début {k}')
for i in range(n):
    print (f'{carre_no_pc[i]} ')

print(f'Est ce un carré magique : {outil_carre_magique.carre_is_magic(carre_no_pc,n)} ')

carre_so_dl = carre_siamois.carre_siamois_so_dl(n,k)
print(f'carre siamois Sud Ouest comme départ le milieu de la dernière ligne et d ordre {n} avec comme début {k}')
for i in range(n):
    print (f'{carre_so_dl[i]} ')

print(f'Est ce un carré magique : {outil_carre_magique.carre_is_magic(carre_so_dl,n)} ')

carre_so_pc = carre_siamois.carre_siamois_so_pc(n,k)
print(f'carre siamois Sud Ouest comme départ le milieu de la première colonne et d ordre {n} avec comme début {k}')
for i in range(n):
    print (f'{carre_so_pc[i]} ')

print(f'Est ce un carré magique : {outil_carre_magique.carre_is_magic(carre_so_pc,n)} ')

print("on teste avec un ordre impaire alétoire et le début aléatoire")

n = random.randint(1,10000)
while (n%2 != 1):
	n = random.randint(1,10000)
k = random.randint(1,10000)


print(f'carre siamois d ordre {n} avec comme début {k}')

carre_ne_pl = carre_siamois.carre_siamois_ne_pl(n,k)
carre_ne_dc = carre_siamois.carre_siamois_ne_dc(n,k)
carre_no_pl = carre_siamois.carre_siamois_no_pl(n,k)
carre_no_pc = carre_siamois.carre_siamois_no_pc(n,k)
carre_se_dl = carre_siamois.carre_siamois_se_dl(n,k)
carre_se_dc = carre_siamois.carre_siamois_se_dc(n,k)
carre_so_dl = carre_siamois.carre_siamois_so_dl(n,k)
carre_so_pc = carre_siamois.carre_siamois_so_pc(n,k)
print(f'Est ce un carré façons Nord-Est avec comme départ le milieu de la première ligne est magique : {outil_carre_magique.carre_is_magic(carre_ne_pl,n)} ')
print(f'Est ce un carré façons Nord-Est avec comme départ le milieu de la dernière colonne est magique : {outil_carre_magique.carre_is_magic(carre_ne_dc,n)} ')
print(f'Est ce un carré façons Nord-Ouest avec comme départ le milieu de la première ligne est magique : {outil_carre_magique.carre_is_magic(carre_no_pl,n)} ')
print(f'Est ce un carré façons Nord-Ouest avec comme départ le milieu de la première colonne est magique : {outil_carre_magique.carre_is_magic(carre_no_pc,n)} ')
print(f'Est ce un carré façons Sud-Est comme départ le milieu de la dernière ligne est magique : {outil_carre_magique.carre_is_magic(carre_se_dl,n)} ')
print(f'Est ce un carré façons Sud-Est comme départ le milieu de la dernière colonne est magique : {outil_carre_magique.carre_is_magic(carre_se_dc,n)} ')
print(f'Est ce un carré façons Sud-Ouest comme départ le milieu de la dernière ligne est magique : {outil_carre_magique.carre_is_magic(carre_so_dl,n)} ')
print(f'Est ce un carré façons Sud-Ouest comme départ le milieu de la première colonne est magique : {outil_carre_magique.carre_is_magic(carre_so_pc,n)} ')

print("Test avec carre_debut\n")
n1 = 167
c1 = 2336163
print(f'n = {n1} c = {c1} : k = {carre_siamois.debut_carre(n1,c1)}')
n2 = 1601
c2 = 2052570055
print(f'n = {n2} c = {c2} : k = {carre_siamois.debut_carre(n2,c2)}')
n2 = 1601
c3 = 2052570057
print(f'n = {n2} c = {c3} : k = {carre_siamois.debut_carre(n2,c3)}')
