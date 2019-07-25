#include<stdio.h>
#include <math.h>  

int main()
{
	float a,b,c,delta;
	printf("nhap vao a,b,c: ");
	scanf("%f,%f,%f", &a,&b,&c);
	delta=b*b-4*a*c;
	if (a==0) printf("error");
		else if (delta<0)
		printf("phuong trinh vo nghiem.");
		else if (delta==0)
		printf("phuong trinh co nghiem duy nhat la: x1=x2=%f", -b/(2*a));
		else printf("phuong trinh co hai nghiem phan biet la x1=%f va x2=%f.", (- b - sqrt(delta))/(2*a), (- b + sqrt(delta))/(2*a));
}
