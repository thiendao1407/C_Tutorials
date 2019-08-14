#include <stdio.h>

void main(void) {
    int i;
    for (i = 0; i < 128; ++i) {
        if (i == 7) continue;
        printf("%5d%5c\n", i, i);
    }
}
