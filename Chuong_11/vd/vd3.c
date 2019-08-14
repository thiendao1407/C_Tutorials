/* Danh sach nhan vien */

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

#define MAX 50

void main(void) {
  FILE * f;
  typedef struct Nhanvien {
    int manv;
    char hoten[30];
  }
  nhanvien;
  nhanvien snv[MAX], snv1[MAX];
  char ctam[10];
  int i, in ;
  printf("Nhap vao so nhan vien: ");
  gets(ctam); in = atoi(ctam);
  //Nhap danh sach nhan vien va ghi vao file
  if ((f = fopen("struct.dat", "wb")) == NULL) {
    printf("Khong the mo file!\n");
    exit(0);
  }
  fwrite( & in , sizeof(int), 1, f); //ghi so nhan vien vao file
  for (i = 0; i < in ; i++) {
    printf("Nhap vao ma nhan vien thu %d: ", i + 1);
    gets(ctam);
    snv[i].manv = atoi(ctam);
    printf("Nhap vao ho ten: ");
    gets(snv[i].hoten);
    fwrite( & snv[i], sizeof(nhanvien), 1, f); //ghi tung nhan vien vao file
  }
  fclose(f);
  //doc danh sach nhan vien tu file va in ra
  f = fopen("struct.dat", "rb");
  fread( & in , sizeof(int), 1, f); //doc so nhan vien
  for (i = 0; i < in ; i++) {
    fread( & snv1[i], sizeof(nhanvien), 1, f); //doc tung nhan vien in ra man hinh
    printf("%5d %s\n", snv[i].manv, snv[i].hoten);
  }
  getch();
}
