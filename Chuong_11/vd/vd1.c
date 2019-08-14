/* Ghi n so nguyen vao file va doc ra tu file*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void main(void) {
  FILE * f;
  int in , i;
  printf("Nhap vao so n: ");
  scanf("%d", & in );
  //Ghi file
  if ((f = fopen("int_data.dat", "wb")) == NULL) //mo file
  {
    printf("Khong the mo file!.\n");
    exit(0);
  } else
    for (i = 1; i <= in ; i++)
      fwrite( & i, sizeof(int), 1, f); //ghi file
  fclose(f); //dong file
  //Doc file
  f = fopen("int_data.dat", "rb");
  while (fread( & i, sizeof(int), 1, f) == 1)
    printf("%d ", i);
  fclose(f);
}
