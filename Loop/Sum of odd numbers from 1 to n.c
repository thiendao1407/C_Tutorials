#include<stdio.h>

int main() {
    int i, isum = 0, n;
    printf("Please enter upper limit: ");
    scanf("%d", &n);
    for(i=0; i <= n; i++) {
        if(i%2!=0)
            isum = isum + i;
    }
    printf("Sum of odd numbers from 1-%d: %d\n", n, isum);
    return 0;
}
