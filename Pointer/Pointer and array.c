/* Print your name*/
#include <stdio.h>
#include <conio.h>

void main(void) {
    char * cgreeting = "Hello";
    char cname[30];
    puts("Please enter your name: ");
    gets(cname);
    puts(cgreeting);
    puts(cname);
}
