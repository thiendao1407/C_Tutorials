#include<stdio.h>
#include<string.h>

main()
{
	int i,l;
	char s[50];
	printf("nhap vao chuoi: ");
	gets(s);
	l=strlen(s);
	for(i=0;i<l;i++)
	if(s[i]!=' ')
	printf("%c", s[i]);
}
