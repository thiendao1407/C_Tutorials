#include<stdio.h>

int main()
{
int i,j;
printf("1.bua\n");
printf("2.keo\n");
printf("3.giay\n");
printf("nguoi choi 1 chon: ");
scanf("%d", &i);
switch(i)
{

	case 1: printf("nguoi choi 2 chon:");
			scanf("%d", &j);
			switch(j)
			{
			case 1: printf("hoa"); break;
			case 2: printf("nguoi choi 1 thang"); break;
			case 3: printf("nguoi choi 2 thang"); break;
			default: printf("ban phai nhap 1, 2 hoac 3");
			}; break;
	case 2: printf("nguoi choi 2 chon:");
			scanf("%d", &j);
			switch(j)
			{
			case 1: printf("nguoi choi 2 thang"); break;
			case 2: printf("hoa"); break;
			case 3: printf("nguoi choi 1 thang"); break;
			default: printf("ban phai nhap 1, 2 hoac 3");
			};	break;
	case 3: printf("nguoi choi 2 chon:");
			scanf("%d", &j);
			switch(j)
			{
			case 1: printf("nguoi choi 1 thang"); break;
			case 2: printf("nguoi choi 2 thang"); break;
			case 3: printf("hoa"); break;
			default: printf("ban phai nhap 1, 2 hoac 3");
			}; break;
	default: printf("ban phai nhap 1, 2 hoac 3");
};
}
					
	

