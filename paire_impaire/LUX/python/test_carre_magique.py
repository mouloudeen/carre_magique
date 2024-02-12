import random
import lux
import outil_carre_magique

# On teste les premiers nombres divisible par 2 mais pas par 4
n = 6
carre_6 = lux.LUX(n,1,1)

for i in range(n):
    print(f'{carre_6[i]}')

print(f' carre d ordre {n} est magique {outil_carre_magique.carre_is_magic(carre_6,n)}\n')


n = 10
carre_10 = lux.LUX(n,1,1)

for i in range(n):
    print(f'{carre_10[i]}')

print(f' carre d ordre {n} est magique {outil_carre_magique.carre_is_magic(carre_10,n)}\n')

n = 14
carre_14 = lux.LUX(n,1,1)

for i in range(n):
    print(f'{carre_14[i]}')

print(f' carre d ordre {n} est magique {outil_carre_magique.carre_is_magic(carre_14,n)}\n')

n = 18
carre_18 = lux.LUX(n,1,1)

for i in range(n):
    print(f'{carre_18[i]}')

print(f' carre d ordre {n} est magique {outil_carre_magique.carre_is_magic(carre_18,n)}\n')



#on teste avec des grands ordres impairs divisible par 2 mais pas par 4 pris au random

n = 7630
carre_1 = lux.LUX(n,1,1)
print(f' carre d ordre {n} est magique {outil_carre_magique.carre_is_magic(carre_1,n)}\n')

n = 3986
carre_1 = lux.LUX(n,1,1)
print(f' carre d ordre {n} est magique {outil_carre_magique.carre_is_magic(carre_1,n)}\n')

n = 4770
carre_1 = lux.LUX(n,1,1)
print(f' carre d ordre {n} est magique {outil_carre_magique.carre_is_magic(carre_1,n)}\n')

n = 5498
carre_1 = lux.LUX(n,1,1)
print(f' carre d ordre {n} est magique {outil_carre_magique.carre_is_magic(carre_1,n)}\n')

n = 9746
carre_1 = lux.LUX(n,1,1)
print(f' carre d ordre {n} est magique {outil_carre_magique.carre_is_magic(carre_1,n)}\n')
