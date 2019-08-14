/* Danh sach nhan vien */ #include <stdio.h>

#include <conio.h>

#include <stdlib.h>

#define MAX 50

void main(void) {
 typedef  struct Nhanvien {
        int manv;
        char hoten[30];
    } nhanvien;
    nhanvien snv[MAX];
    char ctam[10];
    int i, in ;
    printf("Nhap vao so nhan vien: ");
    gets(ctam); in = atoi(ctam);
    //Nhap danh sach nhan vien
    for (i = 0; i < in ; i++) {
        printf("Nhap vao ma nhan vien thu %d: ", i + 1);
        gets(ctam);
        snv[i].manv = atoi(ctam);
        printf("Nhap vao ho ten: ");
        gets(snv[i].hoten);
    }
    //in danh sach nhan vien
    for (i = 0; i < in ; i++)
        printf("%5d %s\n", snv[i].manv, snv[i].hoten);
}
