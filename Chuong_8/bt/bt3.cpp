#include<stdio.h>
#include<string.h>
int main()
{
char s[50];
int i, l;
printf("Nhap ten cua ban: "); gets(s); 
//tach ten
l=strlen(s);
for(i=l-2;i>=0;--i)
if(s[i]==' ' && s[i+1]!=' ')
	{printf("Ten la: %s\n",s+i+1); s[i]='\0'; break;}
//tach ten lot
l=strlen(s);
for(i=0;i<l-1;i++)
if(s[i]!=' ' && s[i+1]==' ')
	{printf("Ten lot la: %s", s+i+1); break;}
}
