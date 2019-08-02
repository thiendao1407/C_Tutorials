#include<stdio.h>
int tang();
int giam();

//ham tang
int tang(int a[], int n)
{	
	int k, i, j;
	for(i=0; i<n; i++)
	for(j=i; j<n;j++)
	if (a[i]>a[j])
	{
		k=a[i]; a[i]=a[j]; a[j]=k;
	}
	printf("day so sau khi sap xep theo chieu tang dan la:\n");
	for(i=0;i<n;i++)
	printf("%2d", a[i]);
}
// ham giam
int giam(int a[], int n)
{
	int k, i, j;
	for(i=0; i<n; i++)
	for(j=i; j<n;j++)
	if (a[i]<a[j])
	{
		k=a[i]; a[i]=a[j]; a[j]=k;
	}
	printf("day so sau khi sap xep theo chieu giam dan la:\n");
	for(i=0;i<n;i++)
	printf("%2d", a[i]);	
}

main ()
{
	int a[50];
	int i, n;
	do
	{
	printf("Cho biet so phan tu cua mang: "); scanf("%d", &n);
	} while (n<=0 || n>50);
	//nhap phan tu
	for(i=0; i<n; i++)
	{
		printf("Phan tu thu %d la: ",i+1); scanf("%d", &a[i]);
	}
	//day so ban dau
	printf("day so ban dau la:\n");
	for(i=0;i<n;i++)
	printf("%2d", a[i]); printf("\n");
	// day so tang
	tang(a, n);
	printf("\n");
	// day so giam
	giam(a, n);	
}
