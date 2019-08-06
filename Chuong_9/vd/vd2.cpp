/* Khoi tao 2 so */
#include <stdio.h>

void init(int * px, int * py);
main() {
  int ix, iy;
  init( & ix, & iy);
  printf("x = %d, y = %d\n", ix, iy);
}
void init(int * px, int * py) {
  * px = 3; //gan 3 cho noi dung cua px
  * py = 5; //gan 5 cho noi dung cua py
}
