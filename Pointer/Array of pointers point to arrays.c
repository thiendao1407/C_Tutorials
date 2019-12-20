/* Print the month name for the month number */
#include <stdio.h>

main()void main(void)  char * month[12] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
  int imonth;
  printf("Enter a month (1-12): ");
  scanf("%d", & imonth);
  printf("%s.\n", month[imonth - 1]);
}
