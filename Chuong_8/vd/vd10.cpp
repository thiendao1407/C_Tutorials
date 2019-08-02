#include <stdio.h>

#define MAX 50
main()
{
int ia[MAX][MAX], i, ij, in;
printf("Nhap vao cap ma tran: ");
scanf("%d", &in);

for (i = 0; i < in; i++) 
for (ij = 0; ij < in; ij++) 
{
printf("Nhap vao phan tu ia[%d][%d]: ", i + 1, ij + 1);
scanf("%d", &ia[i][ij]);
}

//In ma tran
for (i = 0; i < in; i++)
{
for (ij = 0; ij < in; ij++)
printf("%3d ", ia[i][ij]);
printf("\n"); 
}
printf("\n"); 

//In ma tran theo thu tu nguoc
for (i = in-1; i >= 0; i--)
{
for (ij = in-1; ij >= 0; ij--) 
printf("%3d ", ia[i][ij]);
printf("\n"); 
}
}
