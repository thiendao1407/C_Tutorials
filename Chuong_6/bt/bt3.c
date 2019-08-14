#include<stdio.h>

#include <stdlib.h>

void main(void) {
    int i, in ;
    printf("nhap vao so n: ");
    scanf("%d", & in );
    printf("cac uoc so la: ");
    i = 0;
    while (i++ < abs( in )) {
        if ( in % i == 0)
            printf("+-%d,", i);
    }
}
