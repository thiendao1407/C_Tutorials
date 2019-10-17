#include<stdio.h>
#include<math.h>

int main() {
    int i, n, icheck;
    printf("Please enter a number: ");
    scanf("%d", &n);
    icheck = 0;
    for (i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            icheck++;
            break;
        }
    }
    if (icheck == 0 && n != 1)
        printf("%d is a prime number\n", n);
    else
        printf("%d is NOT a prime number\n", n);
    return 0;
}
