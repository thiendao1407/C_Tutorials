#include<stdio.h>

int main() {
    int x;
    printf("nhap so x: ");
    scanf("%x", & x);
    if (x > 0)
        if (x % 2 == 0)
            printf("so chan");
        else printf("so le");
    else printf("ban nhap sai roi");
    return 0;
}
