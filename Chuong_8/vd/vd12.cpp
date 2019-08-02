#include <stdio.h>
#include <conio.h>
#define MAX 20
//Khai bao prototype
int max(int, int);
//ham tim so lon nhat trong mang 1 chieu
int max(int a[], int in)
{
int i, imax;
imax = a[0]; //cho phan tu dau tien la max
for (i = 1; i < in; i++)
if (imax < a[i]) //neu so dang xet > max
imax = a[i]; //gan so nay cho max
return imax; //tra ve ket qua so lon nhat
}

main()
{
int a[MAX];
int i = 0, inum;
do
{
printf("Nhap vao mot so: ");
scanf("%d", &a[i]);
} while (a[i++] != 0);
i--;
inum = max(a, i);
printf("So lon nhat la: %d.\n", inum);
}
