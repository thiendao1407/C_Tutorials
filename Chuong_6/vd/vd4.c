#include<stdio.h>

#define DAU_CHAM '.'

void main(void)
{
	char c;
	for(;(c=getchar()) != DAU_CHAM;)
	putchar(c);
}
