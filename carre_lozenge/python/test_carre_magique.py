import random
import carre_lozenge
import outil_carre_magique

# On teste les premiers nombres impairs
n = 5
carre_5 = carre_lozenge.carre_lozenge(n)

for i in range(n):
    print(f'{carre_5[i]}')

print(f' carre d ordre {n} est magique {outil_carre_magique.carre_is_magic(carre_5,n)}\n')


n = 7
carre_7 = carre_lozenge.carre_lozenge(n)

for i in range(n):
    print(f'{carre_7[i]}')

print(f' carre d ordre {n} est magique {outil_carre_magique.carre_is_magic(carre_7,n)}\n')

n = 9
carre_9 = carre_lozenge.carre_lozenge(n)

for i in range(n):
    print(f'{carre_9[i]}')

print(f' carre d ordre {n} est magique {outil_carre_magique.carre_is_magic(carre_9,n)}\n')

n = 11
carre_11 = carre_lozenge.carre_lozenge(n)

for i in range(n):
    print(f'{carre_11[i]}')

print(f' carre d ordre {n} est magique {outil_carre_magique.carre_is_magic(carre_11,n)}\n')

n = 13
carre_13 = carre_lozenge.carre_lozenge(n)

for i in range(n):
    print(f'{carre_13[i]}')

print(f' carre d ordre {n} est magique {outil_carre_magique.carre_is_magic(carre_13,n)}\n')

#on teste avec des grands ordres impairs pris au random

n = 5301
carre_1 = carre_lozenge.carre_lozenge(n)
print(f' carre d ordre {n} est magique {outil_carre_magique.carre_is_magic(carre_1,n)}\n')

n = 7339
carre_1 = carre_lozenge.carre_lozenge(n)
print(f' carre d ordre {n} est magique {outil_carre_magique.carre_is_magic(carre_1,n)}\n')

n = 9591
carre_1 = carre_lozenge.carre_lozenge(n)
print(f' carre d ordre {n} est magique {outil_carre_magique.carre_is_magic(carre_1,n)}\n')

n = 3687
carre_1 = carre_lozenge.carre_lozenge(n)
print(f' carre d ordre {n} est magique {outil_carre_magique.carre_is_magic(carre_1,n)}\n')

n = 7243
carre_1 = carre_lozenge.carre_lozenge(n)
print(f' carre d ordre {n} est magique {outil_carre_magique.carre_is_magic(carre_1,n)}\n')
