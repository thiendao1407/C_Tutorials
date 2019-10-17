#include<stdio.h>

#define EXP "Example of using while loop.\n"

int main() {
    int i = 0;
    while (i++ < 3)
        printf("%d %s", i, EXP);
    return 0;
}
