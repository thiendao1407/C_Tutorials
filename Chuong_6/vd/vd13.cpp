#include<stdio.h>

#define DAU_CHAM '.'
int main()
{
	char c;
	while((c = getchar()) != DAU_CHAM)
	putchar(c);
}
