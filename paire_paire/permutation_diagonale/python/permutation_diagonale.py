from typing import List

# On remplit partant du coordonnée (i,j) avec comme déplacement
# (idep,jdep) avec pas qui est le nombre de pas et k le debut
def initialisation(carre : List[int],i: int,j : int, idep: int, jdep: int, pas: int, k: int, n : int) :
    cpt = 1
    # on remplit la 1er valeur de coordonnée (i,j)
    carre[i][j]= (i*n + j+k)*pas
    # puis on continue en se deplaçant (n-1) fois
    while cpt < n :
        i = (i +idep)%n
        j = (j+jdep)%n
        carre[i][j]= (i*n + j+k)*pas
        cpt += 1
    


def permu_diag(n : int, pas : int, k : int) -> List[int]:
    # genere un carre d'ordre n avec les indices inversé et en ajoutant 1
    carre = [[pas*((n*n+1)- (i*n + j+1)+k-1) for j in range(n) ] for i in range(n)]
    
    # cpt est égale au quotient de n/4 (on sait que n est divisible par 4)
    cpt = int(n/4)
    #on initialise les 2 coordonnées (i0,j0) et (i0,j1)
    i0 = 0
    j0 = 0
    j1 = n-1
    # on le fait autant que la valeur cpt
    for i in range(cpt):
        initialisation(carre,i0,j0, 1, 1,pas,k,n)
        initialisation(carre,i0,j1, 1, -1,pas,k,n)
        i0 += 4
    return carre
carre = permu_diag(4,2,2)
for i in range(4):
    print(f'{carre[i]}')
