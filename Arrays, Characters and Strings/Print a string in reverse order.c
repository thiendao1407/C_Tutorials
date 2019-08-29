#include<stdio.h>
#include<string.h>

#define MAX 50

int main () {
    char s[MAX];
    printf("Please enter a string:\n");
    gets(s);
    int length = strlen(s);
    for (int i = length - 1; i >= 0; i--)
        printf("%c", s[i]);
    printf("\n");
    return 0;
}
