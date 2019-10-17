#include<stdio.h>

int n;
long long fibonacci();

int main() {
    printf("Please enter the order number: ");
        scanf("%d", &n);
    printf("The term number %d of the Fibonacci sequence is %lld\n", n, fibonacci());
    return 0;
}

long long fibonacci() {
    int i;
    long long f1 = 0, f2 = 1, f;
    for (i = 1; i <= n; i++) {
        f = f1 + f2;
        f1 = f2;
        f2 = f;
    }
    return f;
}
