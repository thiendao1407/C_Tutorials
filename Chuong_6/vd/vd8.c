#include<stdio.h>

void main(void)
{

	int i, itong=0;
	for(;;)
	{
		printf("nhap vao mot so nguyen: ");
		scanf("%d", &i);
			if(i<0) continue;
			if(i==0) break;
			itong +=i;
	}

	printf("so so nguyen duong la: %d",itong);
}
