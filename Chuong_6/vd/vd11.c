#include<stdio.h>

#define MSG "Vong lap.\n"

void main(void) {
    int i = 0;
    while (i++ < 3)
        printf("%d %s", i, MSG);
}
