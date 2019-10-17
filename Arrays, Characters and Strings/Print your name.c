#include <stdio.h>
#include <conio.h>

main() {
    char cname[30];
    printf("Please enter your name: ");
    gets(cname);
    printf("Hello %s.\n", cname);
    return 0;
}
