/* Employee List */

#include <stdio.h>
#include <stdlib.h>

#define MAX 50

//Declare global  structure
typedef struct Employee {
    int code;
    char name[30];
} employee;


void input(employee snv[], int in);
void output(employee snv[], int in);


employee newEmployee() {
    char ctemp[10];
    employee snv;
    printf("Employee code: ");
    gets(ctemp);
    snv.code = atoi(ctemp);
    printf("Name: ");
    gets(snv.name);
    return (snv);
}

void input(employee snv[], int in) {
    for (int i = 0; i < in ; i++) {
        printf("Enter the employee number %d: ", i + 1);
        snv[i] = newEmployee();
    }
}

void output(employee snv[], int in) {
    for (int i = 0; i < in ; i++)
        printf("%5d %s\n", snv[i].code, snv[i].name);
}

void main(void) {
    employee snv[MAX];
    char ctemp[10];
    int i, in ;
    printf("Enter the number of employees: ");
    gets(ctemp);
    in = atoi(ctemp);
    input(snv, in );
    output(snv, in );
}
