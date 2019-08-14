#include<stdio.h>

int main() {
    int a, b, c, d, i1, i2;
    printf("nhap a,b,c,d:");
    scanf("%d,%d,%d,%d", & a, & b, & c, & d);
    i1 = a;
    i2 = c;
    if (b > a)
        i1 = b;
    if (d > c)
        i2 = d;
    if (i1 > i2)
        printf("so lon nhat la: %d.", i1);
    else
        printf("so lon nhat la: %d.", i2);
    return 0;
}
