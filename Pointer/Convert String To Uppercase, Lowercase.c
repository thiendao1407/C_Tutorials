#include<stdio.h>
#include<string.h>
#include<ctype.h>

void upper(char *s, int l);
void lower(char *s, int l);
void upper(char *s, int l) {
    int i;
    for (i = 0; i < l; i++)
        *(s+i) = toupper(*(s+i));
    printf("%s", s);
}

void lower(char *s, int l) {
    int i;
    for (i = 0; i < l; i++)
        *(s+i) = tolower(*(s+i));
    printf("%s", s);
}

void main(void) {
    int i, l;
    char s[50];
    printf("nhap vao chuoi: ");
    gets(s);
    l = strlen(s);
    upper(s, l);
    printf("\n");
    lower(s, l);
}
