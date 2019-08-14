/* Chuong trinh nhap va in ra ten*/ #include <stdio.h>

#include <conio.h>

void main (void) {
    char cname[30];
    printf("Cho biet ten cua ban: ");
    gets(cname);
    printf("Chao ban %s.\n", cname);
    getch();
}
