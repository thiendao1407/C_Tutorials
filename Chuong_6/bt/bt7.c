#include<stdio.h>

void main(void) {
    int i, in , a[50], max, min;
    printf("nhap N: ");
    scanf("%d", & in );
    for (i = 1; i <= in ; i++) {
        printf("so a[%d]: ", i);
        scanf("%d", & a[i]);
    }
    max = a[1];
    for (i = 1; i <= in ; i++)
        if (a[i] > max) max = a[i];
    printf("max la: %d\n", max);

    min = a[1];
    for (i = 1; i <= in ; i++)
        if (a[i] < min) min = a[i];
    printf("min la: %d", min);
}
