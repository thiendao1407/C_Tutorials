#include <stdio.h>

#define WISH "have fun! \n"

int main() {
    char yesno;
    int i1, i2;
    do {
        printf("Enter the current year: ");
        scanf("%d", & i1);
        printf("Enter the year you were born: ");
        scanf("%d", & i2);
        printf("You are %d years old, %s\n", i1 - i2, WISH);
        printf("Do you want to continue? (Y/N)\n");
        scanf("%s", & yesno);
    } while (yesno == 'y' || yesno == 'Y');
    return 0;
}
