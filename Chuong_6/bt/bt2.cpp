#include<stdio.h>
int main ()
{
	int i, is=0, in;
	printf("nhap vao so in: ");
	scanf("%d", &in);
	i=0;
	while(i++<in)
		is = is + i*i*i;
	printf("tong: %d", is);
	
}
