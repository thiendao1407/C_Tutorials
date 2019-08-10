#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#define MAX 50

int sinhvienhientai = 0, luachoncuaban;
char ctemp[15];

struct monhoc {
    int toan;
    int van;
    int anh;
};
struct ngaythangnam {
    int ngay;
    int thang;
    int nam;
};


struct thongtinsinhvien {
    char masinhvien[15];
    char ten[15];
    ngaythangnam ngaysinh;
    int sdt;
    char quequan[30];
    monhoc diem;
};

// Khai bao prototype
void timkiembangten (thongtinsinhvien sv[], int sinhvienhientai);
void timkiembangsodienthoai (thongtinsinhvien sv[], int sinhvienhientai);

void sapxeptheomontoan (thongtinsinhvien sv[], int sinhvienhientai);
void sapxeptheomonanh (thongtinsinhvien sv[], int sinhvienhientai);
void sapxeptheomonvan (thongtinsinhvien sv[], int sinhvienhientai);

void them (thongtinsinhvien sv[], int &sinhvienhientai);
void sua (thongtinsinhvien sv[], int sinhvienhientai);
void xoa (thongtinsinhvien sv[], int &sinhvienhientai);

void ngaysinh (thongtinsinhvien sv[], int sinhvienhientai);

main() {
    thongtinsinhvien sv[MAX];
    do {
        printf("----------------------------");
        printf("\nMoi ban chon chuc nang\n\n1. Tim kiem\n\n2. Sap xep\n\n3. Them, sua, xoa sinh vien\n\n4. Thoat\n");
        printf("----------------------------\n");
        gets(ctemp);
        luachoncuaban = atoi(ctemp);
        switch (luachoncuaban) {
        case 1:
            if (sinhvienhientai == 0)
                printf("Danh sach rong!");
            else {
                do {
                    printf("----------------------------");
                    printf("\nMoi ban chon chuc nang\n\n1. Tim kiem bang ten\n\n2. Tim kiem bang so dien thoai\n\n3. Thoat\n");
                    printf("----------------------------\n");
                    gets(ctemp);
                    luachoncuaban = atoi(ctemp);
                    switch (luachoncuaban) {
                    case 1:
                        timkiembangten(sv, sinhvienhientai);
                        break;
                    case 2:
                        timkiembangsodienthoai(sv, sinhvienhientai);
                        break;
                    }
                } while (luachoncuaban != 3);
                luachoncuaban = 0;
            }
            break;
        case 2:
            if (sinhvienhientai == 0)
                printf("Danh sach rong!");
            else {
                do {
                    printf("----------------------------");
                    printf("\nBan muon sap xep theo mon:\n\n1. Toan\n\n2. Anh\n\n3. Van\n\n4. Thoat\n");
                    printf("----------------------------\n");
                    gets(ctemp);
                    luachoncuaban = atoi(ctemp);
                    switch (luachoncuaban) {
                    case 1:
                        sapxeptheomontoan(sv, sinhvienhientai);
                        break;
                    case 2:
                        sapxeptheomonanh(sv, sinhvienhientai);
                        break;
                    case 3:
                        sapxeptheomonvan(sv, sinhvienhientai);
                        break;
                    }
                } while (luachoncuaban != 4);
                luachoncuaban = 0;
            }
            break;
        case 3:
            do {
                printf("----------------------------");
                printf("\nMoi ban chon chuc nang\n\n1. Them sinh vien\n\n2. Sua sinh vien\n\n3. Xoa sinh vien\n\n4. Thoat\n");
                printf("----------------------------\n");
                gets(ctemp);
                luachoncuaban = atoi(ctemp);
                switch (luachoncuaban) {
                case 1:
                    them(sv, sinhvienhientai);
                    break;
                case 2:
                    sua(sv, sinhvienhientai);
                    break;
                case 3:
                    xoa(sv, sinhvienhientai);
                    break;
                }
            } while (luachoncuaban != 4);
            luachoncuaban = 0;
            break;
        }
    }
    while (luachoncuaban != 4);
    luachoncuaban = 0;
}


// Ham ngay sinh
void ngaysinh (thongtinsinhvien sv[], int sinhvienhientai){
    int kiemtranamnhuan;
    printf("\nNhap vao ngay thang nam sinh");
    printf("\nNhap nam:");
	gets (ctemp);
	sv[sinhvienhientai].ngaysinh.nam=atoi(ctemp);
	kiemtranamnhuan = sv[sinhvienhientai].ngaysinh.nam % 4;
	do {
        printf("Nhap thang:");
        gets (ctemp);
        sv[sinhvienhientai].ngaysinh.thang=atoi(ctemp);
	} while (sv[sinhvienhientai].ngaysinh.thang==0 || sv[sinhvienhientai].ngaysinh.thang >12);
	switch(sv[sinhvienhientai].ngaysinh.thang){
		case 1: case 3: case 5: case 7: case 8: case 10: case 12:
		    do {
                printf("Nhap ngay:");
                gets (ctemp);
                sv[sinhvienhientai].ngaysinh.ngay=atoi(ctemp);
            } while (sv[sinhvienhientai].ngaysinh.ngay==0 || sv[sinhvienhientai].ngaysinh.thang >31);
            break;
		case 4: case 6: case 9: case 11:
            do {
                printf("Nhap ngay:");
                gets (ctemp);
                sv[sinhvienhientai].ngaysinh.ngay=atoi(ctemp);
            } while (sv[sinhvienhientai].ngaysinh.ngay==0 || sv[sinhvienhientai].ngaysinh.thang >30);
            break;
		case 2: switch(kiemtranamnhuan){
			case 0:
			    do {
                    printf("Nhap ngay:");
                    gets (ctemp);
                    sv[sinhvienhientai].ngaysinh.ngay=atoi(ctemp);
                } while (sv[sinhvienhientai].ngaysinh.ngay==0 || sv[sinhvienhientai].ngaysinh.thang >29);
                break;
			case 1: case 2: case 3:
			    do {
                    printf("Nhap ngay:");
                    gets (ctemp);
                    sv[sinhvienhientai].ngaysinh.ngay=atoi(ctemp);
                } while (sv[sinhvienhientai].ngaysinh.ngay==0 || sv[sinhvienhientai].ngaysinh.thang >28);
                break;
            }
        }
}


void timkiembangten (thongtinsinhvien sv[], int sinhvienhientai){
    int i, kiemtra = 0;
    char ten[15];
    printf("\nMoi ban nhap ten: ");
    gets(ten);
    for (i=0;i<sinhvienhientai; i++) {
        if (strcmpi(ten,sv[i].ten)==0){
            printf("\nMa sinh vien: %s\nNgay sinh: %2d/%2d/%4d\nSo dien thoai: %d\nQue quan: %s\nDiem Toan/Anh/Van: %d/ %d/ %d\n",sv[i].masinhvien,sv[i].ngaysinh.ngay,sv[i].ngaysinh.thang,sv[i].ngaysinh.nam,sv[i].sdt,sv[i].quequan,sv[i].diem.toan,sv[i].diem.anh,sv[i].diem.van);
                kiemtra++;
        }
    }
    if (kiemtra==0)
        printf("\nKhong tim thay ten!");
}

void timkiembangsodienthoai (thongtinsinhvien sv[], int sinhvienhientai) {
    int i, kiemtra = 0;
    int sdt;
    printf("\nMoi ban nhap so dien thoai: (+84)");
    for (i = 0; i < sinhvienhientai; i++) {
        if (sv[i].sdt == sdt) {
            printf("\nTen: %s\nMa sinh vien: %s\nNgay sinh: %2d/%2d/%4d\nQue quan: %s\nDiem Toan/Anh/Van: %d/ %d/ %d\n", sv[i].ten, sv[i].masinhvien, sv[i].ngaysinh.ngay, sv[i].ngaysinh.thang, sv[i].ngaysinh.nam, sv[i].quequan, sv[i].diem.toan, sv[i].diem.anh, sv[i].diem.van);
            kiemtra++;
        }
    }
    if (kiemtra == 0)
        printf("\nKhong tim thay so dien thoai!");
}

void sapxeptheomontoan (thongtinsinhvien sv[], int sinhvienhientai) {
    int i, j;
    thongtinsinhvien temp;
    if (sinhvienhientai == 1) {
        printf("\n%15s %15s %15s %10s %10s", "Ten", "Ma sinh vien", "Diem Toan", "Anh", "Van");
        printf("\n%15s %15s %15d %10d %10d", sv[sinhvienhientai - 1].ten, sv[sinhvienhientai - 1].masinhvien, sv[sinhvienhientai - 1].diem.toan, sv[sinhvienhientai - 1].diem.anh, sv[sinhvienhientai - 1].diem.van);
    } else {
        for (i = 0; i < sinhvienhientai - 1; i++) {
            for (j = i + 1; j < sinhvienhientai; j++) {
                if (sv[i].diem.toan < sv[j].diem.toan) {
                    temp = sv[i];
                    sv[i] = sv[j];
                    sv[j] = temp;
                }
            }
        }
        printf("\n%15s %15s %15s %10s %10s", "Ten", "Ma sinh vien", "Diem Toan", "Anh", "Van");
        for (i = 0; i < sinhvienhientai; i++)
            printf("\n%15s %15s %15d %10d %10d", sv[i].ten, sv[i].masinhvien, sv[i].diem.toan, sv[i].diem.anh, sv[i].diem.van);
    }
}

void sapxeptheomonanh (thongtinsinhvien sv[], int sinhvienhientai) {
    int i, j;
    thongtinsinhvien temp;
    if (sinhvienhientai == 1) {
        printf("\n%15s %15s %15s %10s %10s", "Ten", "Ma sinh vien", "Diem Toan", "Anh", "Van");
        printf("\n%15s %15s %15d %10d %10d", sv[sinhvienhientai - 1].ten, sv[sinhvienhientai - 1].masinhvien, sv[sinhvienhientai - 1].diem.toan, sv[sinhvienhientai - 1].diem.anh, sv[sinhvienhientai - 1].diem.van);
    } else {
        for (i = 0; i < sinhvienhientai - 1; i++) {
            for (j = i + 1; j < sinhvienhientai; j++) {
                if (sv[i].diem.anh < sv[j].diem.anh) {
                    temp = sv[i];
                    sv[i] = sv[j];
                    sv[j] = temp;
                }
            }
        }
        printf("\n%15s %15s %15s %10s %10s", "Ten", "Ma sinh vien", "Diem Toan", "Anh", "Van");
        for (i = 0; i < sinhvienhientai; i++)
            printf("\n%15s %15s %15d %10d %10d", sv[i].ten, sv[i].masinhvien, sv[i].diem.toan, sv[i].diem.anh, sv[i].diem.van);
    }
}

void sapxeptheomonvan (thongtinsinhvien sv[], int sinhvienhientai) {
    int i, j;
    thongtinsinhvien temp;
    if (sinhvienhientai == 1) {
        printf("\n%15s %15s %15s %10s %10s", "Ten", "Ma sinh vien", "Diem Toan", "Anh", "Van");
        printf("\n%15s %15s %15d %10d %10d", sv[sinhvienhientai - 1].ten, sv[sinhvienhientai - 1].masinhvien, sv[sinhvienhientai - 1].diem.toan, sv[sinhvienhientai - 1].diem.anh, sv[sinhvienhientai - 1].diem.van);
    } else {
        for (i = 0; i < sinhvienhientai - 1; i++) {
            for (j = i + 1; j < sinhvienhientai; j++) {
                if (sv[i].diem.van < sv[j].diem.van) {
                    temp = sv[i];
                    sv[i] = sv[j];
                    sv[j] = temp;
                }
            }
        }
        printf("\n%15s %15s %15s %10s %10s", "Ten", "Ma sinh vien", "Diem Toan", "Anh", "Van");
        for (i = 0; i < sinhvienhientai; i++)
            printf("\n%15s %15s %15d %10d %10d", sv[i].ten, sv[i].masinhvien, sv[i].diem.toan, sv[i].diem.anh, sv[i].diem.van);
    }
}


void them (thongtinsinhvien sv[], int &sinhvienhientai) {
    int yesno=0, kiemtra = 0;
    while (sinhvienhientai < MAX && yesno != 2) {
        printf("\nSinh vien hien tai la: %d", sinhvienhientai);
        printf("\nNhap vao sinh vien thu %d", sinhvienhientai + 1);
        // Nhap ma sinh vien
        printf("\nMa sinh vien: ");
            gets(sv[sinhvienhientai].masinhvien);
        if (strlen(sv[sinhvienhientai].masinhvien)==0){
            printf("Ma sinh vien khong hop le");
            break;
        }
        for (int k=0;k<sinhvienhientai;k++){
            if(strcmpi(sv[sinhvienhientai].masinhvien,sv[k].masinhvien)==0){
                    kiemtra=1;
                    break;
            }
        }
        if (kiemtra==1){
            printf("Ma sinh vien da ton tai");
            break;
        }
        // Nhap ten
        do {
            printf("\nTen: ");
            gets(sv[sinhvienhientai].ten);
        } while (strlen(sv[sinhvienhientai].ten)==0);
        // Nhap ngay sinh
        ngaysinh(sv,sinhvienhientai);
        // Nhap so dien thoai
        do {
            printf("\nSo dien thoai: (+84)");
            gets(ctemp);
            sv[sinhvienhientai].sdt = atoi(ctemp);
        } while (sv[sinhvienhientai].sdt == 0);
        //Nhap que quan
        printf("\nQue: ");
        gets(sv[sinhvienhientai].quequan);
        // Nhap diem
        printf("\nDiem Toan: ");
        gets(ctemp);
        sv[sinhvienhientai].diem.toan=atoi(ctemp);
        printf("\nDiem Anh: ");
        gets(ctemp);
        sv[sinhvienhientai].diem.anh=atoi(ctemp);
        printf("\nDiem Van: ");
        gets(ctemp);
        sv[sinhvienhientai].diem.van=atoi(ctemp);
        // Yes/No
        do {
            printf("Ban co muon tiep tuc?\n1.Yes 2.No\n");
            gets(ctemp);
            yesno = atoi(ctemp);
        } while (yesno!=1 && yesno!=2);
        sinhvienhientai++;
    };
}

void sua (thongtinsinhvien sv[], int sinhvienhientai) {
    if (sinhvienhientai==0)
        printf("Danh sach rong!");
    else {
        // Kiem tra ma sinh vien
        char msv[15];
        int kiemtra=0, vitri;
        printf("\nNhap ma sinh vien cua sinh vien can sua thong tin: ");
            gets(msv);
        for (vitri=0;vitri<sinhvienhientai;vitri++){
            if(strcmpi(msv,sv[vitri].masinhvien)==0){
                kiemtra=1;
                break;
            }
        }
        if (kiemtra==0)
            printf("Ma sinh vien khong ton tai!");
        // Sua thong tin
        do {
            printf("----------------------------");
            printf("\nMoi ban chon muc can sua\n\n1. Ten\n\n2. Ngay sinh\n\n3. So dien thoai\n\n4. Que quan\n\n5. Diem\n\n6. Thoat\n");
            printf("----------------------------\n");
            gets(ctemp);
            luachoncuaban = atoi(ctemp);
            switch (luachoncuaban){
                case 1:
                    do {
                        printf("\nTen: ");
                        gets(sv[vitri].ten);
                    } while (strlen(sv[vitri].ten)==0);
                    printf("Thay doi thanh cong!");
                    break;
                case 2:
                    ngaysinh(sv,vitri);
                    printf("Thay doi thanh cong!");
                case 3:
                    do {
                        printf("\nSo dien thoai: (+84)");
                        gets(ctemp);
                        sv[vitri].sdt = atoi(ctemp);
                    } while (sv[vitri].sdt == 0);
                    printf("Thay doi thanh cong!");
                    break;
                case 4:
                    printf("\nQue: ");
                    gets(sv[vitri].quequan);
                    printf("Thay doi thanh cong!");
                    break;
                case 5:
                    do {
                        printf("----------------------------");
                        printf("\nMoi ban chon mon hoc\n\n1. Toan\n\n2. Anh\n\n3. Van\n\n4. Thoat\n");
                        printf("----------------------------\n");
                        gets(ctemp);
                        luachoncuaban = atoi(ctemp);
                        switch (luachoncuaban){
                            case 1:
                                printf("\nDiem Toan: ");
                                gets(ctemp);
                                sv[vitri].diem.toan = atoi(ctemp);
                                printf("Thay doi thanh cong!");
                                break;
                            case 2:
                                printf("\nDiem Anh: ");
                                gets(ctemp);
                                sv[vitri].diem.anh = atoi(ctemp);
                                printf("Thay doi thanh cong!");
                                break;
                            case 3:
                                printf("\nDiem Van: ");
                                gets(ctemp);
                                sv[vitri].diem.van = atoi(ctemp);
                                printf("Thay doi thanh cong!");
                                break;
                        }
                    } while (luachoncuaban!=4);
                    luachoncuaban=0;
                    break;
            }
        } while (luachoncuaban!=6);
        luachoncuaban=0;
    }
}

void xoa (thongtinsinhvien sv[], int &sinhvienhientai) {
    if (sinhvienhientai==0)
        printf ("Danh sach rong!");
    else {
            // Kiem tra ma sinh vien
        char msv[15];
        int kiemtra=0, vitri;
        printf("\nNhap ma sinh vien cua sinh vien can xoa thong tin: ");
            gets(msv);
        for (vitri=0;vitri<sinhvienhientai;vitri++){
            if(strcmpi(msv,sv[vitri].masinhvien)==0){
                kiemtra=1;
                break;
            }
        }
        if (kiemtra==0)
            printf("Ma sinh vien khong ton tai!");
        // Xoa thong tin
        if (vitri==sinhvienhientai-1) {
            printf("Xoa thanh cong!");
            sinhvienhientai--;
        }
        else {
            for (int i = vitri; i<sinhvienhientai-1; i++)
                sv[i]=sv[i+1];
            printf("Xoa thanh cong!");
            sinhvienhientai--;
        }
    }
}


