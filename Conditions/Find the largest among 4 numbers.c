#include<stdio.h>

int main() {
    int a, b, c, d, i1, i2;
    printf("Enter number a, b, c and d:");
    scanf("%d,%d,%d,%d", &a, &b, &c, &d);
    i1 = a;
    i2 = c;
    if (b > a)
        i1 = b;
    if (d > c)
        i2 = d;
    if (i1 > i2)
        printf("The largest number is: %d.", i1);
    else
        printf("The largest number is: %d.", i2);
    return 0;
}
