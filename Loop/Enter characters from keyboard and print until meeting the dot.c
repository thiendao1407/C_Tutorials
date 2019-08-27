#include<stdio.h>

#define DOT '.'

int main() {
    char c;
    while ((c = getchar()) != DOT)
        putchar(c);
    return 0;
}
