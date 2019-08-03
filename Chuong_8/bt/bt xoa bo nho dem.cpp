#include<stdio.h>

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
    xoabonhodem();
  } while (i < 1);
  printf("%d", i);
}
