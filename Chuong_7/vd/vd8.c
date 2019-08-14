#include <stdio.h>

#define MAX(x, y)(x > y) ? x : y

void main(void) {
    float a = 4.5, b = 6.1, c = 10;
    printf("So lon nhat la: %5.2f.\n", MAX(MAX(a, b), c));

}
