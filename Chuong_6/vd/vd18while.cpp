#include<stdio.h>
int main()
{
	int i, ij, ingang, idoc;
	printf("ngang: ");
	scanf("%d", &ingang);
	printf("doc: ");
	scanf("%d", &idoc);
	i=0;
	while(i++<idoc)
	{
		ij=0;
		while(ij++<ingang)
		printf("*");
		printf("\n");
	}
	
	
	
}
