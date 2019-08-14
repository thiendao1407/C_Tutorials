#include<stdio.h>

#include <math.h>

void main(void) {
    int i, in , is;
    printf("nhap vao so N: ");
    scanf("%d", & in );
    is = 0;
    for (i = 1; i <= in ; i++) {
        if (i % 2 != 0)
            is = is + pow(i, 2);
    }
    printf("Tong la: %d", is);

}
