# TP Structure de Données II (INF 231_EC2)

## Groupe de TP - Exercices en C

### Exercice 4 : Multiplication `a × b` (a,b > 0) en utilisant uniquement `+1`
- **Objectif :** Réaliser la multiplication de deux entiers positifs `a` et `b` sans utiliser l’opérateur `*`.
- **Principe :**
  - La multiplication est vue comme une somme répétée.
  - Comme on doit utiliser seulement `+1`, on construit `a` par incréments et on répète cette opération `b` fois.
  - On accumule les résultats pour obtenir le produit final.

**Exemple :**  
`3 × 4 = (1+1+1) + (1+1+1) + (1+1+1) + (1+1+1) = 12`

---

### Exercice 7 : Inverser un tableau
- **Objectif :** Inverser les éléments d’un tableau donné.
- **Principe :**
  - On utilise deux indices : `i` (début) et `j` (fin).
  - On échange `tab[i]` et `tab[j]`.
  - On répète jusqu’à ce que tout le tableau soit inversé.

**Exemple :**  
`[1, 2, 3, 4, 5] → [5, 4, 3, 2, 1]`

---

## Compilation et exécution
Pour compiler et exécuter le programme :

```bash
# Compilation
gcc exercice.c -o exercice

# Exécution
./exercice
