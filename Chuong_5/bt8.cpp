#include<stdio.h>
int main()
{
	int thang, nam, i;
	printf("nhap thang:");
	scanf("%d", &thang);
	printf("nhap nam:");
	scanf("%d", &nam);
	i=nam%4;
	switch(thang)
	{
		case 1: case 3: case 5: case 7: case 8: case 10: case 12: printf("31 ngay"); break;
		case 4: case 6: case 9: case 11: printf("30 ngay"); break;
		case 2: switch(i)
		{
			case 0: printf("29 ngay"); break;
			case 1: case 2: case 3: printf("28 ngay"); break;
		}
		default: printf("ban phai nhap trong khoang 1..12");
	}
	
}
