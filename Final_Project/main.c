#include "ham.h"

void main(void) {

    int sinhvienhientai = 0;
    thongtinsinhvien sv[MAX];
    FILE *f;
    docfile(f, sv, &sinhvienhientai);
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
            them(sv, &sinhvienhientai);
            luachoncuaban = 0;
            break;
        case 4:
            sua(sv, sinhvienhientai);
            luachoncuaban = 0;
            break;
        case 5:
            xoa(sv, &sinhvienhientai);
            luachoncuaban = 0;
            break;
        } // end switch
    } // end while
    luachoncuaban = 0;
    ghifile(f, sv, sinhvienhientai);
}
