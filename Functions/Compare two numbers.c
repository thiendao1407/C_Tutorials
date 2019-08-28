#include<stdio.h>

int a, b;
int max();

int main() {
    printf("Please enter the number a: ");
    scanf("%d", & a);
    printf("Please enter the number b: ");
    scanf("%d", & b);
    printf("The greater is: %d", max());
    return 0;
}

int max() {
    int max;
    if (b > a)
        max = b;
    else max = a;
    return max;
}
