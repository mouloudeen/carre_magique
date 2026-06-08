# Carré Magique — Générateur en C, C++ et Python

Générateur de carrés magiques de tout ordre en C, C++ et Python.  
Implémentation bas niveau avec gestion mémoire manuelle et architecture modulaire.

## Qu'est-ce qu'un carré magique ?

Un carré magique d'ordre N est une grille N×N contenant les entiers de 1 à N²,  
où la somme de chaque ligne, colonne et diagonale est égale à la même constante (la **constante magique**).

## Structure du projet

```
carre_magique/
├── ALL/                        # Générateur universel (tout ordre, menu interactif)
│   ├── C/
│   ├── C++/
│   └── Python/
├── Impaire/
│   ├── carre_siamois/          # Ordre impair — méthode siamoise
│   │   ├── C/
│   │   ├── C++/
│   │   └── Python/
│   └── carre_lozenge/          # Ordre impair — méthode du losange
│       ├── C/
│       ├── C++/
│       └── Python/
├── paire_impaire/LUX/          # Ordre pair non divisible par 4 — méthode LUX
│   ├── C/
│   ├── C++/
│   └── Python/
└── paire_paire/permutation_diagonale/  # Ordre divisible par 4 — permutation diagonale
    ├── C/
    ├── C++/
    └── Python/
```

## Compilation et exécution

Pour les versions C et C++, utiliser `make` dans le dossier concerné :

```bash
cd ALL/C
make
./carre
```

```bash
cd ALL/C++
make
./carre
```

Pour Python :

```bash
cd ALL/Python
python3 test_carre_magique.py
```

> L'interface est identique pour les 3 langages.

## Interface

Au lancement, le programme affiche :

```
1 : test manuel des carrés magiques
2 : test avec des exemples prédéfinis des carrés magiques
q : quitter
```

### Mode manuel (option 1)

```
1 : choisir un ordre du carré magique
2 : choisir l'algorithme de construction du carré
0 : Accueil
q : quitter
```

**Option 1 — Choisir l'ordre**

L'ordre est détecté automatiquement et l'algorithme adapté est appliqué.  
L'affichage est limité aux ordres entre 3 et 20.

Exemple avec un carré losange d'ordre 3 :

```
C'est bien un carré magique d'ordre 3
 ------ ------ ------
|    8 |    3 |    4 |
 ------ ------ ------
|    1 |    5 |    9 |
 ------ ------ ------
|    6 |    7 |    2 |
 ------ ------ ------
```

**Option 2 — Choisir l'algorithme**

```
1 : carre lozenge
2 : carre siamois
3 : carre permutation
4 : carre LUX
5 : operation de 2 carres de meme ordre
0 : accueil
# : revenir au menu précédent
q : quitter
```

Exemple avec carré losange d'ordre 5 :

```
C'est bien un carré magique d'ordre 5
 ------ ------ ------ ------ ------
|   18 |   24 |    5 |    6 |   12 |
 ------ ------ ------ ------ ------
|   22 |    3 |    9 |   15 |   16 |
 ------ ------ ------ ------ ------
|    1 |    7 |   13 |   19 |   25 |
 ------ ------ ------ ------ ------
|   10 |   11 |   17 |   23 |    4 |
 ------ ------ ------ ------ ------
|   14 |   20 |   21 |    2 |    8 |
 ------ ------ ------ ------ ------
```

## Algorithmes implémentés

| Ordre | Méthode |
|-------|---------|
| Impair | Méthode siamoise |
| Impair | Méthode du losange |
| Pair non divisible par 4 | Méthode LUX |
| Divisible par 4 | Permutation diagonale |
| Tout ordre | Détection automatique (menu ALL) |

## Contexte

Projet personnel développé pour pratiquer :
- La gestion mémoire manuelle en C/C++
- L'algorithmique et les structures de données
- L'implémentation multi-langage d'un même algorithme

## Auteur

Sidali Zitouni Terki — [GitHub](https://github.com/mouloudeen) · [LinkedIn](https://linkedin.com/in/sid-ali-zitouni-terki-b07251208)
