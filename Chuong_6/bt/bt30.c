#include<stdio.h>

void main(void) {
    char i;
    int in ;
    do {
        printf("Nhap ki tu: \n");
        scanf(" %c", & i); in = i;
        if ( in > 47 && in < 58) printf("So: %c\n", i);
        if ( in > 96 && in < 123) printf("Chu: %c, %c\n", i, i - 32);
        if ( in > 64 && in < 91) printf("Chu: %c, %c\n", i, i + 32);
    } while ( in > 31);
}
