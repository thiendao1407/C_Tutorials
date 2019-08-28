#include<stdio.h>
#include<math.h>

int n;
void check();

int main() {
    printf("Please enter a number: ");
    scanf("%d", &n);
    check();
}

void check() {
    int icount = 0;
    for (int i = 2; i < sqrt(n); i++) {
        if (n % i == 0) {
            icount++;
            break;
        }
    }
    if (icount == 1)
        printf("%d is a prime number\n", n);
    else
        printf("%d is NOT a prime number\n", n);
}
