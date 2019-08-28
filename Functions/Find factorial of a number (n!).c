#include<stdio.h>

int n;
int factorial(int);

int main() {
    printf("Please enter a number: ");
    scanf("%d", & n);
    printf("%d! = %d", n, factorial(n));
    return 0;
}

int factorial(int n) {
    int i, ip = 1;
    for (i = 1; i <= n; i++)
        ip *= i;
    return ip;
}
