/* Cong hang so */
#include<stdio.h>

main() {
  int ix = 6, iy = 7;
  int * px, * py;
  printf("x=%d, y=%d\n", ix, iy);
  px = & ix;
  py = & iy;
  * px += 10;
  * py += 10;
  printf("x=%d, y=%d\n", ix, iy);
}
