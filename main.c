#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"wordcount.h"
//#define N 10 //Max word size

//#define LINE_MAX 100



int main(int argc, char* argv[]){

    FILE* fichier = NULL;

    int caractereActuel = 0;
    char tmpword[N] =" ";
    int i = 0; //Iterator 
    char chaine[LINE_MAX] = "";


    ListWord *list = initialisation();

    fichier = fopen(argv[1], "r");

    if (fichier != NULL)
    {   
        while (fgets(chaine, LINE_MAX, fichier) != NULL) // On lit le fichier 
        {
            if(chaine[0] == '#' || chaine[0] == ' ') continue;
            //printf("%s", chaine); // On affiche la chaîne qu'on vient de lire

			TextToWord(chaine, list);
        }
		
        fclose(fichier); //Close the file
    }


   printList(list);
   printf("%d total words \n", TotalWord(list));
   Clear(list);
   free(list);
   return 0;
}
