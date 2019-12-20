/* Write N integers to a file and read them from the file */

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void main(void) {
    FILE * f;
    int in, i;
    printf("Enter the value of n: ");
    scanf("%d", & in );

    //Write to File
    if ((f = fopen("int_data.dat", "wb")) == NULL) { //open file
        printf("Can not open file!.\n");
        exit(0);
    } else
        for (i = 1; i <= in ; i++)
            fwrite( & i, sizeof(int), 1, f); //write to File
    fclose(f); //close file

    //Read file
    f = fopen("int_data.dat", "rb");
    while (fread( & i, sizeof(int), 1, f) == 1)
        printf("%d ", i);
    fclose(f);
}
