#include<stdio.h>

int n;
int fibonacci();

void main(void) {
    printf("nhap vao so thu n: ");
    scanf("%d", & n);
    printf("Gia tri cua so hang thu %d la: %d", n, fibonacci());
}

int fibonacci() {
    int i, f1 = 0, f2 = 1, f;
    for (i = 1; i <= n; i++) {
        f = f1 + f2;
        f1 = f2;
        f2 = f;
    }
    return f;
}
