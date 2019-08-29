#include <stdio.h>

#define MAX 5

int main() {
    int idenomination[MAX] = {50, 25, 10, 5, 1};
    int i, iamount, ibill;
    printf("Enter the amount of money: ");
    scanf("%d", &iamount);
    for (i = 0; i < MAX; i++) {
        ibill = iamount / idenomination[i];
        printf("%4d $%2d bill \n", ibill, idenomination[i]);
        iamount = iamount % idenomination[i];
    }
    return 0;
}
