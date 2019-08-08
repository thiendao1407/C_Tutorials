/* Tinh tien luong tuan cho nhan vien */

#include <stdio.h>
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
main() {
    int igio;
    float fLuongCB, fLuongNgay, fTongLuong;
    char cngay[][9] = {"Chu Nhat", "Thu Hai", "Thu Ba", "Thu Tu", "Thu Nam", "Thu Sau", "Thu Bay"};
    ngay_tuan engay;
    ngay_tuan ngay_mai(ngay_tuan);
    printf("Nhap vao luong can ban: ");
    scanf("%f", & fLuongCB);
    printf("Nhap vao so gio lam viec tu Thu hai den Chu nhat:\n");
    engay = CHU_NHAT;
    do {
        engay = ngay_mai(engay);
        printf("Nhap vao gio lam viec ngay %s:", cngay[engay]);
        scanf("%d", & igio);
        switch(engay) {
            case THU_HAI: case THU_BA: case THU_TU: case THU_NAM: case THU_SAU: fLuongNgay = fLuongCB;
            break;
            case THU_BAY: fLuongNgay = fLuongCB * PHU_TROI_T7;
            break;
            case CHU_NHAT: fLuongNgay = fLuongCB * PHU_TROI_CN;
            break;
        }
        fTongLuong += fLuongNgay * igio;
    } while (engay != CHU_NHAT);
    printf("Tong luong tuan = %8.2f dong.\n", fTongLuong);
}

ngay_tuan ngay_mai(ngay_tuan en) {
    ngay_tuan engay_ke;
    printf("%d\n", en+1);
    en++;
    return (en);
}
