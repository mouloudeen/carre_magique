# Carré Magique — Générateur en C, C++ et Python

Générateur de carrés magiques de tout ordre en C, C++ et Python.  
Implémentation bas niveau avec gestion mémoire manuelle et architecture modulaire.

## Qu'est-ce qu'un carré magique ?

Un carré magique d'ordre N est une grille N×N contenant les entiers de 1 à N²,  
où la somme de chaque ligne, colonne et diagonale est égale à la même constante (la **constante magique**).

## Structure du projet

```
carre_magique/
├── ALL/                        # Générateur universel (tout ordre)
│   ├── C/
│   ├── C++/
│   └── Python/
├── Impaire/
│   ├── carre_siamois/          # Ordre impair (méthode Siamoise)
│   │   ├── C/
│   │   ├── C++/
│   │   └── Python/
│   └── carre_lozenge/          # ordre impair (méthode du losange)
│       ├── C/
│       ├── C++/
│       └── Python/
├── paire_impaire/LUX/          # Ordre pair non divisible par 4 (méthode LUX)
│   ├── C/
│   ├── C++/
│   └── Python/
└── paire_paire/permutation_diagonale/   # Ordre divisible par 4 (méthode par la permutation diagonale)
    ├── C/
    ├── C++/
    └── Python/
```

## Compilation

Pour les versions C et C++, utiliser `make` dans le dossier concerné :

```bash
cd all/C
make
./carre

cd all/C++
make
./carre

```

Exemple :
```bash
./carre_magique
```
1 : test manuel des carrés magiques
2 : test avec des exemples prédéfinis des carrés magiques
q : quitter
_


Pour Python :
```bash
cd all/python
python3 test_carre_magique.py
```

## Algorithmes implémentés

| Ordre | Méthode |
|-------|---------|
| Impair | méthode siamoise  |
| Impair | méthode du losange |
| Pair non divisible par 4 | Méthode LUX |
| Divisible par 4 | Permutation diagonale |
| Tout ordre | Méthode générale (ALL) |

## Contexte

Projet personnel développé pour pratiquer :
- La gestion mémoire manuelle en C/C++
- L'algorithmique et les structures de données
- L'implémentation multi-langage d'un même algorithme

## Auteur

Sidali Zitouni Terki — [GitHub](https://github.com/mouloudeen) · [LinkedIn](https://linkedin.com/in/sid-ali-zitouni-terki-b07251208)
