#include <stdio.h>

#define PI 3.14
#define AREA_CIRCLE(frad)(4 * PI * frad * frad)

// Prototype declaration
float frad;

int main() {
    printf("Please enter the sphere radius: ");
    scanf("%f", & frad);
    printf("Surface Area = %10.3f.\n", AREA_CIRCLE(frad));
    return 0;
}
