# carre_magique

## Methode siamoise Nord-Est

voir https://fr.wikipedia.org/wiki/Carré_magique_(mathématiques)
dans la partie Méthode siamoise\
![Capture d’écran 2023-11-27 à 21 55 26](https://github.com/mouloudeen/carre_magique/assets/33528731/75866f43-043d-46fb-8f0e-8247d5a1e3c8) \
![Capture d’écran 2023-11-27 à 21 49 52](https://github.com/mouloudeen/carre_magique/assets/33528731/31be5bbb-8261-42b5-b105-22045670e66c) \

On trouve bien la somme 15 pour la somme de chaque lignes, colonnes et chaque diagonales.


Soit $n$ l'ordre du carré magique, $k$ le nombre de début, $m$ le plus grand nombre du carré magique et 
$c$ la constante magique (la somme de chaque ligne, chaque colonne et chaque diagonale).\
Le but de cette démonstration est de retrouver $k$ en connaissant $n$ et $c$.\
On sait que pour calculer la somme des $m$ premiers entiers naturels, on a comme formule:
$$\frac{m \times (m+1)}{2}$$

or il faut retirer la somme des $(k-1)$ premiers entiers naturels:
$$\frac{(k-1)\times k}{2}$$

De plus, c'est un carré magique d'ordre $n$, on a donc $n^2$ cases dans ce carré et donc :
$$k = m -n^2 +1$$
et donc:
$$\frac{(m -n^2+1) \times (m-n^2)}{2}$$

On a donc que la somme de tous les nombres du carré sont:
$$\frac{m \times (m+1)}{2} - \frac{(m -n^2+1) \times (m-n^2)}{2}$$

et on a aussi que $c$ qui est la somme de chaque lignes et comme on a $n$ lignes.
On a donc que la somme de tous le carré est aussi égale à $n\times c$.

On a donc comme équation:
$$\frac{m.(m+1) - (m -n^2+1).(m-n^2)}{2} = n.c$$
On peut simplifier:
$$m.(m+1) - (m -n^2+1).(m-n^2) = 2.n.c$$
Après développement et simplification on trouve:
$$2.n^2.m - n^4 + n^2 = 2.n.c$$
Si et seulement si:
$$2.n^2.m  = 2.n.c + n^4 - n^2$$
On a donc que:
$$m = \frac{2.n.c + n^4 - n^2}{2.n^2}$$

comme $k = m -n^2 +1 $ si on a donc:
$$k = \frac{2.n.c + n^4 - n^2}{2.n^2} -n^2 +1$$
Si et seulement si:
$$k = \frac{2.n.c + n^4 - n^2 +(-n^2 +1).2.n^2 }{2.n^2}$$
Après développement et simplification on trouve:
$$k = \frac{2.c - n^3 + n  }{2.n}$$
                  
Elle est implémnté en Python, C et C++ de façon Programme Orienté Objet.
