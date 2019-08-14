#include <stdio.h>

int main() {
    int a, b, c, imax;
    printf("nhap a: ");
    scanf("%d", & a);
    printf("nhap b: ");
    scanf("%d", & b);
    printf("nhap c: ");
    scanf("%d", & c);
    imax = a;
    if (b > imax)
        imax = b;
    if (c > imax)
        imax = c;
    printf("max = %d", imax);
    return 0;
}
