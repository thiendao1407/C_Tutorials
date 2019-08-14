#include<stdio.h>

void main(void) {
    float is;
    int i, in ;
    printf("nhap vao so N: ");
    scanf("%d", & in );
    i = 0;
    is = 0;
    while (i++ < in )
        is = is + 1.0 / i;
    printf("tong: %f", is);
}
