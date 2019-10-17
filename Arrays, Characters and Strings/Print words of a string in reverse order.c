#include<stdio.h>
#include<string.h>

#define MAX 50

void word_reverse(char s[]);

int main () {
    char s[MAX];
    printf("Please enter a string:\n");
    gets(s);
    word_reverse(s);
    return 0;
}

void word_reverse(char s[]) {
    for (int i = strlen(s) - 1; i>=0; i--) {
        if (s[i] == ' ' && s[i+1] != ' ') {
            printf("%s", s+i+1);
            printf("%c",s[i]);
            s[i] = '\0';

        }
        if (i==0)
            printf("%s", s);
    }
    printf("\n");
}
