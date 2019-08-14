#include<stdio.h>

void main(void) {
    int i, n, s;
    printf("nhap vao N: ");
    scanf("%d", & n);
    for (i = 1; i <= n; i++)
        s = s * i;
    printf("%d! la: %d", n, s);
}
