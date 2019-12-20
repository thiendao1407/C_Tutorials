/* Initialize two integers */
#include <stdio.h>

void init(int * px, int * py);
void main(void) {
    int ix, iy;
    init( & ix, & iy);
    printf("x = %d, y = %d\n", ix, iy);
}
void init(int * px, int * py) {
    * px = 3;
    * py = 5;
}
