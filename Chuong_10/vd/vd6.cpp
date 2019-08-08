/* Danh sach nhan vien */

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

#define MAX 50

//Khai bao structure toan cuc
struct nhanvien {
  int manv;
  char hoten[30];
};

//Khai bao prototype
void input(nhanvien, int);
void output(nhanvien, int);

//Ham nhap danh sach
void input(nhanvien snv[], int in ) {
  char ctam[10];
  for (int i = 0; i < in ; i++) {
    printf("Nhap vao ma nhan vien thu %d: ", i + 1);
    gets(ctam);
    snv[i].manv = atoi(ctam);
    printf("Nhap vao ho ten: ");
    gets(snv[i].hoten);
  }
}

//Ham in danh sach ra man hinh
void output(nhanvien snv[], int in ) {
  for (int i = 0; i < in ; i++)
    printf("%5d %s\n", snv[i].manv, snv[i].hoten);
}

main() {
  nhanvien snv[MAX];
  char ctam[10];
  int i, in ;
  printf("Nhap vao so nhan vien: ");
  gets(ctam); in = atoi(ctam);
  input(snv, in );
  output(snv, in );
}
