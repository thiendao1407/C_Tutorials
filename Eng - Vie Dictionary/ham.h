#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char ctemp[30];
char word[30], meaning[100];

typedef struct Word {
    char * word;
    char * meaning;
    struct Word * next;
} vocabulary;

void add();
void find_data();
void update();
void remove_data();
void print_list();
void export_list ();
void import_file();

