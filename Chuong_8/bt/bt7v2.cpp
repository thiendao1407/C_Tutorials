#include <stdio.h>
#include <string.h>

int dao(char);
int dao(char s[30])
{
	for (int l=strlen(s)-1;l>=0;l--)
	printf("%c",s[l]);
}

main()
{
	char s[30];
	printf("Nhap vao chuoi ki tu: "); 
	gets(s);
	dao(s);
}
