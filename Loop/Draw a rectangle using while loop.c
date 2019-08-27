#include<stdio.h>

int main() {
    int i, j, height, width;
    printf("Height: ");
    scanf("%d", & height);
    printf("Width: ");
    scanf("%d", & width);

    i = 0;
    while (i++ < height) {
        j = 0;
        while (j++ < width)
            printf("*");
        printf("\n"); // down the line after having printed one line
    }
    return 0;
}
