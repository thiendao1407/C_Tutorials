#include<stdio.h>
#include<string.h>

#define MAX 50

void reverse_string(char s[], char t[]);

int main () {
    char s[MAX], t[MAX];
    printf("Please enter the string:\n");
    gets(s);
    reverse_string(s,t);
    printf("\nReverse of the string is:\n%s\n", t);
    return 0;
}

void reverse_string(char s[], char t[]) {
    int length = strlen(s);
    for (int i = 0; i < length / 2; i++) {
        t[i] = s[length - i - 1];
        t[length - i - 1] = s[i];
    }
    t[length] = '\0';
}
