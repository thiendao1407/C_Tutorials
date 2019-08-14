#include<stdio.h>

void main(void) {
    int n;
    printf("nhap chieu cao tam giac:");
    scanf("%d", & n);
    printf("\n");
    for (int j = 1; j < n; j++)
        printf(" ");
    printf("*\n");
    for (int i = 1; i < n - 1; i++) {
        for (int j = 1; j < n - i; j++)
            printf(" ");
        printf("*");
        for (int j = 1; j < 2 * i; j++)
            printf(" ");
        printf("*\n");
    }
    for (int j = 1; j < 2 * n; j++)
        printf("*");
}
