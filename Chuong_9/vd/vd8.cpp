/* In ma trận*/

#include <stdio.h>

#define ROWS 4
#define COLS 5

main() {
  int itable[ROWS][COLS] = {
    {10, 12, 14, 16, 18},
    {11, 13, 15, 17, 19},
    {20, 22, 24, 26, 28},
    {21, 23, 25, 27, 29}};
  int i, ij, ix = 10;

  for (i = 0; i < ROWS; i++)
    for (ij = 0; ij < COLS; ij++)
      * ( * (itable + i) + ij) += ix;
  for (i = 0; i < ROWS; i++) {
    for (ij = 0; ij < COLS; ij++)
      printf("%4d", *( * (itable + i) + ij));
    printf("\n");
  }
}
