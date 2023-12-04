from typing import List

#Les 8 modèles possibles de la construction de façon siamois

#Siamois Nord Est avec comme départ le milieu de la première ligne
def carre_siamois_ne_pl(n : int,k : int) -> List [int]:
    # Creation d'un carré rempli de 0
    carre = [[0 for i in range(n)] for j in range(n)]
    # On initialise l qui est le nombre de chiffres rajoutés au carré
    l = 1
    # On initialise i qui sera le numero de ligne à 0
    i = 0
    # On initialise j qui sera le numero de colonne qui sera le milieu de la ligne
    j =  int((n-1)/2)
    # valeur de départ que donnera la personne qui utilise la fonction
    carre[i][j] = k
    
    #Tant que le carré n'est pas rempli on continue
    while l != n*n:
    
        # On verifie si le case Nord-Est de la precedente case
        # est rempli
        if (carre[(i - 1) % n][(j + 1) % n] != 0):
            # alors on descend d'une case
            i = (i + 1) % n
            # on augmente la valeur precedente
            k += 1
            carre[i][j] = k
            # On rajoute + 1 aux nombres de chiffres rajoutés
            l += 1
            
        # Comme la case Nord-Est de la precedente case n'est pas rempli
        i = (i - 1) % n
        j = (j + 1) % n
        # on augmente la valeur precedente
        k += 1
        # On rempli cette case Nord-Est  avec la valeur augmente
        carre[i][j] = k
        # On rajoute + 1 aux nombres de chiffres rajoutés
        l += 1
    return carre
    
 
 #Siamois Nord Est avec comme départ le milieu de la dernière colonne
def carre_siamois_ne_dc(n : int,k : int) -> List [int]:
    # Creation d'un carré rempli de 0
    carre = [[0 for i in range(n)] for j in range(n)]
    # On initialise l qui est le nombre de chiffres rajoutés au carré
    l = 1
    # On initialise i qui sera le numero de ligne à 0
    i = int((n-1)/2)
    # On initialise j qui sera le numero de colonne qui sera le milieu de la ligne
    j = n - 1
    # valeur de départ que donnera la personne qui utilise la fonction
    carre[i][j] = k
    
    #Tant que le carré n'est pas rempli on continue
    while l != n*n:
    
        # On verifie si le case Nord-Est de la precedente case
        # est rempli
        if (carre[(i - 1) % n][(j + 1) % n] != 0):
            # alors on descend d'une case
            j = (j - 1) % n
            # on augmente la valeur precedente
            k += 1
            carre[i][j] = k
            # On rajoute + 1 aux nombres de chiffres rajoutés
            l += 1
            
        # Comme la case Nord-Est de la precedente case n'est pas rempli
        i = (i - 1) % n
        j = (j + 1) % n
        # on augmente la valeur precedente
        k += 1
        # On rempli cette case Nord-Est  avec la valeur augmente
        carre[i][j] = k
        # On rajoute + 1 aux nombres de chiffres rajoutés
        l += 1
    return carre

#Siamois Sud Est comme départ le milieu de la dernière ligne
def carre_siamois_se_dl(n : int,k : int) -> List [int]:
    # Creation d'un carré rempli de 0
    carre = [[0 for i in range(n)] for j in range(n)]
    # On initialise l qui est le nombre de chiffres rajoutés au carré
    l = 1
    # On initialise i qui sera le numero de la derniere ligne
    i =  n- 1
    # On initialise j qui sera le numero de colonne qui sera le milieu de la ligne
    j =  int((n-1)/2)
    # valeur de départ que donnera la personne qui utilise la fonction
    carre[i][j] = k
    
    #Tant que le carré n'est pas rempli on continue
    while l != n*n:
    
        # On verifie si le case Sud Est de la precedente case
        # est rempli
        if (carre[(i + 1) % n][(j + 1) % n] != 0):
            # alors on monte d'une case
            i = (i - 1) % n
            # on augmente la valeur precedente
            k += 1
            carre[i][j] = k
            # On rajoute + 1 aux nombres de chiffres rajoutés
            l += 1
            
        # Comme la case Sud Est de la precedente case n'est pas rempli
        i = (i + 1) % n
        j = (j + 1) % n
        # on augmente la valeur precedente
        k += 1
        # On rempli cette case Sud Est  avec la valeur augmente
        carre[i][j] = k
        # On rajoute + 1 aux nombres de chiffres rajoutés
        l += 1
    return carre
    

#Siamois Sud Est comme départ le milieu de la dernière colonne
def carre_siamois_se_dc(n : int,k : int) -> List [int]:
    # Creation d'un carré rempli de 0
    carre = [[0 for i in range(n)] for j in range(n)]
    # On initialise l qui est le nombre de chiffres rajoutés au carré
    l = 1
    # On initialise i qui sera le numero de la derniere ligne
    i =  int((n-1)/2)
    # On initialise j qui sera le numero de colonne qui sera le milieu de la ligne
    j = n - 1
    # valeur de départ que donnera la personne qui utilise la fonction
    carre[i][j] = k
    
    #Tant que le carré n'est pas rempli on continue
    while l != n*n:
    
        # On verifie si le case Sud Est de la precedente case
        # est rempli
        if (carre[(i + 1) % n][(j + 1) % n] != 0):
            # alors on monte d'une case
            j = (j - 1) % n
            # on augmente la valeur precedente
            k += 1
            carre[i][j] = k
            # On rajoute + 1 aux nombres de chiffres rajoutés
            l += 1
            
        # Comme la case Sud Est de la precedente case n'est pas rempli
        i = (i + 1) % n
        j = (j + 1) % n
        # on augmente la valeur precedente
        k += 1
        # On rempli cette case Sud Est  avec la valeur augmente
        carre[i][j] = k
        # On rajoute + 1 aux nombres de chiffres rajoutés
        l += 1
    return carre

#Siamois Nord Ouest avec comme départ le milieu de la première ligne
def carre_siamois_no_pl(n : int,k : int) -> List [int]:
    # Creation d'un carré rempli de 0
    carre = [[0 for i in range(n)] for j in range(n)]
    # On initialise l qui est le nombre de chiffres rajoutés au carré
    l = 1
    # On initialise i qui sera le numero de ligne à 0
    i = 0
    # On initialise j qui sera le numero de colonne qui sera le milieu de la ligne
    j =  int((n-1)/2)
    # valeur de départ que donnera la personne qui utilise la fonction
    carre[i][j] = k
    
    #Tant que le carré n'est pas rempli on continue
    while l != n*n:
    
        # On verifie si le case Nord Ouest de la precedente case
        # est rempli
        if (carre[(i - 1) % n][(j - 1) % n] != 0):
            # alors on descend d'une case
            i = (i + 1) % n
            # on augmente la valeur precedente
            k += 1
            carre[i][j] = k
            # On rajoute + 1 aux nombres de chiffres rajoutés
            l += 1
            
        # Comme la case Nord Ouest de la precedente case n'est pas rempli
        i = (i - 1) % n
        j = (j - 1) % n
        # on augmente la valeur precedente
        k += 1
        # On rempli cette case Nord Ouest  avec la valeur augmente
        carre[i][j] = k
        # On rajoute + 1 aux nombres de chiffres rajoutés
        l += 1
    return carre
    
#Siamois Nord Ouest avec comme départ le milieu de la première colonne
def carre_siamois_no_pc(n : int,k : int) -> List [int]:
    # Creation d'un carré rempli de 0
    carre = [[0 for i in range(n)] for j in range(n)]
    # On initialise l qui est le nombre de chiffres rajoutés au carré
    l = 1
    # On initialise i qui sera le numero de ligne à 0
    i = int((n-1)/2)
    # On initialise j qui sera le numero de colonne qui sera le milieu de la ligne
    j = 0
    # valeur de départ que donnera la personne qui utilise la fonction
    carre[i][j] = k
    
    #Tant que le carré n'est pas rempli on continue
    while l != n*n:
    
        # On verifie si le case Nord Ouest de la precedente case
        # est rempli
        if (carre[(i - 1) % n][(j - 1) % n] != 0):
            # alors on descend d'une case
            j = (j + 1) % n
            # on augmente la valeur precedente
            k += 1
            carre[i][j] = k
            # On rajoute + 1 aux nombres de chiffres rajoutés
            l += 1
            
        # Comme la case Nord Ouest de la precedente case n'est pas rempli
        i = (i - 1) % n
        j = (j - 1) % n
        # on augmente la valeur precedente
        k += 1
        # On rempli cette case Nord Ouest  avec la valeur augmente
        carre[i][j] = k
        # On rajoute + 1 aux nombres de chiffres rajoutés
        l += 1
    return carre
    
#Siamois Sud Ouest comme départ le milieu de la dernière ligne
def carre_siamois_so_dl(n : int,k : int) -> List [int]:
    # Creation d'un carré rempli de 0
    carre = [[0 for i in range(n)] for j in range(n)]
    # On initialise l qui est le nombre de chiffres rajoutés au carré
    l = 1
    # On initialise i qui sera le numero de la derniere ligne
    i =  n- 1
    # On initialise j qui sera le numero de colonne qui sera le milieu de la ligne
    j =  int((n-1)/2)
    # valeur de départ que donnera la personne qui utilise la fonction
    carre[i][j] = k
    
    #Tant que le carré n'est pas rempli on continue
    while l != n*n:
    
        # On verifie si le case Sud Ouest de la precedente case
        # est rempli
        if (carre[(i + 1) % n][(j - 1) % n] != 0):
            # alors on monte d'une case
            i = (i - 1) % n
            # on augmente la valeur precedente
            k += 1
            carre[i][j] = k
            # On rajoute + 1 aux nombres de chiffres rajoutés
            l += 1
            
        # Comme la case Sud Ouest de la precedente case n'est pas rempli
        i = (i + 1) % n
        j = (j - 1) % n
        # on augmente la valeur precedente
        k += 1
        # On rempli cette case Sud Ouest  avec la valeur augmente
        carre[i][j] = k
        # On rajoute + 1 aux nombres de chiffres rajoutés
        l += 1
    return carre
    

#Siamois Sud Ouest comme départ le milieu de la première colonne
def carre_siamois_so_pc(n : int,k : int) -> List [int]:
    # Creation d'un carré rempli de 0
    carre = [[0 for i in range(n)] for j in range(n)]
    # On initialise l qui est le nombre de chiffres rajoutés au carré
    l = 1
    # On initialise i qui sera le numero de la derniere ligne
    i =  int((n-1)/2)
    # On initialise j qui sera le numero de colonne qui sera le milieu de la ligne
    j =  0
    # valeur de départ que donnera la personne qui utilise la fonction
    carre[i][j] = k
    
    #Tant que le carré n'est pas rempli on continue
    while l != n*n:
    
        # On verifie si le case Sud Ouest de la precedente case
        # est rempli
        if (carre[(i + 1) % n][(j - 1) % n] != 0):
            # alors on monte d'une case
            j = (j + 1) % n
            # on augmente la valeur precedente
            k += 1
            carre[i][j] = k
            # On rajoute + 1 aux nombres de chiffres rajoutés
            l += 1
            
        # Comme la case Sud Ouest de la precedente case n'est pas rempli
        i = (i + 1) % n
        j = (j - 1) % n
        # on augmente la valeur precedente
        k += 1
        # On rempli cette case Sud Ouest  avec la valeur augmente
        carre[i][j] = k
        # On rajoute + 1 aux nombres de chiffres rajoutés
        l += 1
    return carre
    
    
#Fonction qui trouve le chiffre de début en connaissant l'ordre et la constante magique
def debut_carre(n,c):
    if (c >= (n**2*(n**2+1))/(2*n) and c%n == 0 ):
        return (2*c -n**3+n)/(2*n)
    else :
        return 0
