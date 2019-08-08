#include<stdio.h>

int input(int a, int b);
int output(int a, int b);
int a, b;
main()
{

    input(a, b);
    output(a, b);
}

int input(int a, int b){
    printf("nhap vao so a: ");
    scanf("%d", &a);
    printf("nhap vao so b: ");
    scanf("%d", &b);
}

int output(int a, int b){
    printf("Hai so la: %d, %d", a, b);
}
