/* Xac dinh bien so xe */

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#define MAX 6

void main(void) {
 typedef struct Tinh {
    int ma;
    char * ten;
  } tinh;
  tinh sds[MAX] = {{60, "Dong Nai"}, {61, "Binh Duong"}, {62, "Long An"},
                    {63, "Tien Giang"}, {64, "Vinh Long"}, {65, "Can Tho"}};
  char ctam[10];
  int i, in ;
  printf("Nhap vao bien so xe: ");
  gets(ctam); in = atoi(ctam);
  for (i = 0; i < MAX; i++)
    if (sds[i].ma == in )
      printf("Xe dang ki o tinh %s.\n", sds[i].ten);
}
