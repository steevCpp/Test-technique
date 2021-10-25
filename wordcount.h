#ifndef _WORDCOUNT_H
#define _WORDCOUNT_H

#include<stdbool.h>

#define N 19
#define LINE_MAX 100

/* structure for define et dictionnary(int string) */
typedef struct Word Word;
struct Word{
 char String[N];
 int count;
 Word* next;
};

/* Control structure. We work with a pile */
typedef struct ListWord ListWord;
struct ListWord{

 Word *first;

};

/* Initialization of structure */
ListWord *initialisation();

/* Push a new word in a structure */
void insert(ListWord *, char[]);

/* Print all occurence */
void printList(ListWord *);

/* Total word in text */
int Length(ListWord *);

/*clear listWord memory */
void Clear(ListWord *);

/* split sentense by word */
void TextToWord(char [LINE_MAX], ListWord *list);

/*  Looking for element in list , return true if element was founed     */
bool LookForelement(ListWord *, char [N]);












#endif
