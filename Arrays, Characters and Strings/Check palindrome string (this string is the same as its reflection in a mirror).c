#include<stdio.h>
#include<string.h>

#define MAX 50

int main() {
    char s[MAX];
    int icount = 0;
    do {
        printf("Please enter a string: ");
        gets(s);
    } while (strlen(s) > MAX);

    for (int i = 0; i < strlen(s) / 2; i++)
        if (s[i] != s[strlen(s) - 1 - i]) {
            icount++;
            break;
        }

    if (icount != 0)
        printf("This string is not a palindrome.\n");
    else
        printf("This string is a palindrome.\n", s);

    return 0;
}
