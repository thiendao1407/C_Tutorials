#include <stdio.h>
#include <conio.h>

#define DOT '.'

int main() {
    char c;
    int idem = 0;
    for(; ;) {
        c = getchar();
        if (c == DOT) // enter the dot
            break; // exit the loop
        idem++;
    }
    printf("The number of characters is: %d.\n", idem);
    return 0;
}
