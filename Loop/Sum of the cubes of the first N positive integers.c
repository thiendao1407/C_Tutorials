#include<stdio.h>

int main() {
    int i, isum = 0, n;
    printf("Please enter upper limit: ");
    scanf("%d", & n );
    i = 0;
    while (i++ < n)
        isum = isum + i * i * i;
    printf("Sum of the cubes of the first N positive integers: %d\n", isum);

}
