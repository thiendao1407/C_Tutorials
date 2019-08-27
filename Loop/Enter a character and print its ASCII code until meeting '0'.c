#include<stdio.h>

int main() {
    char c;
    do {
        printf("Please enter a character: ");
        scanf("%c", &c);
        getchar(); // Remove the '\n' character
        printf("ASCII code: %d\n", c);
    } while (c != '0');
    return 0;
}
