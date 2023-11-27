from typing import List
def carre_siamois_ne(n : int,k : int) -> List [int]:
    carre = [[0 for i in range(n)] for j in range(n)]
    l = 1
    i = 0 
    j =  int((n-1)/2)
    carre[i][j] = k
    while l != n*n:
        if (carre[(i - 1) % n][(j + 1) % n] != 0):
            i = (i + 1) % n
            k += 1
            carre[i][j] = k
            l += 1
        i = (i - 1) % n
        j = (j + 1) % n
        k += 1
        carre[i][j] = k
        l += 1
    return carre
