#include <stdio.h>

#define MAX 50
main()
{
float fa[MAX], fsum = 0;
int i = 0;
do
{
printf("Nhap vao phan tu thu %d: ", i + 1);
scanf("%f", &fa[i]); //Nhap gia tri cho phan tu thu i
} while (fa[i++] > 0); //con nhap lieu khi gia tri phan tu > 0
i--; //giam i di 1 lan cuoi cung tang 1 truoc khi thoat
//Tinh tong
for(int ij = 0; ij < i; ij++)
fsum += fa[ij]; //cong don tung phan tu vao isum
printf("Tong : %5.2f\n", fsum);
}
