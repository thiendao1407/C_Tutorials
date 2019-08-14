#include <stdio.h>

#define MAX 5
void main (void) {
    int itien[MAX] = {
        50,
        25,
        10,
        5,
        1
    }; //Khai bao va khoi tao mang voi 5 phan tu
    int i, isotien, ito;
    printf("Nhap vao so tien: ");
    scanf("%d", & isotien); //Nhap vao so tien
    for (i = 0; i < MAX; i++) {
        ito = isotien / itien[i]; //Tim so to cua loai tien thu i
        printf("%4d to %2d dong\n", ito, itien[i]);
        isotien = isotien % itien[i]; //So tien con lai sau khi da loai tru cac loai tien da co
    }
}
