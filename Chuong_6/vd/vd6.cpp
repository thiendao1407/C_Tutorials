#include<stdio.h>

#define DAU_CHAM '.'
int main()
{
	char c;
	int idem;
	for(idem=0;(c=getchar()) != DAU_CHAM;)
	idem++;
	printf("so ki tu: %d ", idem);
}
