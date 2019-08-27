#include <stdio.h>

int main() {
    int a, b;
    printf("Enter number a: ");
    scanf("%d", & a);
    printf("Enter number b: ");
    scanf("%d", & b);
    if (a > b)
        printf("The greater number is: %d", a);
    else printf("The greater number is: %d", b);
    return 1;
}
