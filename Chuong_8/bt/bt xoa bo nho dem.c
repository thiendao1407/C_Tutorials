// Xoa bo nho dem
#include<stdio.h>

// Ham xoa bo nho dem
void xoabonhodem();
void xoabonhodem() {
  while(true)
    if(getchar()=='\n')
        break;
}

void main (void) {
  int i = 0;
  do {
    printf("Nhap mot so duong: ");
    scanf("%d", & i);
    xoabonhodem(); // Vi tri dat ham xoa bo nho dem
  } while (i < 1);
  printf("%d", i);
}
