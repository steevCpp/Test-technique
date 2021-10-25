#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>
#include"wordcount.h"


#define N 19

/************************************************/
ListWord *initialisation()
{
    ListWord *list = malloc(sizeof(*list));
    //Word *word = malloc(sizeof(*word));

    if (list == NULL ) /*allocation fail */
    {
        exit(EXIT_FAILURE);
    }

    list->first = NULL;

    return list;
}

/***********************************************/
void insert(ListWord *list, char newstring[N])
{  
    /* creat new word space*/
    Word *new = malloc(sizeof(*new));
    if (list == NULL || new == NULL)
    {
        exit(EXIT_FAILURE);
    }
    strcpy(new->String, newstring);
    new->count = +1;

    /* Insert new word */
    new->next = list->first;
    list->first = new;
}

/********************************************/
void printList(ListWord *list)
{
    if (list == NULL)
    {
        exit(EXIT_FAILURE);
    }

    Word *act = list->first;

    while (act != NULL)
    {
        printf("%d %s\n ", act->count,act->String);
        act = act->next;
    }
}
/*************************************/
bool LookForelement(ListWord *list, char tmpword[N])
{
    if (list == NULL)
    {
        exit(EXIT_FAILURE);
    }

    Word *act = list->first;

    while (act != NULL)
    {
        //printf("%s\n ",act->String);
		if (!strcmp(act->String, tmpword)){act->count++; return 1;}; //return 1 if tmpword exist
        act = act->next;
    }
    return 0;
}

/***********************************/
/* return size of list */
int Length(ListWord *list)
{
        int n=0;
        Word *act = list->first;
        while(list->first)
          {
              n++;
              act = act->next;
          }
        return n;
}


/*******************************************/
void Clear(ListWord *list)
{

        while(list->first)
          {
             Word *tmp = list->first;
             free(list->first);
             list->first = tmp->next;
          }
}

/*******************************************/

void TextToWord(char line[LINE_MAX], ListWord *list){
   

  int i = 0;
  int j = 0;
  char tmpword[N] = " ";
        while(line[i]!='\0'){
			
            if(line[i] != ' ' ){
                tmpword[j] = line[i];
				j++;

            }else{
               
                    j = 0;
                    
                    if(LookForelement(list, tmpword)){

                    }else{
                    	insert(list,  tmpword);

                          }
                     memset(&tmpword[0], 0, sizeof(tmpword));// make empty tmpword
        }
		i++;
    }

}

/******************************************/

int TotalWord(ListWord *list)
{
	int sum = 0;

    if (list == NULL)
    {
        exit(EXIT_FAILURE);
    }

    Word *act = list->first;

    while (act != NULL)
    {
        sum+= act->count;
        act = act->next;
    }
  return sum;
}





