#include<stdio.h>

int main() {
    int x, n, s;
    printf("Please enter the value of variable x: ");
    scanf("%d", &x);
    printf("Please enter the value of exponent n: ");
    scanf("%d", &n);
    s = 1;
    for (int i = 1; i <= n; i++)
        s = s * x;
    printf("The value of %d^%d is: %d", x, n, s);
    return 0;
}
