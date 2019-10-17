#include<stdio.h>

int n;
int sum(int);

int main() {
    printf("Please enter the upper limit: ");
    scanf("%d", &n);
    printf("Sum of first %d positive integers: %d", n, sum(n));
    return 0;
}

int sum(int n) {
    int i, ip = 0;
    for (i = 1; i <= n; i++)
        ip += i;
    return ip;
}
