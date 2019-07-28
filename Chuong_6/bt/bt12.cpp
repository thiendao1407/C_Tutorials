#include<stdio.h>
#include<math.h>

int main()
{
	int i, n, icheck;
	printf("nhap vao so N: ");
	scanf("%d", &n);
	icheck=0;
	for(i=2; i<=sqrt(n);i++)
		{
			if (n%i==0) 
			{
				icheck++; break;
			}
		}
	if (icheck==0 && n!=1)
    printf("La so nguyen to");
    else
    printf("Khong phai so nguyen to");

}
