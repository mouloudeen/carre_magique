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
├── Impaire/                    # Ordre impair (algorithme de Siamese)
│   ├── C/
│   ├── C++/
│   └── Python/
├── paire_impaire/LUX/          # Ordre pair non divisible par 4 (méthode LUX)
│   ├── C/
│   ├── C++/
│   └── Python/
└── paire_paire/permutation_diagonale/   # Ordre divisible par 4
    ├── C/
    ├── C++/
    └── Python/
```

## Compilation

Pour les versions C et C++, utiliser `make` dans le dossier concerné :

```bash
cd ALL/C
make
./carre_magique <ordre>

cd ALL/C++
make
./carre_magique <ordre>
```

Exemple :
```bash
./carre_magique 5
```

Pour Python :
```bash
python3 carre_magique.py <ordre>
```

## Algorithmes implémentés

| Ordre | Méthode |
|-------|---------|
| Impair | Algorithme de Siamese (décalage en escalier) |
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
