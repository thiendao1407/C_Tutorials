#include <stdio.h>

#define PI 3.14

// Prototype declaration
float area();

// global variable
float frad;

int main() {
    printf("Please enter the sphere radius: ");
    scanf("%f", & frad);
    printf("Surface Area = %10.3f.\n", area());
    return 0;
}

// find the surface area of a sphere
float area() {
    return (4 * PI * frad * frad);
}
