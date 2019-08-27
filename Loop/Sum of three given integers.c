#include<stdio.h>

int main() {
    int i, isum, inumber;
    isum = 0;
    for(isum=0, i=1; i<=3; i++) {
        printf("Enter an integer: ");
        scanf("%d", &inumber);
        isum = isum + inumber;
    }
    printf("The sum of the three given integers is: %d\n", isum);
    return 0;
}
