#include<stdio.h>
#include<string.h>
#include<stdlib.h>


#define MAX 50


int luachoncuaban;
char ctemp[15];

typedef struct Monhoc {
    int toan;
    int van;
    int anh;
} monhoc;
typedef struct Ngaythangnam {
    int ngay;
    int thang;
    int nam;
} ngaythangnam;


typedef struct Thongtinsinhvien {
    char masinhvien[15];
    char ten[15];
    ngaythangnam ngaysinh;
    int sdt;
    char quequan[15];
    monhoc diem;
} thongtinsinhvien;


void timkiem(thongtinsinhvien sv[], int sinhvienhientai);
void timkiembangten(thongtinsinhvien sv[], int sinhvienhientai);
void timkiembangsodienthoai(thongtinsinhvien sv[], int sinhvienhientai);

void sapxep(thongtinsinhvien sv[], int sinhvienhientai);
void sapxeptheomontoan(thongtinsinhvien sv[], int sinhvienhientai);
void sapxeptheomonanh(thongtinsinhvien sv[], int sinhvienhientai);
void sapxeptheomonvan(thongtinsinhvien sv[], int sinhvienhientai);

void them(thongtinsinhvien sv[], int &sinhvienhientai);
void sua(thongtinsinhvien sv[], int sinhvienhientai);
void xoa(thongtinsinhvien sv[], int &sinhvienhientai);

void ngaysinh(thongtinsinhvien sv[], int sinhvienhientai);
void ten(thongtinsinhvien sv[], int sinhvienhientai);
void sdt(thongtinsinhvien sv[], int sinhvienhientai);
void quequan(thongtinsinhvien sv[], int sinhvienhientai);

void diemtoan(thongtinsinhvien sv[], int sinhvienhientai);
void diemanh(thongtinsinhvien sv[], int sinhvienhientai);
void diemvan(thongtinsinhvien sv[], int sinhvienhientai);

// ghi file
void ghifile(FILE *f, thongtinsinhvien sv[], int sinhvienhientai);
//doc file
void docfile(FILE *f, thongtinsinhvien sv[], int &sinhvienhientai);


