
## Test d'exécution
```
cmake . 
```

```
Make 
```

```
./bin/wordcount files/*.txt
```
## Algorithme
On crée une liste chaînée (une pile)) qui va contenir trois champs:

	String qui est le mot à stocker;

	count qui est le nombre de fois que le mot apparaît dans le texte.

	next qui est un pointeur vers l'élément suivant.

On ouvre le fichier et on parcourt ligne par ligne(les lignes commençants par # ou ' ' sont ignorées).
Dans chaque ligne on parcourt caractère par caractère, et on stocke dans tmpword.
Si le caractère suivant est un ' '(vide) alors on l'ignore et on ajoute tmpword dans un nouveau noeud de la liste.

## Limitation
Cas non gérées:
	
	Dans le fichier texte, il n'y ait qu'une phrase par ligne.

	Il n'y ait pas d'espace au début des lignes et des virgules.

	Il est sensible à a casses.

## Extension

Pour optimiser les performances, on peut faire du parallélisme.

On attribue à chaque processus un certain nombre de fichiers textes, ils effectuent le traitement et une collecte est faite à la fin pour constituer le resultat final.


