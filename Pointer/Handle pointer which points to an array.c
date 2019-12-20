/* Pointer points to an array*/
#include<stdio.h>
#include<string.h>

#define MAXNUM 5
#define MAXLEN 10

void main(void) {
    char cname[MAXNUM][MAXLEN];
    char * cptr[MAXNUM];
    char * ctemp;
    int i, ij, icount = 0;
    //enter the list of names
    while (icount < MAXNUM) {
        printf("Name number %d: ", icount + 1);
        gets(cname[icount]);
        cptr[icount] = cname[icount];
        icount++;
    }

    for (i = 0; i < icount - 1; i++)
        for (ij = i + 1; ij < icount; ij++)
            if (strcmp(cptr[i], cptr[ij]) > 0) {
                ctemp = cptr[i];
                cptr[i] = cptr[ij];
                cptr[ij] = ctemp;
            }
    //Print the ordered list
    printf("The ordered names list:\n");
    for (i = 0; i < icount; i++)
        printf("Name number %d : %s\n", i + 1, cptr[i]);
}
