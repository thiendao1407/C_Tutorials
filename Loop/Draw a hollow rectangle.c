#include<stdio.h>

int main() {
    int i, j, height, width;
    printf("Enter the height: \n");
    scanf("%d", &height);
    printf("Enter the width: \n");
    scanf("%d", &width);

    for (j = 1; j <= width; j++)
        printf("*");

    printf("\n");

    for (i = 1; i <= height - 2; i++) {
        printf("*");
        for (int k = 1; k <= width - 2; k++) {
            printf(" ");
        }
        printf("*\n");
    }

    for (j = 1; j <= width; j++)
        printf("*");

    return 0;
}
