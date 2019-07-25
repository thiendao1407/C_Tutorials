#include<stdio.h>

int main()
{	char i;	
	do
	{
		printf("Nhap ki tu: \n");
		scanf(" %c", &i);
		printf("Ma ASCII: %d\n", i); 
	} while(i!='0');
}
