#include <stdio.h>

int main()
{
int a,b,c,imax;
printf("nhap a: ");
scanf("%d", &a);
printf("nhap b: ");
scanf("%d", &b);
printf("nhap c: ");
scanf("%d", &c);

imax=a;

if (b>a)
	if (b>c)
	imax=b;
	else imax=c;
else if (c>a)
	imax=c;
printf("max = %d", imax);
}
