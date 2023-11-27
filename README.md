# carre_magique

## Methode siamoise Nord-Est

voir https://fr.wikipedia.org/wiki/Carré_magique_(mathématiques)
dans la partie Méthode siamoise
Cette méthode est conçu pour n'importe quel ordre impair.
                   ___ ___ ___
                  |   |   |  *|
                   ––– –––↗–––
                  |   | * |   |
                   –––↗––– –––
                  | * |   |   |
                   ––– ––– –––
↓   
Si sur la case est déja rempli, on descend d'un rang:
                   ___ ___ ___
                  |   |   | X | X représente un nombre quelconque
                   ––– –––↗–––
                  |   | * |   |
                   –––↗–↓–– –––
                  | * | *  |   |
                   ––– ––– –––



Exemple avec ordre 3 et 1 comme chiffre de départ:
                   ___ ___ ___
                  |   | 1 |   |
                   ––– ––– –––
                  |   |   |   |
                   ––– ––– –––
                  |   |   |   |
                   ––– ––– –––

 On augmente le chiffre de départ de +1 , on place le 2:
                   ___ ___↗___
                  |   | 1 |   |
                   ––– ––– –––
                  |   |   |   |
                   ––– ––– –––
                  |   |   | 2 |
                   ––– ––– ↗–––

pareil avec la suite :
                   ___ ___ ___
                  |   | 1 |   |
                   ––– ––– –––
                  | 3 |   |   |
                  ↗––– ––– ––-↗
                  |   |   | 2 |
                   ––– ––– –––

Comme il ya deja un nombre, on descend d'un rang
                   --- --- ---
                  |   | 1 |   |
                   ––– ––– –––
                  | 3 |   |   |
                   –↓– ––– –––
                  | 4 |   | 2 |
                   ––– ––– –––


A la fin on trouve:   
                                15
                   --- --- --- ↗ 
                  | 9 | 1 | 6 | → 15
                   ––– ––– –––
                  | 3 | 5 | 8 | → 15
                   –-– ––– –––
                  | 4 | 10| 2 | → 15
                   ––– ––– ––– ↘︎
                    ↓   ↓   ↓    15
                   15   15  15

On a bien un carré magique.
                  
On commence à l'implémenter en python:
