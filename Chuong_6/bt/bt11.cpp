#include<stdio.h>
int main()
{
	int i, j, doc, ngang;
	printf("Nhap be doc: \n"); scanf("%d", &doc);
	printf("Nhap be ngang: \n"); scanf("%d", &ngang);
	
	for(j=1;j<=ngang;j++)
		printf("*"); 
	printf("\n"); 
	for(i=1;i<=doc-2;i++)
	{
		printf("*");
		for(int g=1; g<=ngang-2;g++)
		{
			printf(" ");
		}
		printf("*\n");
	}
	for(j=1;j<=ngang;j++)
		printf("*");	
}
