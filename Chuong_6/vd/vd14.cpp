#include<stdio.h>

#define DAU_CHAM '.'
int main()
{
	char c;
	int idem=0;
	while((c=getchar()) != DAU_CHAM)
	idem++;
	printf("so ki tu: %d ", idem);
}
