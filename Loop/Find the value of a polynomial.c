#include<stdio.h>
#include<stdlib.h>

int main() {
    int x, s, n;
    printf("Please enter the value of the variable x: ");
    scanf("%d", &x);
    printf("Please enter the degree of the polynomial: ");
    scanf("%d", &n);
    int *a = (int *) malloc (n * sizeof(n));

    s = 0;
    for (int i = n; i >= 0; i--) {
        printf("Please enter the coefficient of x^%d: ", i);
        scanf("%d", &a[i]);
        s = s * x + a[i];
    }
    printf("The value of the polynomial with x = %d is: %d\n", x, s);

    free(a);
    return 0;
}
