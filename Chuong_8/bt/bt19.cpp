#include<stdio.h>
#include<string.h>

main() // co van de?
{
	int i, j, l, m, n;
	char s[50], t[50];
	do
	{
	printf("nhap chuoi ban dau: ");
	gets(s);
	}	while (strlen(s)>50);
	do
	{
	printf("vi tri bat dau: ");
	scanf("%d", &i);
	}	while (i>strlen(s));
	printf("so ki tu chi dinh: "); scanf("%d", &j);
	l=strlen(s);
	printf("%d\n",l);
	if(i+j>l) j=l-i+1;
	for (m=0,n=i-1;n<i+j;n++,m++) // Neu for (m=0; m<j; m++) 
	t[m]=s[n];						//	t[m]=s[m+i-1];
	printf("%s",t); 				//loi ki tu
}
