#include<stdio.h>
#include<string.h>

main() //co van de
{
	char s[50], t[50];
	int i, l;
	printf("Nhap vao chuoi ki tu: "); 
	gets(s);
	l = strlen(s);
	for(i=0;i<l/2;i++)
	{
		t[i]=s[l-i-1]; t[l-i-1]=s[i]; // hien ki tu la
	}
	printf("Chuoi dao nguoc la: %s", t);
}

