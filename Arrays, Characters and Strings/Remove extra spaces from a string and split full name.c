#include<stdio.h>
#include<string.h>

#define MAX 50
// Remove extra spaces from a string
void remove_extra_spaces(char s[]);
void split_names(char s[]);

int main () {
    char s[MAX];
    printf("Please enter your full name: ");
    gets(s);
    remove_extra_spaces(s);
    split_names(s);
    return 0;
}

void remove_extra_spaces(char s[]) {
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
    // // Remove trailing white space
    if (s[strlen(s) - 1] == ' ')
        s[strlen(s) - 1] = '\0';
}

void split_names(char s[]) {
    for (int i = strlen(s) - 1; i >= 0; i--)
        if (s[i] == ' ') {
            printf("Last Name: %s\n", s + i + 1);
            s[i] = '\0';
            break;
        }

    for (int i = 0; i < strlen(s); i++)
        if (s[i] == ' ') {
            printf("Middle Name: %s\n", s + i + 1);
            s[i] = '\0';
            break;
        }

    printf("First Name: %s\n", s);
}
