#include<stdio.h>

int max();
int min();
int max(int a[], int n)
{
	int i, max;
	max=a[0];
	for(i=1;i<n;i++)
	if(max<a[i])
	max=a[i];
	return max;
}
int min(int a[], int n)
{
	int i, min;
	min=a[0];
	for(i=1;i<n;i++)
	if(min>a[i])
	min=a[i];
	return min;
}

main()
{
	int a[50];
	int i=0, n, imax, imin;
	do
	{
	printf("Nhap vao n<=50: "); scanf("%d", &n);
	} while(n <=0 || n>50);
	for(i=0;i<n;i++)
	{
		printf("Nhap vao so thu %d: ",i+1);
		scanf("%d",&a[i]);
	}
	imax=max(a,n);
	imin=min(a,n);
	printf("Max la: %d\n", imax);
	printf("Min la: %d", imin);	
}
