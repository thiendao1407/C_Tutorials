// Title Case
#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main () {
    char s[50];
    printf("Please enter the string: ");
    gets(s);
    int length = strlen(s);
    s[0] = toupper(s[0]);
    for (int i = 1; i < length; i++)
        if (s[i] == ' ')
            s[i + 1] = toupper(s[i + 1]);
    printf("%s\n", s);
    return 0;
}
