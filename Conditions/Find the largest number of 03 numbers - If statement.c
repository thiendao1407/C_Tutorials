#include <stdio.h>

int main() {
    int a, b, c, imax;
    printf("Enter number a: ");
    scanf("%d", & a);
    printf("Enter number b: ");
    scanf("%d", & b);
    printf("Enter number c: ");
    scanf("%d", & c);
    imax = a;
    if (b > imax)
        imax = b;
    if (c > imax)
        imax = c;
    printf("Max = %d", imax);
    return 0;
}
