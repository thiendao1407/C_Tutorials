#include<stdio.h>
int a, b;
int max();

int main()
{
	
	printf("nhap so a: "); scanf("%d",&a);
	printf("nhap so b: "); scanf("%d",&b);
	printf("So lon nhat la: %d", max());
}


int max()
{
	int max;
	if(b>a)
	max=b; else max=a;
	return max;
}
