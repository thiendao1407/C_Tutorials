#include <stdio.h>

int main() {
    int i = 0, j;
    while (i <= 9) {
        j = 0; // reset j = 0 for the next print
        while (j++ <= 9) // print a row of ten numbers i
            printf("%d", i);
        printf("\n"); // down the line after having printed one line
        i++; // increase i by 1 for the next loop
    }
    return 0;
}
