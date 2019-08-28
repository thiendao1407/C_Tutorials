#include <stdio.h>

// Prototype declaration
void line();

// Prints a line with *
void line() {
    int i;
    for (i = 0; i < 19; i++)
        printf("*");
    printf("\n");
}

int main() {
    line();
    printf("* An illustration *\n");
    line();
    return 0;
}
