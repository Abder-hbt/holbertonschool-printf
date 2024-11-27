
# Project Printf

Ce projet implémente une version simplifiée de la fonction standard `printf` en langage C. L'objectif est de recréer une fonction `_printf` capable de gérer différents spécificateurs tout en respectant des contraintes strictes de compilation.

---

## 1. Clarté du Projet
Ce projet vise à fournir une compréhension approfondie de :
- **Fonctions variadiques (`va_list`)** : Permet la gestion d'un nombre variable d'arguments.
- **Gestion dynamique de la mémoire** : Utilisation des fonctions `malloc` et `realloc`.
- **Spécificateurs de formatage** : Implémentation de spécificateurs comme `%c`, `%s`, `%d`, etc.

Il met en pratique des concepts essentiels du langage C en adoptant une approche modulaire et extensible.

---

## 2. Instructions et Configuration

### **Prérequis**
- **Système** : Ubuntu 20.04 LTS.
- **Compilateur** : GCC avec les options strictes suivantes :
  ```bash
  gcc -Wall -Wextra -Werror -pedantic -std=gnu89 -Wno-format *.c
  ```
Éditeurs recommandés : vi, vim, ou emacs.
Compilation
Pour compiler le projet, utilisez la commande suivante :
gcc -o _printf *.c

---

## 3. Guide d'Utilisation

La fonction `_printf` fonctionne de manière similaire à `printf`. Elle prend une chaîne de format en entrée, suivie d'arguments optionnels pour les spécificateurs.

### **Exemple d'utilisation** :
```c
_printf("Hello, %s!\n", "world");
Ce code affichera :
Hello, world!.
```

Spécificateurs pris en charge :
%c : Affiche un caractère.
%s : Affiche une chaîne de caractères.
%d et %i : Affichent des nombres entiers.
%% : Affiche un %.

---

## 4. Contribution et Collaboration

### **Collaborateurs** :
- **Abderrahmane**
- **Aurélien**

---

## 5. Structure et Organisation du Code

- **main.h** :
  Contient les prototypes des fonctions `_printf` et `_putchar`.

- **_putchar.c** :
  Fournit une fonction basique pour afficher un caractère sur la sortie standard en utilisant `write`.

- **printf.c** :
  Contient l'implémentation principale de la fonction `_printf`.
  - Utilise `va_list` pour gérer un nombre variable d'arguments.
  - Intègre des mécanismes de gestion dynamique de mémoire.

- **main.c** :
  Contient les tests principaux pour vérifier le bon fonctionnement de la fonction `_printf`.
  - Compare les résultats avec la fonction `printf` standard.

---

## 6. Facilité et Maintenance

### Avantages :
- **Code modulaire** :
  Chaque fichier remplit une fonction spécifique, ce qui facilite la lisibilité et la maintenance du projet.

- **Gestion dynamique de la mémoire** :
  Le buffer s'adapte dynamiquement à la longueur de la chaîne de caractères à afficher, évitant ainsi les débordements et améliorant l'efficacité.