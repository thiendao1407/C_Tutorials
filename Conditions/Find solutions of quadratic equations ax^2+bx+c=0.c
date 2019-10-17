#include<stdio.h>

#include <math.h>

int main() {
    float a, b, c, delta;
    printf("Enter the coefficients a, b and c: ");
    scanf("%f,%f,%f", & a, & b, & c);
    delta = b * b - 4 * a * c;
    if (a == 0) printf("Error: a must be different from 0");
    else if (delta < 0)
        printf("The equation has no solution");
    else if (delta == 0)
        printf("The equation has a unique solution: x=%f", -b / (2 * a));
    else printf("The equation has two distinct solutions: x1=%f and x2=%f.", (-b - sqrt(delta)) / (2 * a), (-b + sqrt(delta)) / (2 * a));
    return 0;
}
