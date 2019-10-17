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

vocabulary * add(vocabulary *head);
void find_data(vocabulary *head);
void update(vocabulary *head);
vocabulary * remove_data(vocabulary *head);
void print_list(vocabulary *head);
void export_list(vocabulary *head);
vocabulary * import_file(vocabulary *head);
