#include<stdio.h>

#define DAU_CHAM '.'
int main()
{
	char c;
	for(;(c=getchar()) != DAU_CHAM;)
	putchar(c);
}
