#include<stdio.h>

int n;
int tong(int);

int main()
{
	printf("Nhap so n: ");
	scanf("%d", &n);
	printf("Tong cua %d so tu nhien dau tien co gia tri la: %d", n, tong(n));
}



int tong(int n)
{
	int i, ip=0;
	for(i=1;i<=n;i++)
	ip +=i;
	return ip;
}


