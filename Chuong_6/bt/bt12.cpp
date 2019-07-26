#include<stdio.h>
#include<math.h>

int main()
{
	int i, n;
	printf("nhap vao so N: ");
	scanf("%d", &n);
	bool songuyento = true;
	for(i=2; i<=sqrt(n);i++)
	{
		if (n%i==0) 
			{
				songuyento = false;
				break;
			}
	}
	if (songuyento)
        printf("La so nguyen to");
    else
        printf("Khong phai so nguyen to");
}
