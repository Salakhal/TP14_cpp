
# TP14 : Gestion des Exceptions 

 ## Objectif général

 Ce TP a pour but de pratiquer la gestion des exceptions en C++ à travers différents scénarios : division sécurisée, gestion de stock, lecture de fichiers et simulation bancaire. L’objectif est d’apprendre à anticiper les erreurs et à les traiter correctement pour éviter que le programme plante.

## Structure du TP
```
TP14/
│
├── Exercice1_Division/
│   └── main.cpp
│
├── Exercice2_Stock/
│   ├── Produit.hpp
│   └── main.cpp
│
├── Exercice3_Fichier/
│   └── main.cpp
│   └── exemple.txt
│
├── Exercice4_Banque/
│   ├── Compte.hpp
│   └── main.cpp
│
└── README.md
```

 ## Exercice 1 : Division sécurisée

 ## Objectif :
 Utiliser un bloc try-catch pour intercepter une division par zéro.

## Description :
Écrire une fonction `diviser(a, b)` qui retourne `a / b`. Si `b` vaut zéro, une exception est levée avec un message explicite.

 ## Exemple de sortie :
 ```
10 / 2 = 5
Erreur : division par zéro impossible !
7 / 3 = 2.33333
```
 ##  Exemple d’exécution (image)
 
Voici un exemple de l'exécution du programme (screenshot) : 

<img width="772" height="110" alt="image" src="https://github.com/user-attachments/assets/cdcab2a2-85b2-4ebf-8ae4-0972498a16c7" />


## Exercice 2 : Gestion d’un stock de produits

## Objectif :
Créer et manipuler une exception personnalisée.

## Description :

Créer une classe `Produit` avec un stock initial.

Méthode `vendre(q)` pour décrémenter le stock.

Si la quantité demandée dépasse le stock, lever une exception `StockInsuffisantException`.

## Exemple de sortie :

```
Produit : Cahier, Stock : 10
3 unités de Cahier vendues. Stock restant : 7
Erreur : stock insuffisant pour le produit Cahier
4 unités de Cahier vendues. Stock restant : 3

```
 ##  Exemple d’exécution (image)
 
Voici un exemple de l'exécution du programme (screenshot) : 

 <img width="775" height="138" alt="image" src="https://github.com/user-attachments/assets/fcaf0fe5-2f79-4e2b-a4a7-5fd3c1abf2d1" />


## Exercice 3 : Lecture d’un fichier avec gestion d’erreurs

## Objectif :
Gérer les erreurs lors de la lecture d’un fichier texte.

## Description :

Fonction lireFichier(nomFichier) qui lit un fichier ligne par ligne.

Si le fichier n’existe pas, lever une exception avec un message clair.

## Exemple de sortie :
```
Contenu du fichier 'exemple.txt' :
Bonjour
Ceci est un fichier
Fin du fichier
Erreur : impossible d'ouvrir le fichier fichier_inexistant.txt

```
 ##  Exemple d’exécution (image)
 
Voici un exemple de l'exécution du programme (screenshot) : 

<img width="842" height="171" alt="image" src="https://github.com/user-attachments/assets/b98342de-c2ff-4445-8bfa-27a490a94e87" />




## Exercice 4 : Simulation bancaire avec plusieurs exceptions

## Objectif :
Maîtriser la gestion de plusieurs types d’exceptions.

## Description :

Classe Compte avec méthodes `deposer(montant)` et `retirer(montant)`.

Exceptions possibles :

MontantInvalideException pour un dépôt/retrait négatif

SoldeInsuffisantException pour un retrait supérieur au solde

Exemple de sortie :
```
Titulaire : Alice, Solde : 1000
Dépôt de 500 effectué. Nouveau solde : 1500
Erreur : montant de dépôt invalide pour Alice
Retrait de 300 effectué. Nouveau solde : 1200
Erreur : montant de retrait invalide pour Alice
Erreur : solde insuffisant pour Alice

```
 ##  Exemple d’exécution (image)
 
Voici un exemple de l'exécution du programme (screenshot) : 

<img width="721" height="206" alt="image" src="https://github.com/user-attachments/assets/37b14c27-adf5-4913-a91e-1eb8b74a1ad9" />












