#include<stdio.h>

int main() {
    int x;
    printf("Enter number x: ");
    scanf("%x", & x);
    if (x > 0)
        if (x % 2 == 0)
            printf("Even");
        else printf("Odd");
    else printf("Please enter a positive integer");
    return 0;
}
