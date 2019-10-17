#include<stdio.h>
#include<string.h>

#define MAX 50

int main() {
    char s[MAX];
    do {
        printf("Please enter a string: ");
        gets(s);
    } while (strlen(s) >= MAX);

    for (int i = 0; i < strlen(s); i++)
        if (s[i] == ' ')
            printf("\n");
        else
            printf("%c", s[i]);
    return 0;
}
