#include<stdio.h>

void main(void) {
    int i, x, s, n, a[100];
    printf("nhap gia tri cua bien: ");
    scanf("%d", & x);
    printf("nhap bac cua da thuc: ");
    scanf("%d", & n);
    s = 0;
    for (i = n; i >= 0; i--) {
        printf("Nhap he so bac %d: ", i);
        scanf("%d", & a[i]);
        s = s * x + a[i];
    }
    printf("gia tri cua da thuc voi x=%d la: %d", x, s);
}
