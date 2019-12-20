/* Employee list */

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

#define MAX 50

void main(void) {
    FILE * f;
    typedef struct Employee {
        int code;
        char name[30];
    }
    employee;
    employee snv[MAX], snv1[MAX];
    char ctemp[10];
    int i, in ;
    printf("The number of employees: ");
    gets(ctemp);
    in = atoi(ctemp);

    if ((f = fopen("struct.dat", "wb")) == NULL) {
        printf("Can not open file!\n");
        exit(0);
    }

// Write employee list to file
    fwrite( & in, sizeof(int), 1, f);
    for (i = 0; i < in ; i++) {
        printf("Enter code of employee number %d: ", i + 1);
        gets(ctemp);
        snv[i].code = atoi(ctemp);
        printf("Enter name of employee: ");
        gets(snv[i].name);
        fwrite( & snv[i], sizeof(employee), 1, f);
    }
    fclose(f);

    // Read and print employee list from file
    f = fopen("struct.dat", "rb");
    fread( & in, sizeof(int), 1, f);  // Read the number of employees

    for (i = 0; i < in ; i++) {
        fread( & snv1[i], sizeof(employee), 1, f);
        printf("%5d %s\n", snv[i].code, snv[i].name);
    }
    getch();
}
