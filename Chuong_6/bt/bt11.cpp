#include<stdio.h>
int main()
{
	int i, j, doc, ngang;
	printf("Nhap be doc: \n"); scanf("%d", &doc);
	printf("Nhap be ngang: \n"); scanf("%d", &ngang);
	
	for(j=1;j<=ngang;j++)
			printf("*"); printf("\n"); 
	for(i=1;i<=doc-2;i++)
	{
		for(j=1;j<=ngang;j++)
		{
			if(j==1) printf("*");
			else if (j<ngang) printf(" ");
			else 
			{
			printf("*");	
			printf("\n");
			}
		}
	}
	
	for(j=1;j<=ngang;j++)
		printf("*");	
}
