#include<stdio.h>

int main() {
    int i, in ;
    printf("Enter an integer: ");
    scanf("%d", & in );
    printf("The divisors of this integer are: ");
    i = 0;
    while (i++ < abs(in)) {
        if ( in % i == 0)
            printf("+-%d ", i);
    }
    printf("\n");
    return 0;
}
