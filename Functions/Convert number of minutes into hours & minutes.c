#include <stdio.h>

// Prototype declaration
void time(int *, int *);

// Convert number of minutes into hours & minutes
void time(int *ih, int *im) {
    *ih = *im/60;
    *im %= 60;
}

int main() {
    int ihour, iminute;
    printf("Please enter the number of minutes: ");
    scanf("%d", &iminute);
    time(&ihour, &iminute);
    printf("%02d:%02d\n", ihour, iminute);
    return 0;
}
