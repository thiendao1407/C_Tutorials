#include<stdio.h>
#include<math.h>

int main()
{
	int i, n;
	printf("nhap vao so N: ");
	scanf("%d", &n);
	for(i=2; i<=sqrt(n)+1;i++)
	{
		if (n%i==0) 
			{
				printf("Khong phai so nguyen to"); 
				break;
			}
		if (i>sqrt(n))
			printf("So nguyen to");
	}

}
