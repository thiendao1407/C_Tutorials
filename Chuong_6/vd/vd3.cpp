#include<stdio.h>
int main ()
{
	int i, is=0, in;
	printf("nhap vao so in: ");
	scanf("%d", &in);
	for(i=0;i<=in;i++)
	{
		if(i%2 !=0)
		is=is+i;
	}
		printf("tong: %d", is);
}
