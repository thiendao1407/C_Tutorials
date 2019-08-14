// Quy doi nam am lich
#include<stdio.h>

void main (void)
{
	int n;
	char chi[12][5]={"than","dau","tuat","hoi", "ty", "suu","dan", "mao","thin","ti","ngo", "mui"};
	char can[10][5]={"canh","tan","nham","quy","giap", "at","binh","dinh","mau","ki"};
	do
	{
	printf("nhap vao nam duong lich: ");
	scanf("%d", &n);
	} while (n<0);
	printf("nam am lich la: %s %s\n", can[n%10], chi[n%12]);
	printf("nam ki nhau voi nam %s la: %s, %s, %s\n", chi[n%12], chi[(n+3)%12], chi[(n+6)%12], chi[(n+9)%12]);
	printf("nam hop nhau voi nam %s la: %s, %s\n", chi[n%12], chi[(n+4)%12], chi[(n+8)%12]);
}
