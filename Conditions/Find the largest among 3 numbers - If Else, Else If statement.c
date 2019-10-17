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

    if (b > a)
        if (b > c)
            imax = b;
        else imax = c;
    else if (c > a)
        imax = c;
    printf("The largest is %d", imax);
    return 0;
}
