#include<stdio.h>
#include<math.h>

int n;
void kiemtra();

int main()
{
	printf("nhap so n: ");
	scanf("%d", &n);
	kiemtra();
}

void kiemtra()
{
	int idem=0;
	for(int i=2; i<sqrt(n);i++)
	{
		if(n%i==0)
		{
			idem++; break;
		}
	}
	if(idem==1) 
		printf("So %d khong phai so nguyen to", n);
	else 
		printf("So %d la so nguyen to", n);
}
