#include <stdio.h>

int main() {
    int a, b;
    printf("nhap a: ");
    scanf("%d", & a);
    printf("nhap b: ");
    scanf("%d", & b);
    if (a > b)
        printf("So lon nhat la: %d", a);
    else printf("So lon nhat la: %d", b);
    return 1;
}
