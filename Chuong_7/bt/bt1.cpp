#include<stdio.h>

int n;
int giaithua(int);

int main()
{
	printf("Nhap so n: ");
	scanf("%d", &n);
	printf("%d! co gia tri la: %d", n, giaithua(n));
}



int giaithua(int n)
{
	int i, ip=1;
	for(i=1;i<=n;i++)
	ip *=i;
	return ip;
}


