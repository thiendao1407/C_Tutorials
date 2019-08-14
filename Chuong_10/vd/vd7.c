/* Danh sach nhan vien */

#include <stdio.h>
#include <stdlib.h>

#define MAX 50

//Khai bao structure toan cuc
typedef struct Nhanvien {
  int manv;
  char hoten[30];
} nhanvien;

//Khai bao prototype
void input(nhanvien snv[], int in);
void output(nhanvien snv[], int in);

//Ham nhap tung nhan vien
nhanvien newnv() {
    char ctam[10];
    nhanvien snv;
    printf("Ma nhan vien: ");
    gets(ctam);
    snv.manv = atoi(ctam);
    printf("Ho ten: ");
    gets(snv.hoten);
    return (snv);
}
//Ham nhap danh sach nhan vien
void input(nhanvien snv[], int in) {
    for (int i = 0; i < in ; i++) {
        printf("Nhap vao nhan vien thu %d: ", i + 1);
        snv[i] = newnv();
    }
}

//Ham in danh sach ra man hinh
void output(nhanvien snv[], int in) {
  for (int i = 0; i < in ; i++)
    printf("%5d %s\n", snv[i].manv, snv[i].hoten);
}

void main(void) {
  nhanvien snv[MAX];
  char ctam[10];
  int i, in ;
  printf("Nhap vao so nhan vien: ");
  gets(ctam); in = atoi(ctam);
  input(snv, in );
  output(snv, in );
}
