#include<stdio.h>

// Ham xoa bo nho dem
void xoabonhodem();
void xoabonhodem() {
  char c[50];
  gets(c);
}

main() {
  int i = 0;
  do {
    printf("Nhap mot so duong: ");
    scanf("%d", & i);
    xoabonhodem(); // Vi tri dat ham xoa o nho dem
  } while (i < 1);
  printf("%d", i);
}
