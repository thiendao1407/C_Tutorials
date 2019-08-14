#include<stdio.h>

#define DAU_CHAM '.'
void main(void) {
    char c;
    while ((c = getchar()) != DAU_CHAM)
        putchar(c);
}
