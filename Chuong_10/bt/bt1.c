// Danh ba dien thoai
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#define MAX 50

// Khai bao struct toan cuc
typedef struct Diachi {
    char quan[30];
    char thanhpho[30];
} diachi;

typedef struct Danhba {
    char hoten[30];
    diachi canhan;
    int sdt;
} danhba;

// Khai bao prototype
void nhapthongtin(danhba db[], int *m);
void timsdt(danhba db[], int m);
void indanhsach(danhba db[], int m);

// Nhap thong tin
void nhapthongtin(danhba db[], int *m) {
    char ctam[15];
    int j;
    while (*m < MAX && j != 2) {
        printf("Gia tri m: %d\n", *m);
        printf("Nhap vao danh ba nguoi thu %d\n", *m + 1);
        printf("Ho ten: ");
        gets(db[*m].hoten);
        printf("Dia chi\n");
        printf("Quan: ");
        gets(db[*m].canhan.quan);
        printf("Thanh pho: ");
        gets(db[*m].canhan.thanhpho);
        do {
            printf("So dien thoai: ");
            gets(ctam);
            db[*m].sdt = atoi(ctam);
        } while (db[*m].sdt == 0);
        printf("Ban co muon tiep tuc?\n1.Yes 2.No\n");
        gets(ctam);
        j = atoi(ctam);
        *m=*m+1;
    };
    printf("Gia tri m: %d\n", *m);
}

// Tim sdt
void timsdt(danhba db[], int m) {
    char ctam[15];
    int sdt, dem = 0;
    printf("Nhap so dien thoai: ");
    gets(ctam);
    sdt = atoi(ctam);
    for (int i = 0; i < m; i++)
        if (sdt == db[i].sdt) {
            printf("Ma so %d\nHo ten: %s\nDia chi: quan %s, thanh pho %s\nSdt: %d\n", i + 1, db[i].hoten, db[i].canhan.quan, db[i].canhan.thanhpho, db[i].sdt);
            dem++;
        }
    if (dem == 0)
        printf("Khong tim thay\n");
}

// In danh sach quan
void indanhsach(danhba db[], int m) {
    int dem = 0;
    danhba x;
    printf("Nhap ten quan: ");
    gets(x.canhan.quan);
    for (int i = 0; i < m; i++)
        if (strcmpi(db[i].canhan.quan, x.canhan.quan) == 0) {
            printf("Ma so %d\nHo ten: %s\nSdt: %d\n", i + 1, db[i].hoten, db[i].sdt);
            dem++;
        }
    if (dem == 0)
        printf("Khong tim thay\n");
}

void main(void) {
    danhba db[MAX];
    char ctam[10];
    int m = 0, n;
    do {
        printf("Moi ban chon chuc nang\n1. Nhap thong tin moi\n2. Tim kiem so dien thoai\n3. In danh sach theo quan\n4. Thoat\n");
        gets(ctam);
        n = atoi(ctam);
        switch (n) {
        case 1:
            nhapthongtin(db, &m);
            break;
        case 2:
            timsdt(db, m);
            break;
        case 3:
            indanhsach(db, m);
            break;
        }
    } while (n != 4);
}
