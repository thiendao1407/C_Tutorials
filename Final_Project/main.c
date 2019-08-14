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

// Ham tim kiem
void timkiem(thongtinsinhvien sv[], int sinhvienhientai){
    if (sinhvienhientai == 0)
        printf("\nDanh sach rong!");
    else {
        do {
            printf("\n----------------------------");
            printf("\n1. Tim kiem bang ten\n\n2. Tim kiem bang so dien thoai\n\n3. Thoat\n");
            printf("----------------------------\n");
            printf("\nMoi ban chon chuc nang: ");
            gets(ctemp);
            luachoncuaban = atoi(ctemp);
            switch (luachoncuaban) {
            case 1:
                timkiembangten(sv, sinhvienhientai);
                break;
            case 2:
                timkiembangsodienthoai(sv, sinhvienhientai);
                break;
            } // end switch
        } while (luachoncuaban != 3);
    } // end else
}

// Ham con tim kiem theo ten
void timkiembangten(thongtinsinhvien sv[], int sinhvienhientai){
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

// Ham con tim kiem theo sdt
void timkiembangsodienthoai(thongtinsinhvien sv[], int sinhvienhientai) {
    int i, kiemtra = 0;
    int sdt;
    printf("\nMoi ban nhap so dien thoai: (+84)");
    gets(ctemp);
    sdt=atoi(ctemp);
    for (i = 0; i < sinhvienhientai; i++) {
        if (sv[i].sdt == sdt) {
            printf("\nTen: %s\nMa sinh vien: %s\nNgay sinh: %2d/%2d/%4d\nQue quan: %s\nDiem Toan/Anh/Van: %d/ %d/ %d\n", sv[i].ten, sv[i].masinhvien, sv[i].ngaysinh.ngay, sv[i].ngaysinh.thang, sv[i].ngaysinh.nam, sv[i].quequan, sv[i].diem.toan, sv[i].diem.anh, sv[i].diem.van);
            kiemtra++;
        }
    }
    if (kiemtra == 0)
        printf("\nKhong tim thay so dien thoai!");
}

// Ham sap xep
void sapxep(thongtinsinhvien sv[], int sinhvienhientai) {
    if (sinhvienhientai == 0)
        printf("Danh sach rong!");
    else {
        do {
            printf("\n----------------------------");
            printf("\nBan muon sap xep theo mon:\n\n1. Toan\n\n2. Anh\n\n3. Van\n\n4. Thoat\n");
            printf("----------------------------\n");
            printf("\nMoi ban chon chuc nang: ");
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
            } // end switch
        } while (luachoncuaban != 4);
    } // end else
}

// Ham con sap xep theo mon toan
void sapxeptheomontoan(thongtinsinhvien sv[], int sinhvienhientai) {
    int i, j;
    thongtinsinhvien temp;
    if (sinhvienhientai == 1) {
        printf("\n%15s%15s%15s%10s%10s", "Ten", "Ma sinh vien", "Diem Toan", "Anh", "Van");
        printf("\n%15s%15s%15d%10d%10d", sv[sinhvienhientai - 1].ten, sv[sinhvienhientai - 1].masinhvien, sv[sinhvienhientai - 1].diem.toan, sv[sinhvienhientai - 1].diem.anh, sv[sinhvienhientai - 1].diem.van);
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
        printf("\n%15s%15s%15s%10s%10s", "Ten", "Ma sinh vien", "Diem Toan", "Anh", "Van");
        for (i = 0; i < sinhvienhientai; i++)
            printf("\n%15s%15s%15d%10d%10d", sv[i].ten, sv[i].masinhvien, sv[i].diem.toan, sv[i].diem.anh, sv[i].diem.van);
    }
}

// Ham con sap xep theo mon anh
void sapxeptheomonanh(thongtinsinhvien sv[], int sinhvienhientai) {
    int i, j;
    thongtinsinhvien temp;
    if (sinhvienhientai == 1) {
        printf("\n%15s%15s%15s%10s%10s", "Ten", "Ma sinh vien", "Diem Toan", "Anh", "Van");
        printf("\n%15s%15s%15d%10d%10d", sv[sinhvienhientai - 1].ten, sv[sinhvienhientai - 1].masinhvien, sv[sinhvienhientai - 1].diem.toan, sv[sinhvienhientai - 1].diem.anh, sv[sinhvienhientai - 1].diem.van);
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
        printf("\n%15s%15s%15s%10s%10s", "Ten", "Ma sinh vien", "Diem Toan", "Anh", "Van");
        for (i = 0; i < sinhvienhientai; i++)
            printf("\n%15s%15s%15d%10d%10d", sv[i].ten, sv[i].masinhvien, sv[i].diem.toan, sv[i].diem.anh, sv[i].diem.van);
    }
}

// Ham con sap xep theo mon van
void sapxeptheomonvan(thongtinsinhvien sv[], int sinhvienhientai) {
    int i, j;
    thongtinsinhvien temp;
    if (sinhvienhientai == 1) {
        printf("\n%15s%15s%15s%10s%10s", "Ten", "Ma sinh vien", "Diem Toan", "Anh", "Van");
        printf("\n%15s%15s%15d%10d%10d", sv[sinhvienhientai - 1].ten, sv[sinhvienhientai - 1].masinhvien, sv[sinhvienhientai - 1].diem.toan, sv[sinhvienhientai - 1].diem.anh, sv[sinhvienhientai - 1].diem.van);
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
        printf("\n%15s%15s%15s%10s%10s", "Ten", "Ma sinh vien", "Diem Toan", "Anh", "Van");
        for (i = 0; i < sinhvienhientai; i++)
            printf("\n%15s%15s%15d%10d%10d", sv[i].ten, sv[i].masinhvien, sv[i].diem.toan, sv[i].diem.anh, sv[i].diem.van);
    }
}


// Ham them thong tin
void them(thongtinsinhvien sv[], int *sinhvienhientai) {
  int yesno = 0, kiemtra = 0;
  for (;;) {
    printf("\nSinh vien hien tai la: %d", *sinhvienhientai);
    printf("\nNhap vao sinh vien thu %d", *sinhvienhientai + 1);
    // Nhap ma sinh vien
    printf("\nMa sinh vien: ");
    gets(sv[*sinhvienhientai].masinhvien);
    if (strlen(sv[*sinhvienhientai].masinhvien) == 0) {
      printf("\nMa sinh vien khong hop le!");
      break;
    }
    for (int k = 0; k < *sinhvienhientai; k++) {
      if (strcmpi(sv[*sinhvienhientai].masinhvien, sv[k].masinhvien) == 0) {
        kiemtra = 1;
        break;
      }
    }
    if (kiemtra == 1) {
      printf("\nMa sinh vien da ton tai!");
      break;
    };
    // Nhap ten
    ten(sv, *sinhvienhientai);
    // Nhap ngay sinh
    ngaysinh(sv, *sinhvienhientai);
    // Nhap so dien thoai
    sdt(sv, *sinhvienhientai);
    //Nhap que quan
    quequan(sv, *sinhvienhientai);
    // Nhap diem
    diemtoan(sv, *sinhvienhientai);
    diemanh(sv, *sinhvienhientai);
    diemvan(sv, *sinhvienhientai);
    // Yes/No
    do {
      printf("\nBan co muon tiep tuc?\n1.Yes 2.No: ");
      gets(ctemp);
      yesno = atoi(ctemp);
    } while (yesno != 1 && yesno != 2);
    *sinhvienhientai = *sinhvienhientai + 1;
    if(*sinhvienhientai == MAX) {
    printf("Danh sach day!");
    break;
    } // end if
  if (yesno == 2)
    break;
  }
}

// Ham sua thong tin
void sua(thongtinsinhvien sv[], int sinhvienhientai) {
    if (sinhvienhientai==0)
        printf("\nDanh sach rong!");
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

        // Sua thong tin
        do {
            if (kiemtra==0){
            printf("\nMa sinh vien khong ton tai!");
            break;
            }
            printf("\n----------------------------");
            printf("\n1. Ten\n\n2. Ngay sinh\n\n3. So dien thoai\n\n4. Que quan\n\n5. Diem\n\n6. Thoat\n");
            printf("----------------------------\n");
            printf("\nMoi ban chon muc can sua: ");
            gets(ctemp);
            luachoncuaban = atoi(ctemp);
            switch (luachoncuaban){
                case 1:
                    ten(sv,vitri);
                    printf("\nThay doi thanh cong!");
                    break;
                case 2:
                    ngaysinh(sv,vitri);
                    printf("\nThay doi thanh cong!");
                    break;
                case 3:
                    sdt(sv,vitri);
                    printf("\nThay doi thanh cong!");
                    break;
                case 4:
                    quequan(sv,vitri);
                    printf("\nThay doi thanh cong!");
                    break;
                case 5:
                    do {
                        printf("\n----------------------------");
                        printf("\n1. Toan\n\n2. Anh\n\n3. Van\n\n4. Thoat\n");
                        printf("----------------------------\n");
                        printf("\nMoi ban chon mon hoc: ");
                        gets(ctemp);
                        luachoncuaban = atoi(ctemp);
                        switch (luachoncuaban){
                            case 1:
                                diemtoan(sv,vitri);
                                printf("\nThay doi thanh cong!");
                                break;
                            case 2:
                                diemanh(sv,vitri);
                                printf("\nThay doi thanh cong!");
                                break;
                            case 3:
                                diemvan(sv,vitri);
                                printf("\nThay doi thanh cong!");
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

// Ham xoa thong tin
void xoa(thongtinsinhvien sv[], int *sinhvienhientai) {
    if (*sinhvienhientai==0)
        printf ("\nDanh sach rong!");
    else {
        // Kiem tra ma sinh vien
        char msv[15];
        int kiemtra=0, vitri;
        printf("\nNhap ma sinh vien cua sinh vien can xoa thong tin: ");
            gets(msv);
        for (vitri=0;vitri<*sinhvienhientai;vitri++){
            if(strcmpi(msv,sv[vitri].masinhvien)==0){
                kiemtra=1;
                break;
            }
        }
        if (kiemtra==0)
            printf("\nMa sinh vien khong ton tai!");
        else {
                // Xoa thong tin
            if (vitri == *sinhvienhientai - 1) {
                printf("\nXoa thanh cong!");
                *sinhvienhientai = *sinhvienhientai - 1;
            }
            else {
                for (int i = vitri; i<*sinhvienhientai-1; i++)
                    sv[i]=sv[i+1];
                printf("\nXoa thanh cong!");
                *sinhvienhientai = *sinhvienhientai - 1;
            }
        }
    }
}

// Ham nhap ten
void ten(thongtinsinhvien sv[], int sinhvienhientai) {
  do {
    printf("Ten: ");
    gets(sv[sinhvienhientai].ten);
  } while (strlen(sv[sinhvienhientai].ten) == 0);
}

// Ham nhap ngay sinh
void ngaysinh(thongtinsinhvien sv[], int sinhvienhientai){
    int kiemtranamnhuan;
    printf("Nhap vao ngay thang nam sinh\n");
    printf("Nhap nam:");
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

// Ham nhap sdt
void sdt(thongtinsinhvien sv[], int sinhvienhientai) {
  do {
    printf("So dien thoai: (+84)");
    gets(ctemp);
    sv[sinhvienhientai].sdt = atoi(ctemp);
  } while (sv[sinhvienhientai].sdt == 0);
}

// Ham nhap que quan
void quequan(thongtinsinhvien sv[], int sinhvienhientai) {
  printf("Que: ");
  gets(sv[sinhvienhientai].quequan);
}

// Ham nhap diem toan
void diemtoan(thongtinsinhvien sv[], int sinhvienhientai) {
  printf("Diem Toan: ");
  gets(ctemp);
  sv[sinhvienhientai].diem.toan = atoi(ctemp);
}

//Ham nhap diem anh
void diemanh(thongtinsinhvien sv[], int sinhvienhientai) {
  printf("Diem Anh: ");
  gets(ctemp);
  sv[sinhvienhientai].diem.anh = atoi(ctemp);
}

// Ham nhap diem van
void diemvan(thongtinsinhvien sv[], int sinhvienhientai) {
  printf("Diem Van: ");
  gets(ctemp);
  sv[sinhvienhientai].diem.van = atoi(ctemp);
}

// Ham ghi file
void ghifile(FILE * f, thongtinsinhvien sv[], int sinhvienhientai) {
    if ((f = fopen("danhsachsinhvien.csv", "w")) == NULL) {
        printf("Khong the mo file!\n");
        exit(0);
    }
    int i;
    for (i = 0; i < sinhvienhientai - 1; i++) //toi thieu sinhvienhientai = 2 moi chay lenh
        fprintf(f, "%s, %s, %d/%d/%d, %d, %s, %d, %d, %d\n", sv[i].masinhvien, sv[i].ten, sv[i].ngaysinh.ngay, sv[i].ngaysinh.thang, sv[i].ngaysinh.nam, sv[i].sdt, sv[i].quequan, sv[i].diem.toan, sv[i].diem.anh, sv[i].diem.van);

    // in dong cuoi k co dau xuong dong
    if (sinhvienhientai != 0) // de phong truong hop sinhvienhientai = 0 sau khi xoa nhung thuc te sv[0] van con
        fprintf(f, "%s, %s, %d/%d/%d, %d, %s, %d, %d, %d", sv[i].masinhvien, sv[i].ten, sv[i].ngaysinh.ngay, sv[i].ngaysinh.thang, sv[i].ngaysinh.nam, sv[i].sdt, sv[i].quequan, sv[i].diem.toan, sv[i].diem.anh, sv[i].diem.van);

    fclose(f);
}
 // Ham doc file
 void docfile(FILE * f, thongtinsinhvien sv[], int * sinhvienhientai) {
    char * tokenPtr;
    int icount;

    f = fopen("danhsachsinhvien.csv", "r");
    if (f == NULL) {
        printf("Khong the mo file!\n");
        exit(0);
    }
    else {
        // Xuat file ra string s
        fseek(f, 0, 2);
        char s[ftell(f) + 1]; //tinh do dai chuoi s
        rewind(f); // dat pointer f ve dau file
        fscanf(f, "%[^EOF]", s); // chep file vao string, bo qua EOF

        //Loai bo khoang trang thua va tinh sinhvienhientai
        if (strlen(s) > 1) {
            *sinhvienhientai = 1;
            for (icount = 1; icount < strlen(s); icount++) {
                if (s[icount] == ' ' && s[icount - 1] == ',')
                    s[icount] = ',';
                if (s[icount] == '\n')
                    *sinhvienhientai = *sinhvienhientai + 1;
            } // end for

            // Doc du lieu vao bien
            icount = 0; // dat lai gia tri icount
            tokenPtr = strtok(s, ",/\n"); // loai bo , / va \n
            while (tokenPtr != NULL) {
                switch (icount % 10) {
                    case 0: strcpy(sv[icount/10].masinhvien, tokenPtr); break;
                    case 1: strcpy(sv[icount/10].ten, tokenPtr); break;
                    case 2: sv[icount/10].ngaysinh.ngay = atoi(tokenPtr); break;
                    case 3: sv[icount/10].ngaysinh.thang = atoi(tokenPtr); break;
                    case 4: sv[icount/10].ngaysinh.nam = atoi(tokenPtr); break;
                    case 5: sv[icount/10].sdt = atoi(tokenPtr); break;
                    case 6: strcpy(sv[icount/10].quequan, tokenPtr); break;
                    case 7: sv[icount/10].diem.toan = atoi(tokenPtr); break;
                    case 8: sv[icount/10].diem.anh = atoi(tokenPtr); break;
                    case 9: sv[icount/10].diem.van = atoi(tokenPtr); break;
                } //end switch
                icount++;
                tokenPtr = strtok(NULL, ",/\n");
            } // end while

            // In ra danh sach
            for (icount = 0; icount < *sinhvienhientai; icount++)
                printf("%s, %s, %d/%d/%d, %d, %s, %d, %d, %d\n", sv[icount].masinhvien, sv[icount].ten, sv[icount].ngaysinh.ngay, sv[icount].ngaysinh.thang, sv[icount].ngaysinh.nam, sv[icount].sdt, sv[icount].quequan, sv[icount].diem.toan, sv[icount].diem.anh, sv[icount].diem.van);
            printf("So sinh vien hien tai la: %d\n", *sinhvienhientai);
        } //end if

        // Kiem tra trung ma sinh vien
        for (int i=0; i< *sinhvienhientai - 1; i++){
            for (int j=i+1; j< *sinhvienhientai; j++) {
                if (strcmpi(sv[i].masinhvien,sv[j].masinhvien)==0) {
                    printf("Trung ma sinh vien %s\n",sv[i].masinhvien);
                    luachoncuaban = 6; // thoat vong lap while
                } // end if
            } // end for
        } // end for

    } //end else

    fclose(f);
}



