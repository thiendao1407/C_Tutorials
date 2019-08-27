#include<stdio.h>
int main()
{
	float x, y;
	int t;
	printf("Enter number x: "); scanf("%f", &x);
	printf("Enter number y: "); scanf("%f", &y);
	printf("1. +\n");
	printf("2. -\n");
	printf("3. *\n");
	printf("4. /\n");
	printf("Enter an operator: ");
	scanf("%d", &t);
	switch(t){
		case 1: printf("%f + %f", x, y); break;
		case 2: printf("%f - %f", x, y); break;
		case 3: printf("%f * %f", x, y); break;
		case 4:
			if(y==0) printf("0 can not be divided");
			else printf("%f / %f", x, y);
            break;
		default: printf("You must enter an operator according to the corresponding item: 1, 2, 3 or 4");
	}
	return 0;
}

