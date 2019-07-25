#include<stdio.h>
int main()
{
	int gio, phut, giay, them;
	printf("nhap gio/phut/giay:");
	scanf("%x/%x/%x", &gio, &phut, &giay);
	printf("nhap giay cong them:");
	scanf("%x", &them);
	if (giay+them<60)
		giay=giay+them;
	else 
		{
			giay=giay+them-60;
			phut=phut+1;
		}
		
	if (phut>=60)
		{
			phut=phut-60;
			gio=gio+1;
		}
	if (gio>0 && phut>0 && giay>0 && them>0)
	printf("gio/phut/giay la: %x/%x/%x", gio, phut, giay);
	else printf("error!");
}

