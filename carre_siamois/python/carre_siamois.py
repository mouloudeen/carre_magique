from typing import List


#Les 8 modèles possibles de la construction de façon siamois

#remplir le carré magique
def remplir_carre(carre,n,k,debut_i,debut_j,dep_i,dep_j,depls_i,depls_j):
    # On initialise l qui est le nombre de chiffres rajoutés au carré
    l = 1
    # On initialise i qui sera le numero de ligne à debut_i
    i = debut_i
    # On initialise j qui sera le numero de colonne à debut_j
    j = debut_j
    # valeur de départ que donnera la personne qui utilise la fonction
    carre[i][j] = k
    
    #Tant que le carré n'est pas rempli on continue
    while l != n*n:
        # On verifie si le case ((i +dep_i) % n,(j +dep_j) % n) n est pas rempli
        if (carre[(i +dep_i) % n][(j +dep_j) % n] != 0):
            # alors on rempli la case ((i + depls_i) % n, (j+ depls_j)%n)
            i = (i + depls_i) % n
            j = (j+ depls_j)%n
            # on augmente la valeur precedente
            k += 1
            carre[i][j] = k
            # On rajoute + 1 aux nombres de chiffres rajoutés
            l += 1
        # on rempli la case (i +dep_i) % n,(j +dep_j) % n)
        i = (i + dep_i) % n
        j = (j + dep_j) % n
        # on augmente la valeur precedente
        k += 1
        carre[i][j] = k
        # On rajoute + 1 aux nombres de chiffres rajoutés
        l += 1
    return carre

#Siamois Nord Est avec comme départ le milieu de la première ligne
def carre_siamois_ne_pl(n : int,k : int) -> List [int]:
    # Creation d'un carré rempli de 0
    carre = [[0 for i in range(n)] for j in range(n)]
    return remplir_carre(carre,n,k,0,int((n-1)/2),-1,1,1,0)

#Siamois Nord Est avec comme départ le milieu de la dernière colonne
def carre_siamois_ne_dc(n : int,k : int) -> List [int]:
    # Creation d'un carré rempli de 0
    carre = [[0 for i in range(n)] for j in range(n)]
    return remplir_carre(carre,n,k,int((n-1)/2),n - 1,-1,1,0,-1)

#Siamois Sud Est comme départ le milieu de la dernière ligne
def carre_siamois_se_dl(n : int,k : int) -> List [int]:
    # Creation d'un carré rempli de 0
    carre = [[0 for i in range(n)] for j in range(n)]
    return remplir_carre(carre,n,k,n-1,int((n-1)/2),1,1,-1,0)
    
#Siamois Sud Est comme départ le milieu de la dernière colonne
def carre_siamois_se_dc(n : int,k : int) -> List [int]:
    # Creation d'un carré rempli de 0
    carre = [[0 for i in range(n)] for j in range(n)]
    return remplir_carre(carre,n,k,int((n-1)/2),n - 1,1,1,0,-1)

#Siamois Nord Ouest avec comme départ le milieu de la première ligne
def carre_siamois_no_pl(n : int,k : int) -> List [int]:
    # Creation d'un carré rempli de 0
    carre = [[0 for i in range(n)] for j in range(n)]
    return remplir_carre(carre,n,k,0,int((n-1)/2),-1,-1,1,0)


#Siamois Nord Ouest avec comme départ le milieu de la première colonne
def carre_siamois_no_pc(n : int,k : int) -> List [int]:
    # Creation d'un carré rempli de 0
    carre = [[0 for i in range(n)] for j in range(n)]
    return remplir_carre(carre,n,k,int((n-1)/2),0,-1,-1,0,1)

    
#Siamois Sud Ouest comme départ le milieu de la dernière ligne
def carre_siamois_so_dl(n : int,k : int) -> List [int]:
    # Creation d'un carré rempli de 0
    carre = [[0 for i in range(n)] for j in range(n)]
    return remplir_carre(carre,n,k,n-1,int((n-1)/2),1,-1,-1,0)
    

#Siamois Sud Ouest comme départ le milieu de la première colonne
def carre_siamois_so_pc(n : int,k : int) -> List [int]:
    # Creation d'un carré rempli de 0
    carre = [[0 for i in range(n)] for j in range(n)]
    return remplir_carre(carre,n,k,int((n-1)/2),0,1,-1,0,1)

#Fonction qui trouve le chiffre de début en connaissant l'ordre et la constante magique
def debut_carre(n,c):
    return (2*c -n**3+n)/(2*n)
    

#Fonction qui construit un carre d'un des 8 modele qu'avec la constante magique et l'ordre du carré
def carre_siamois(funct,n,c):
   
    # si c a cette condition , il doit etre le minimum
    #possible de la constante magique
    if c < (n**2*(n**2+1))/(2*n):
            c = (n**2*(n**2+1))/(2*n)
    
    # On prendra le c le plus proche qui est divisible par n
    elif c%n != 0:
            i = c//n
            c = i*n
    #Recupère le nombre du début carré magique
    k = debut_carre(n,c)
    return funct(n,k)
