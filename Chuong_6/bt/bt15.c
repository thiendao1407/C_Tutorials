#include<stdio.h>

void main(void) {
    int x, n, s, i;
    printf("nhap vao he so x: ");
    scanf("%d", & x);
    printf("nhap vao so mu n: ");
    scanf("%d", & n);
    s = 1;
    for (i = 1; i <= n; i++)
        s = s * x;
    printf("gia tri cua %d^%d la: %d", x, n, s);
}
