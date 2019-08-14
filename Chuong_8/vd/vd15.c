/* cong ma tran */
#include <stdio.h>

#include <conio.h>

#define MAX 20
//Khai bao prototype
void input(float);
void output(float);
void add(float, float, float);
float max(float);

//khai bao bien toan cuc
int in ;

//ham tim so lon nhat trong mang 2 chieu
float max(float fa[][MAX]) {
    float fmax;
    fmax = fa[0][0]; //cho phan tu dau tien la max
    for (int i = 0; i < in ; i++)
        for (int ij = 0; ij < in ; ij++)
            if (fmax < fa[i][ij]) //neu so dang xet > max
                fmax = fa[i][ij]; //gan so nay cho max
    return fmax; //tra ve ket qua so lon nhat
}
//ham nhap lieu mang 2 chieu
void input(float fa[][MAX]) {
    for (int i = 0; i < in ; i++)
        for (int ij = 0; ij < in ; ij++) {
            printf("Nhap vao ptu[%d][%d]: ", i, ij);
            scanf("%f", & fa[i][ij]);
        }
}
//ham in mang 2 chieu ra man hinh
void output(float fa[][MAX]) {
    for (int i = 0; i < in ; i++) {
        for (int ij = 0; ij < in ; ij++)
            printf("%5.2f", fa[i][ij]);
        printf("\n");
    }
}
//ham cong 2 mang 2 chieu
void add(float fa[][MAX], float fb[][MAX], float fc[][MAX]) {
    for (int i = 0; i < in ; i++)
        for (int ij = 0; ij < in ; ij++)
            fc[i][ij] = fa[i][ij] + fb[i][ij];
}

void main (void) {
    float fa[MAX][MAX], fb[MAX][MAX], fc[MAX][MAX];
    printf("Nhap vao cap ma tran: ");
    scanf("%d", & in );
    printf("Nhap lieu ma tran a: \n");
    input(fa);
    printf("Nhap lieu ma tran b: \n");
    input(fb);
    printf("Nhap lieu ma tran c: \n");
    input(fc);
    add(fa, fb, fc);
    printf("Ma tran a: \n");
    output(fa);
    printf("Ma tran b: \n");
    output(fb);
    printf("Ma tran c: \n");
    output(fc);
    printf("So lon nhat cua ma tran c la: %5.2f.\n", max(fc));

}
