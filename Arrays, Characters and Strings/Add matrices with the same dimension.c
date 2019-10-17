#include <stdio.h>

#define MAX 20

void input(float fa[][MAX]);
void output(float fa[][MAX]);
void add(float fa[][MAX], float fb[][MAX], float fc[][MAX]);
float max(float fa[][MAX]);

// global variable
int in;

int main () {
    float fa[MAX][MAX], fb[MAX][MAX], fc[MAX][MAX];
    printf("Please enter the dimension of matrices: ");
    scanf("%d", & in );
    printf("Please enter the elements of matrix a: \n");
    input(fa);
    printf("Please enter the elements of matrix b: \n");
    input(fb);
    add(fa, fb, fc);
    printf("Matrix a: \n");
    output(fa);
    printf("Matrix b: \n");
    output(fb);
    printf("Matrix c: \n");
    output(fc);
    printf("The largest element of matrix c is %5.2f.\n", max(fc));
    return 0;
}

// find the largest element function
float max(float fa[][MAX]) {
    float fmax;
    fmax = fa[0][0];
    for (int i = 0; i < in ; i++)
        for (int ij = 0; ij < in ; ij++)
            if (fmax < fa[i][ij])
                fmax = fa[i][ij];
    return fmax;
}
// Enter elements function
void input(float fa[][MAX]) {
    for (int i = 0; i < in ; i++)
        for (int ij = 0; ij < in ; ij++) {
            printf("Please enter the element[%d][%d]: ", i, ij);
            scanf("%f", & fa[i][ij]);
        }
}
// print the matrix
void output(float fa[][MAX]) {
    for (int i = 0; i < in ; i++) {
        for (int ij = 0; ij < in ; ij++)
            printf("%5.2f", fa[i][ij]);
        printf("\n");
    }
}
// add matrices with the same dimension
void add(float fa[][MAX], float fb[][MAX], float fc[][MAX]) {
    for (int i = 0; i < in ; i++)
        for (int ij = 0; ij < in ; ij++)
            fc[i][ij] = fa[i][ij] + fb[i][ij];
}
