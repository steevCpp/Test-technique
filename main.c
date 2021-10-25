#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"wordcount.h"


int main(int argc, char* argv[]){

    FILE* fichier = NULL;


    char tmpword[N] =" ";
    char chaine[LINE_MAX] = "";


    ListWord *list = initialisation();//structure control initilization 

  for(int j=1;j<argc;j++){
    fichier = fopen(argv[j], "r");

    if (fichier != NULL)
    {   
        while (fgets(chaine, LINE_MAX, fichier) != NULL) // On lit le fichier ligne par ligne
        {
            if(chaine[0] == '#' || chaine[0] == ' ') continue;

			TextToWord(chaine, list);//adding words in the list
        }
        fclose(fichier); //Close the file
    }
  }

   printList(list);//print all elements in the list
   printf("%d total words \n", TotalWord(list));
   Clear(list);
   free(list);//free control structure memory
   return 0;
}
