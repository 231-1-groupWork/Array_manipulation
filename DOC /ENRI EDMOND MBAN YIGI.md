# TP Structure de Données II (INF 231_EC2)

## Groupe de TP - Exercices en C

### Exercice 4 : Multiplication `a × b` (a,b > 0) en utilisant uniquement `+1`
- **Objectif :** réaliser la multiplication de deux entiers positifs `a` et `b` sans utiliser l’opérateur `*`.  
- **Principe :**
  - On considère la multiplication comme une somme répétée.
  - Mais la consigne impose d’utiliser exclusivement `+1`.  
  - Donc, pour calculer `a × b` :
    - On construit `a` par incréments de `+1`.
    - On répète cette construction `b` fois.
  - On obtient le résultat en additionnant progressivement.
 
  - 
### Exercice 7 : Inverser un tableau
- **Objectif :** inverser les éléments d’un tableau donné.  
- **Principe :**
  - On utilise deux indices : un au début (`i`), un à la fin (`j`).
  - On échange `tab[i]` avec `tab[j]`.
  - On rapproche les indices jusqu’à ce que tout le tableau soit inversé.


---

## Compilation et exécution
Dans le terminal, placez-vous dans le dossier du projet, puis tapez :

```bash
# Compilation
gcc exercice.c -o exercice

# Exécution
./exercice
