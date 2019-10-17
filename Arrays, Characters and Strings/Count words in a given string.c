#include<stdio.h>
#include<string.h>

#define MAX 50

int main() {
    char s[MAX];
    int icount = 0;

    do {
        printf("Please enter a string: ");
        gets(s);
    } while (strlen(s) >= MAX);

    for (int i = 0; i < strlen(s) - 1; i++)
        if (s[i] != ' ' && s[i + 1] == ' ')
            icount++;
    if (s[strlen(s) - 1] != ' ')
        icount++;

    printf("The number of words is %d", icount);
    return 0;
}
