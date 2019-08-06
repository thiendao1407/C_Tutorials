/* Chuong trinh nhap thang (so) và in ra thang (chu) tuong ung */
#include <stdio.h>

main() {
  char * cthang[12] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
  int ithang;
  printf("Nhap vao thang (1-12): ");
  scanf("%d", & ithang);
  printf("%s.\n", cthang[ithang - 1]);
}
