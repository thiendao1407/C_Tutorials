#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

#define MAX 5

void main(void) {
    FILE * f;
    int i, ia[MAX], ib[MAX];

    for (i = 0; i < 5; i++) {
        printf("Please enter the value of n: ");
        scanf("%d", & ia[i]);
    }

    if ((f = fopen("array.dat", "wb")) == NULL) {
        printf("Can not open file!\n");
        exit(0);
    }

    fwrite(ia, sizeof(ia), 1, f);
    fclose(f);

    f = fopen("array.dat", "rb");
    fread(ib, sizeof(ib), 1, f);
    for (i = 0; i < 5; i++)
        printf("%d ", ib[i]);
    fclose(f);
    getch();
}
