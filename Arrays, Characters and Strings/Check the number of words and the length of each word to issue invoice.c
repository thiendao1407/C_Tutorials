#include<stdio.h>
#include<string.h>

#define MAX 100

void number_of_words(char s[], int *word1, int *word2);
void remove_extra_spaces(char s[]) ;

int main() {
    char s[MAX];
    int word1 = 0, word2 = 0;
    do {
        printf("Please enter your telegram\n");
        gets(s);
    } while (strlen(s) > MAX);

    remove_extra_spaces(s);
    number_of_words(s, &word1, &word2);

    printf("Number of words: %d\n", word1 + word2);
    printf("Words of length less than or equal to 8 characters: %d\n", word1);
    printf("Words of length more than 8 characters: %d\n", word2);
    printf("The money you must pay: %d\n", 100 * word1 + 150 * word2);

    return 0;
}

void number_of_words(char s[], int * word1, int * word2) {
    for (int icount = 0, i = 0; i < strlen(s); i++) {
        if (s[i+1] == ' ' || s[i+1] == '\0') {
            if (i + 1 - icount <= 8)
                (* word1)++;
            else (* word2)++;
            icount = i + 2;
        }
    }
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
