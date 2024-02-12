from typing import List

# On crée un tableau qui aura des lettres L,U et X
def remplir_LUX(n):
    #comme on sait n = 2*(2m+1)
    m = int((n-2)/4)
    # crée un tableau vide de dimension 2m+1 sur 2m+1
    lettre = [[ ' ' for i in range(2*m+1)] for j in range(2*m+1)]
    
    # on ecrit sur les m+1 premières lignes que L sur chaque case
    for i in range(m+1):
        for j in range(2*m+1):
            #et au milieu de la derniere ligne L on le remplace par U
            if (i == m) and (j==m):
                lettre[i][j] = 'U'
                
            else:
                lettre[i][j]= 'L'
    #on rajoute une ligne de U
    i = m+1
    for j in range(2*m+1):
        #quand on est milieu de la ligne on le remplace par L
        if (j==m):
            lettre[i][j]= 'L'
        else:
            lettre[i][j] = 'U'
    
    # ce qui reste de lignes, on ecrit que des X
    for i in range(m+2,2*m+1):
        for j in range(2*m+1):
            lettre[i][j] = 'X'
            

    return lettre
    
    
# On transforme de la facon du L sur un petit carre de coté 2
def trL(carre,i0,j0,k,m):
    i = 2*i0
    j = 2*j0+1
    carre[i][j] = k
    i += 1
    j -= 1
    k += m
    carre[i][j]=k
    j += 1
    k += m
    carre[i][j]=k
    i -= 1
    j -= 1
    k += m
    carre[i][j]=k
    
#On transforme de la facon du U sur un petit carre de coté 2
def trU(carre,i0,j0,k,m):
    i = 2*i0
    j = 2*j0
    carre[i][j]=k
    i += 1
    k += m
    carre[i][j]=k
    j += 1
    k += m
    carre[i][j]=k
    i -= 1
    k += m
    carre[i][j]=k
    
#On transforme de la facon du X sur un petit carre de coté 2
def trX(carre,i0,j0,k,m):
    i = 2*i0
    j = 2*j0
    carre[i][j]=k
    i += 1
    j += 1
    k += m
    carre[i][j]=k
    j -= 1
    k += m
    carre[i][j]=k
    i -= 1
    j += 1
    k += m
    carre[i][j]=k
    
    
# on traduit le tableau lettres L, U et X pour chaque transformation
def traduLUX(lettre,n,a,m):
    carre = [[0 for j in range(n)] for i in range(n)]
    m =  int((n-2)/4)
    i = 0
    j = m
    cpt = 0
    k = a
    
    # tant qu'on n'a pas vidé le tableau des lettres
    while cpt < (2*m+1)**2:
        
        #on voit pour chaque lettre qu'elle est la transformation donnée
        # dans le carre
        # on rajoute 4 à k pour chaque transformation
        # on vide le tableau à ses coordonnées
        # on se deplace en montant d'une diagonale en haut
        match lettre[i][j]:
            case 'L' :
                trL(carre,i,j,k,m)
                lettre[i][j] = ' '
                i = (i-1)%(2*m+1)
                j = (j+1)%(2*m+1)
                k += 4*m
                cpt += 1
            case 'U' :
                trU(carre,i,j,k,m)
                lettre[i][j] = ' '
                i = (i-1)%(2*m+1)
                j = (j+1)%(2*m+1)
                k += 4*m
                cpt += 1
            case 'X' :
                trX(carre,i,j,k,m)
                lettre[i][j] = ' '
                i = (i-1)%(2*m+1)
                j = (j+1)%(2*m+1)
                k += 4*m
                cpt += 1
            # si on lit un espace on se deplace 2 cases en descendant et deplace d'une case à gauche
            case ' ':
                i = (i+2)%(2*m+1)
                j = (j-1)%(2*m+1)
        
    return carre
    
def LUX(n,a,m):
    # creation du tableau de lettres L, U et X
    lettre = remplir_LUX(n)
    # on traduit chaque lettre pour avoir notre carre magique comme a le debut
    #et m les pas
    carre = traduLUX(lettre,n,a,m)
    return carre
