#include<stdio.h>

int main() {
    int i, j, height, width;
    printf("Height: ");
    scanf("%d", &height);
    printf("Width: ");
    scanf("%d", &width);

    for (i = 0; i++ < height; ) {
        for (j = 0; j++ < width;)
            printf("*");
        printf("\n"); // down the line after having printed one line
    }
    return 0;
}
