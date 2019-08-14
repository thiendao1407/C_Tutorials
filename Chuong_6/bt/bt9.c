#include<stdio.h>

void main(void) {
    int i, a, b, x;
    printf("nhap vao so a: ");
    scanf("%d", & a);
    printf("nhap vao so b: ");
    scanf("%d", & b);
    if (a > b) {
        for (i = b; i >= 1; i--)
            if (b % i == 0 && a % i == 0)
                break;
        printf("UCLN: %d", i);
        printf("BCNN: %d", a * b * 1 / i);
    } else {
        x = a;
        a = b;
        b = x;
        for (i = b; i >= 1; i--)
            if (b % i == 0 && a % i == 0)
                break;
        printf("UCLN: %d", i);
        printf("BCNN: %d", a * b * 1 / i);
    }

}
