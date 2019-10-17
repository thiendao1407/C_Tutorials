#include<stdio.h>
#include <math.h>

int main() {
    int i, in, isum;
    printf("Please enter the number N: ");
    scanf("%d", &in);
    isum = 0;
    for (i = 1; i <= in ; i++) {
        if (i % 2 != 0)
            isum = isum + pow(i, 2);
    }
    printf("Sum of the squares of the odd numbers from 1 to %d: %d\n", in, isum);
    return 0;
}
