/* Ghi n so nguyen vao file va doc ra tu file*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

#define MAX 5

void main(void) {
  FILE * f;
  int i, ia[MAX], ib[MAX];
  for (i = 0; i < 5; i++) {
    printf("Nhap vao mot so: ");
    scanf("%d", & ia[i]);
  }
  if ((f = fopen("array.dat", "wb")) == NULL) {
    printf("Khong the mo file!\n");
    exit(0);
  }
  fwrite(ia, sizeof(ia), 1, f); //ghi mang vao file
  fclose(f);
  f = fopen("array.dat", "rb");
  fread(ib, sizeof(ib), 1, f); //doc mang tu file
  for (i = 0; i < 5; i++)
    printf("%d ", ib[i]);
  fclose(f);
  getch();
}
