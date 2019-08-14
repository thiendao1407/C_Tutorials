#include<stdio.h>

int main()

{
	int ia;
	printf("Moi ban dien so: ");
	scanf("%d", &ia);

	if (ia%15==0)
		printf("FIZZ BUZZ");
	else
	if (ia%3==0)
			printf("FIZZ");
	else
	if (ia%5==0)
		printf("BUZZ");
	else
	printf("So ban nhap la: %d.\n", ia);
}
