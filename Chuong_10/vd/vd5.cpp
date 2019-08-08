/* Danh sach nhan vien */

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

#define MAX 50
main() {
    struct giacanh {
      char vo_chong[30];
      char con;
    };
    struct nhanvien {
      int manv;
      char hoten[30];
      giacanh canhan;
    };
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
      printf("Cho biet ten vo (hoac chong): ");
      gets(snv[i].canhan.vo_chong);
      printf("So con: ");
      gets(ctam);
      snv[i].canhan.con = atoi(ctam);
    }

    //in danh sach nhan vien
    for (i = 0; i < in ; i++) {
      printf("Ma so: %d\nHo ten: %s\nHo ten vo (hoac chong): %s\nSo con: %d",
        snv[i].manv, snv[i].hoten, snv[i].canhan.vo_chong, snv[i].canhan.con);
    }
}
