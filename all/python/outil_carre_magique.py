import random

# calculer la somme d'une colonne
def sum_col(carre, indice, n):
    somme = 0
    for j in range(n):
        somme += carre[indice][j]
    return somme

# calculer la somme de la diagonale qui part de en haut à gauche vers en bas à droite
def sum_diag1(carre,n):
    somme = 0
    for i in range(n):
        somme += carre[i][i]
    return somme

# calculer la somme de la diagonale qui part de en haut à droite vers en bas à gauche
def sum_diag2(carre,n):
    somme = 0
    for i in range(n):
        somme += carre[i][n-1-i]
    return somme

def carre_is_magic(carre,n):
    for i in range(n-1):
        if sum(carre[i]) != sum(carre[i+1]):
            return False
    for i in range(n-1):
        if sum_col(carre, i, n) != sum_col(carre, i+1, n):
            return False
    if sum_diag1(carre,n) != sum_diag2(carre,n):
        return False
    i = random.randint(1,n-1)
    j = random.randint(1,n-1)
    if sum(carre[i]) != sum_col(carre, j, n) or sum(carre[i]) != sum_diag1(carre,n):
        return False
    return True

#Outil de calculs des carrés

# fonction pour additionner 2 carrés de même ordre
def addCarre(carre1, carre2,n):
    return [[carre1[i][j] + carre2[i][j] for j in range(n)] for i in range(n)]
    
# fonction pour soustraire 2 carrés de même ordre
def souCarre(carre1, carre2,n):
    return [[carre1[i][j] - carre2[i][j] for j in range(n)] for i in range(n)]
    
# fonction pour multiplie 2 carrés de même ordre
def mulCarre(carre1, carre2,n):
    return [[carre1[i][j] * carre2[i][j] for j in range(n)] for i in range(n)]
    
# multiplie chaque case de la ligne iligne du carre1 et de la colone jcol du carre2 et les additionne ensemble
def ligneCol(carre1,carre2,iligne,jcol,n):
    res = 0
    for k in range(n):
        res += carre1[iligne][k]*carre2[k][jcol]
    return res
    
# multiplication comme 2 vecteurs
def mulVecCarre(carre1,carre2,n):
    return [[ligneCol(carre1,carre2,i,j,n) for j in range(n)] for i in range(n)]
