#include <stdio.h>

int main() {
    int i;
    for (i = 0; i < 128; ++i) {
        if (i == 7)
            continue;
        printf("%5d%5c\n", i, i);
    }
    return 0;
}
