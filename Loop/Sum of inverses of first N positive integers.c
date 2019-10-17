#include<stdio.h>

int main() {
    float isum;
    int i, in ;
    printf("Please enter the natural number N: ");
    scanf("%d", &in);
    i = 0;
    isum = 0;
    while (i++ < in)
        isum = isum + 1.0/i;
    printf("Sum of inverses of first %d positive integers: %f\n", in, isum);
    return 0;
}
