#include<stdio.h>

void main(void)
{
	int i, is, in;
	is=0;
	for(is=0,i=1;i<=3;i++)
		{
			printf("nhap vao so thu %d: ", i);
			scanf("%d", &in);
			is=is+in;
		}
		printf("tong: %d", is);
}
