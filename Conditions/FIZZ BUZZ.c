#include<stdio.h>

int main() {
    int ia;
    printf("Please enter a number: ");
    scanf("%d", &ia);
    if (ia%15==0)
        printf("FIZZ BUZZ");
    else if (ia%3==0)
        printf("FIZZ");
    else if (ia%5==0)
        printf("BUZZ");
    else
        printf("The number you have entered is: %d.\n", ia);
    return 0;
}
