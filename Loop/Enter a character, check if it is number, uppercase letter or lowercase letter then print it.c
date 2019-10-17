#include<stdio.h>

int main() {
    int i;
    printf("Please enter a character: ");
    scanf("%c", &i);
    getchar();
    if ( i > 47 && i < 58)
        printf("Number: %c\n", i);
    if ( i > 96 && i < 123)
        printf("Lowercase letter: %c, %c\n", i, i - 32);
    if ( i > 64 && i < 91)
        printf("Uppercase letter: %c, %c\n", i, i + 32);

    return 0;
}
