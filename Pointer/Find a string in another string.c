#include<stdio.h>
#include<string.h>

#define MAX 50

void check(char * s, char * t);

void search_for_the_first_occurrence(char s[], char t[]);

int main() {
    char s[MAX], t[MAX];
    do {
        printf("Enter the string s: ");
        gets(s);
    } while (strlen(s) >= MAX);

    do {
        printf("Enter the string t: ");
        gets(t);
    } while (strlen(t) >= MAX);

    search_for_the_first_occurrence(s,t);
    return 0;
}


void search_for_the_first_occurrence(char s[], char t[]) {
    int is, icheck = 0;
    for (is = 0; is < strlen(s); is++) {
        if (*(s+is) == *(t)) {
            icheck = 1;
            for (int it = 1; it < strlen(t); it++)
                if (*(s+is + it) != *(t+it) || is + it >= strlen(s)) {
                    icheck = 0;
                    break;
                }
        }
        if (icheck == 1)
            break;
    }
    if (icheck == 1)
        printf("The location of the string t in the string s is %d\n", is + 1);
    else
        printf("The string t was not found\n");
}
