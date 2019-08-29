#include<stdio.h>
#include<string.h>

#define MAX 50

int main() {
    char s[MAX];
    printf("Please enter the string: ");
    gets(s);

    // Remove duplicate white spaces in string
    for (int i = 0; i < strlen(s) - 1; i++)
        if (s[i] == ' ' && s[i + 1] == ' ') {
            for (int j = i; j < strlen(s) - 1; j++)
                s[j] = s[j + 1];
            s[strlen(s) - 1] = '\0';
            i--;
        }

    // Remove leading white space
    if (s[0] == ' ') {
        for (int i = 0; i < strlen(s); i++)
            s[i] = s[i + 1];
        s[strlen(s) - 1] = '\0';
    }

    // Remove trailing white space
    if (s[strlen(s) - 1] == ' ')
        s[strlen(s) - 1] = '\0';

    printf("The string after removing extra spaces:\n%s\n", s);

    return 0;
}
