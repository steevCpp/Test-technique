
## Test d'exécution

```
Make 
```

```
./wordcount files/*.txt
```
## Algorithme
On crée une liste chaînée (une pile)) qui va contenir trois champs:
	String qui est le mot à stocker;
	count qui est le nombre de fois que le mot apparaît dans le texte.
	next qui est un pointeur vers l'élément suivant.

On ouvre le fichier et on parcourt ligne par ligne(les lignes commençants par # ou ' ' sont ignorées).
Dans chaque ligne on parcourt caractère par cractère, et on stocke dans tmpword.
Si le caractère suivant est un ' ' alors, on l'ignore et on ajoute tmpword dans un nouveau noeud de la liste.

## Limitation
Pour que ce programme affiche des resultats corrects, il faudrait que:
	
	Dans le fichier texte, il n'y a qu'une phrase par ligne.

	Il n'y ait pas d'espace au début des lignes.

	Il est sensible à a casses.
	

