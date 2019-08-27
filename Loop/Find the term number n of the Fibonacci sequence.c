#include<stdio.h>
#include<stdlib.h>

int main() {
    int i, n;
    printf("Please enter the order number: ");
        scanf("%d", & n);
    long long *p = (long long *) malloc (n * sizeof(long long));
    p[1] = 1;
    p[2] = 1;

    for (i = 3; i <= n; i++)
        p[i] = p[i-1] + p[i-2];

    printf("The term number %d of the Fibonacci sequence is %lld\n", n, p[n]);
    free(p);
    return 0;
}

