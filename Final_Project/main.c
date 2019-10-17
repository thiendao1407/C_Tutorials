#include "ham.h"

int main() {
    int sinhvienhientai = 0;
    thongtinsinhvien sv[MAX];
    sinhvienhientai = docfile(sv, sinhvienhientai);
    while (luachoncuaban != 6) {
        printf("\n----------------------------");
        printf("\n1. Tim kiem\n\n2. Sap xep\n\n3. Them sinh vien\n\n4. Sua sinh vien\n\n5. Xoa sinh vien\n\n6. Thoat\n");
        printf("----------------------------\n");
        printf("\nMoi ban chon chuc nang: ");
        gets(ctemp);
        luachoncuaban = atoi(ctemp);
        switch (luachoncuaban) {
        case 1:
            timkiem(sv, sinhvienhientai);
            luachoncuaban = 0;
            break;
        case 2:
            sapxep(sv, sinhvienhientai);
            luachoncuaban = 0;
            break;
        case 3:
            sinhvienhientai = them(sv, sinhvienhientai);
            luachoncuaban = 0;
            break;
        case 4:
            sua(sv, sinhvienhientai);
            luachoncuaban = 0;
            break;
        case 5:
            sinhvienhientai = xoa(sv, sinhvienhientai);
            luachoncuaban = 0;
            break;
        } // end switch
    } // end while
    luachoncuaban = 0;
    ghifile(sv, sinhvienhientai);
}
