#include <stdio.h>

// khai bao prototype
void time(int & , int & );

// ham doi phut thanh gio:phut
void time(int & ig, int & ip) {
    ig = ip / 60;
    ip %= 60;
}

void main(void) {
    int igio, iphut;
    printf("Nhap vao so phut : ");
    scanf("%d", & iphut);
    time(igio, iphut);
    printf("%02d:%02d\n", igio, iphut);
}
