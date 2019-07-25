#include<stdio.h>
int main()
{
	float x, y;
	int t;
	printf("nhap vao x: "); scanf("%f", &x);
	printf("nhap vao y: "); scanf("%f", &y);
	printf("1. +\n");
	printf("2. -\n");
	printf("3. *\n");
	printf("4. /\n");
	printf("nhap 1 trong 4 toan tu tuong ung theo muc tuong ung: ");
	scanf("%d", &t);
	switch(t)
	{
		case 1: printf("%f + %f", x, y); break;
		case 2: printf("%f - %f", x, y); break;
		case 3: printf("%f * %f", x, y); break;
		case 4:
			if(y==0) printf("khong chia duoc");
			else printf("%f / %f", x, y);
		break;
		default: printf("ban phai nhap 1 trong 4 toan tu theo muc tuong ung: 1, 2, 3 hoac 4");
	};
	
}
 
