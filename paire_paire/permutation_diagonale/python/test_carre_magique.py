import random
import permutation_diagonale
import outil_carre_magique

# On teste les premiers nombres divisible par 4
n = 4
carre_4 = permutation_diagonale.permu_diag(n,1,1)

for i in range(n):
    print(f'{carre_4[i]}')

print(f' carre d ordre {n} est magique {outil_carre_magique.carre_is_magic(carre_4,n)}\n')


n = 8
carre_8 = permutation_diagonale.permu_diag(n,1,1)

for i in range(n):
    print(f'{carre_8[i]}')

print(f' carre d ordre {n} est magique {outil_carre_magique.carre_is_magic(carre_8,n)}\n')

n = 12
carre_12 = permutation_diagonale.permu_diag(n,1,1)

for i in range(n):
    print(f'{carre_12[i]}')

print(f' carre d ordre {n} est magique {outil_carre_magique.carre_is_magic(carre_12,n)}\n')

n = 16
carre_16 = permutation_diagonale.permu_diag(n,1,1)

for i in range(n):
    print(f'{carre_16[i]}')

print(f' carre d ordre {n} est magique {outil_carre_magique.carre_is_magic(carre_16,n)}\n')



#on teste avec des grands ordres impairs pris au random

n = 2380
carre_1 = permutation_diagonale.permu_diag(n,1,1)
print(f' carre d ordre {n} est magique {outil_carre_magique.carre_is_magic(carre_1,n)}\n')

n = 4472
carre_1 = permutation_diagonale.permu_diag(n,1,1)
print(f' carre d ordre {n} est magique {outil_carre_magique.carre_is_magic(carre_1,n)}\n')

n = 8312
carre_1 = permutation_diagonale.permu_diag(n,1,1)
print(f' carre d ordre {n} est magique {outil_carre_magique.carre_is_magic(carre_1,n)}\n')

n = 6244
carre_1 = permutation_diagonale.permu_diag(n,1,1)
print(f' carre d ordre {n} est magique {outil_carre_magique.carre_is_magic(carre_1,n)}\n')

n = 6088
carre_1 = permutation_diagonale.permu_diag(n,1,1)
print(f' carre d ordre {n} est magique {outil_carre_magique.carre_is_magic(carre_1,n)}\n')
