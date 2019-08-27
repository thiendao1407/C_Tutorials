#include<stdio.h>

int main() {
    int i, a, b, x;
    printf("Please enter number a: ");
    scanf("%d", &a);
    printf("Please enter number b: ");
    scanf("%d", &b);

    if (a > b) {
        for (i = b; i >= 1; i--)
            if (b % i == 0 && a % i == 0)
                break;
        printf("The greatest common divisor: %d\n", i);
        printf("The least common multiple: %d\n", a * b * 1 / i);
    } else {
        x = a;
        a = b;
        b = x;
        for (i = b; i >= 1; i--)
            if (b % i == 0 && a % i == 0)
                break;
        printf("The greatest common divisor: %d\n", i);
        printf("The least common multiple: %d\n", a * b * 1 / i);
    }
    return 0;
}
