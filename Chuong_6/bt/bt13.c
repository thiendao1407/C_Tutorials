#include<stdio.h>

void main(void) {

    int p[100], i, n;
    p[1] = 1;
    p[2] = 1;
    do {
        printf("Nhap vao so thu tu: ");
        scanf("%d", & n);
    }
    while (n <= 0 || n > 46);
    for (i = 3; i <= n; i++)
        p[i] = p[i - 1] + p[i - 2];

    printf("So hang thu %d la: %d", n, p[n]);

}
// No sai tu n=47 tro di
