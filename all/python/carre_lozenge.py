from typing import List

# On commence à remplir les nombres impairs en forme de losange
def remplir_impair(n : int,k : int) -> List[int]:
    #genere un carre d'ordre n avec que des 0
    carre = [[0 for i in range(n)] for j in range(n)]
    # on commence par iniatiliser la borne inf
    imin = int((n-1)/2)
    jmin = 0
    # la borne sup
    imax = 0
    jmax = int((n-1)/2)
    #initialise i ,j  et cpt à 0
    i =0
    j=0
    cpt = 0
    #tant que k est inferieur ou égale n^2  :
    while k <= n*n:
        #on change la valeur i et j en imin et jmin qui sont les coordonnées de la borne inf
        i = imin
        j = jmin
        #tant que les coordonnes ne rejoignent les coordonnées de la borne sup:
        while  (i >= imax) and (j <= jmax):
            #on inscrit k au coordonnée (i,j)
            carre[i][j] = k
           
            #on rajoute 2 pour que ca soit le nombre impairs suivant
            k += 2
            #on utilise le sud-est (voir le carre siamois)
            i -= 1
            j += 1
        
        # borne inf et sup , change par rapport à chaque augmentation du compteur
        # si le compteur est pair alors la borne inf va vers l'est et borne sup va vers le sud
        if (cpt %2 ==0):
            cpt += 1
            jmin += 1
            imax += 1
        
        #si le compteur est impair alors la borne inf va vers le sud et borne sup va vers l'est
        else :
            cpt += 1
            jmax += 1
            imin += 1
    return carre


#On remplit le coté droit en nombre pair qui sont les (n-1)^2 premiers nombres pairs
def remplir_pair_droite(carre: List[int],n : int,k : int) -> List[int] :
    #on commence aux coordonnées a coté a droite du milieu de la dernière ligne
    i_d = n-1
    j_d = int((n-1)/2)+1
    
    #on initialise k,arret à 0 et cptd à 1
    k -= 2
    arret = 0
    cptd = 1
    # tant cptd est inferieur egale à (n-1)/2
    while cptd <= (n-1)/2:
        #on initialise cptvd à 1
        cptvd = 1
        #on ajoute 2 à arret
        arret += 2
        #on avance au nombre pair suivant
        k += 2
        #on initialise c à k
        c = k
        #on initialise i,j à i_d,j_d
        i = i_d
        j = j_d
        #on inscript c au coordonnée i,j
        carre[i][j] = c
        #tant que cptvd soit inferieur à l'arret
        while cptvd < arret:
            #on ajoute n-1 à c
            c += n-1
            # on se décale vers le sud
            i = (i +1)%n
            # inscript la nouvelle valeur c
            carre[i][j] =c
            cptvd += 1
        
        #on se decale vers le sud est
        i_d = (i_d -1)%n
        j_d = (j_d +1)%n
        cptd += 1
    return carre


#On remplit le coté gauche en nombre pair qui sont entre (n-1)^2 et n^2-1
def remplir_pair_gauche(carre : List[int],n : int) -> List[int]:
    #on commence aux coordonnées a coté a gauche du milieu de la premiere ligne
    i_d = 0
    j_d = int((n-1)/2)-1
    
    #on initialise k à n*n+1,arret à 0 et cptg à 1
    k = n*n+1
    arret = 0
    cptg = 1
    
    # tant cptg est inferieur egale à (n-1)/2
    while cptg <= (n-1)/2:
        #on initialise cptvg à 1
        cptvg = 1
        #on ajoute 2 à arret
        arret += 2
        #on recule au nombre pair precedent
        k -= 2
        #on initialise c à k
        c = k
        #on initialise i,j à i_d,j_d
        i = i_d
        j = j_d
        #on inscript c au coordonnée i,j
        carre[i][j] =c
        #tant que cptvg soit inferieur à l'arret
        while cptvg < arret:
            #on enlève n-1 à c
            c -= n-1
            # on se décale vers le nord
            i = (i -1)%n
            # inscript la nouvelle valeur c
            carre[i][j] =c
            cptvg += 1
        
        #on se decale vers le sud ouest
        i_d = (i_d +1)%n
        j_d = (j_d -1)%n
        cptg += 1
    return carre
    
    
def carre_lozenge(n : int) -> List[int]:
    #on commence par les nombres impairs
    carre = remplir_impair(n,1)
    #puis par les (n-1)^2 premiers nombres pairs
    carre = remplir_pair_droite(carre,n,2)
    #a la fin,  les nombres pairs qui sont entre (n-1)^2 et n^2-1 inclus
    return remplir_pair_gauche(carre,n)
