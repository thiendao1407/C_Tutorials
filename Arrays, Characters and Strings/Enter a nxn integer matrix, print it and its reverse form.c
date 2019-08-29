#include <stdio.h>

#define MAX 50

void clear_the_input_buffer();

int main () {
    int ia[MAX][MAX], in = 0;
    do {
        printf("Please enter the dimension of matrix: ");
        scanf("%d", &in);
        clear_the_input_buffer();
    } while (in < 1 || in > MAX);

    for (int i = 0; i < in ; i++)
        for (int j = 0; j < in ; j++) {
            printf("Please enter the element ia[%d][%d]: ", i + 1, j + 1);
            scanf("%d", & ia[i][j]);
            clear_the_input_buffer();
        }

    // print the matrix
    for (int i = 0; i < in ; i++) {
        for (int j = 0; j < in ; j++)
            printf("%3d ", ia[i][j]);
        printf("\n");
    }
    printf("\n");

    // reverse the order of elements
    for (int i = in -1; i >= 0; i--) {
        for (int j = in -1; j >= 0; j--)
            printf("%3d ", ia[i][j]);
        printf("\n");
    }

    return 0;
}

void clear_the_input_buffer() {
    while(1)
        if(getchar()=='\n')
            break;
}
