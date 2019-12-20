
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

#define MAX 6

void main(void) {
    typedef struct Province {
        int number;
        char * name;
    } province;

    province pr[MAX] = {{60, "Dong Nai"}, {61, "Binh Duong"}, {62, "Long An"},
        {63, "Tien Giang"}, {64, "Vinh Long"}, {65, "Can Tho"}
    };
    char ctemp[10];
    int i, in ;
    printf("Please enter the license plate number: ");
    gets(ctemp);
    in = atoi(ctemp);
    for (i = 0; i < MAX; i++)
        if (pr[i].number == in )
            printf("It is registered in %s.\n", pr[i].name);
}
