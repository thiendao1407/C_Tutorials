#include<stdio.h>

int main() {

    int i, isum = 0;
    for(;;) { // or while(1)
        printf("Enter an integer: ");
        scanf("%d", &i);
        if(i<0)
            continue;
        if(i==0)
            break;
        isum +=i;
    }
    printf("Sum of the positive integers is: %d\n", isum);
    return 0;
}
