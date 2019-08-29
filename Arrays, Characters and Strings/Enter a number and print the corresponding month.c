#include <stdio.h>

main() {
    char cmonth[12][15] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    int imonth;
    printf("Please enter the month (1-12): ");
    scanf("%d", & imonth);
    printf("%s.\n", cmonth[imonth - 1]);
    return 0;
}
