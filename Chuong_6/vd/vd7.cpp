#include<stdio.h>

#define DAU_CHAM '.'

int main()
{
	char c;
	int i=0;
	for(;;)
	{
		c=getchar();
		if(c==DAU_CHAM) break;
		i++;
	}
	printf("So ki tu: %d", i);
}
