/* Tinh tien luong tuan cho nhan vien */ #include <stdio.h>

#include <conio.h>

#define PHU_TROI_T7 1.5
#define PHU_TROI_CN 2.0
//dinh nghia enum
enum tuan {
    CHU_NHAT,
    THU_HAI,
    THU_BA,
    THU_TU,
    THU_NAM,
    THU_SAU,
    THU_BAY
};
typedef enum tuan ngay_tuan; //dinh nghia ngay_tuan la tuan
void main(void) {
        int igio;
        float fLuongCB, fLuongNgay, fTongLuong=0.0;
        char cngay[][9] = {"Chu Nhat", "Thu Hai", "Thu Ba", "Thu Tu", "Thu Nam", "Thu Sau", "Thu Bay"};
            ngay_tuan engay;
            ngay_tuan ngay_mai(ngay_tuan); //khai bao prototype
            printf("Nhap vao luong can ban: ");
            scanf("%f", & fLuongCB);
            printf("Nhap vao so gio lam viec tu Thu hai den Chu nhat:\n");
            engay = CHU_NHAT;
            do {
                engay = ngay_mai(engay);
                printf("Nhap vao gio lam viec ngay %s :", cngay[engay]);
                scanf("%d", & igio);
                switch(engay) {
                    case THU_HAI: case THU_BA: case THU_TU: case THU_NAM: case THU_SAU:
                        fLuongNgay = fLuongCB;
                    break;
                    case THU_BAY:
                        fLuongNgay = fLuongCB * PHU_TROI_T7;
                    break;
                    case CHU_NHAT:
                        fLuongNgay = fLuongCB * PHU_TROI_CN;
                    break;
                }
                fTongLuong += fLuongNgay * igio;
            } while (engay != CHU_NHAT);
            printf("Tong luong tuan = %8.2f dong.\n", fTongLuong);
            getch();
        }
        //ham chon ngay ke tiep
        ngay_tuan ngay_mai(ngay_tuan en) {
            ngay_tuan engay_ke;
            switch (en) {
            case CHU_NHAT:
                engay_ke = THU_HAI;
                break;
            case THU_HAI:
                engay_ke = THU_BA;
                break;
            case THU_BA:
                engay_ke = THU_TU;
                break;
            case THU_TU:
                engay_ke = THU_NAM;
                break;
            case THU_NAM:
                engay_ke = THU_SAU;
                break;
            case THU_SAU:
                engay_ke = THU_BAY;
                break;
            case THU_BAY:
                engay_ke = CHU_NHAT;
                break;
            }
            return (engay_ke);
        }
