/* Chuong trinh tim so lon nhat su dung ham */
#include <stdio.h>

#include <conio.h>

#define MAX 20
//Khai bao prototype
int max(int, int);
int input(int);
//ham tim phan tu lon nhat trong mang 1 chieu
int max(int ia[], int in ) {
    int i, imax;
    imax = ia[0]; //cho phan tu dau tien la max
    for (i = 1; i < in ; i++)
        if (imax < ia[i]) //neu so dang xet > max
            imax = ia[i]; //gan so nay cho max
    return imax; //tra ve ket qua so lon nhat
}
//ham nhap lieu vao mang 1 chieu
int input(int ia[]) {
    int i = 0;
    do {
        printf("Nhap vao mot so: ");
        scanf("%d", & ia[i]);
    } while (ia[i++] != 0);
    i--;
    return i;
}

void main (void) {
    int ia[MAX], ib[MAX], ic[MAX];
    int inum1, inum2, inum3;
    printf("Nhap lieu cho mang a: \n");
    inum1 = max(ia, input(ia));
    printf("Nhap lieu cho mang b: \n");
    inum2 = max(ib, input(ib));
    printf("Nhap lieu cho mang c: \n");
    inum3 = max(ic, input(ic));
    printf("So lon nhat cua mang a: %d, b: %d, c: %d.\n", inum1, inum2, inum3);
}
