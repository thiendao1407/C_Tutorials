#include <stdio.h>

// Prototype declaration
int power(int, int);

// power function
int power(int ix, int in ) {
    int i, ip = 1;
    for (i = 1; i <= in ; i++)
        ip *= ix;
    return ip;
}

int main() {
    printf("2 to the power of 2 = %d.\n", power(2, 2));
    printf("2 to the power of 3 = %d.\n", power(2, 3));
    return 0;
}
