#include<stdio.h>

void main(void) {
    int i, ij, idai, irong;
    printf("dai: ");
    scanf("%d", & idai);
    printf("rong: ");
    scanf("%d", & irong);
    for (i = 0; i++ < irong;) {
        for (ij = 0; ij++ < idai;)
            printf("*");
        printf("\n");
    }

}
