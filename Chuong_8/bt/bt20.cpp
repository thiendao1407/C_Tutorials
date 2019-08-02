#include<stdio.h>
#include<string.h>

// ham check // tai sao doi cho ham check thi lai sai?
int check();
int check(char s[50], char t[50])
{
	int l,n,i,j,k;
	l=strlen(s);
	n=strlen(t);
	for(i=0;i<l;i++)
	{ 
		if (s[i]==t[0])
		{
			k=1; // k phai trong vong for
			for(j=1;j<n;j++)
			if(s[i+j]!=t[j]||i+j>=l) //den dieu kien j' thoa man thi dat k chu khong xet toan bo j nen ta dat dieu kien ban dau k=1 va !=
				{
				k=0; 
				break;
				}	
		}
		if(k==1) break;	
	}
	if(k==1) 
	printf("vi tri la: %d", i+1);
	else 
	printf("khong co dau");
}


main()
{
	char s[50], t[50];
	do
	{
	printf("nhap vao chuoi 1: "); gets(s);
	} while (strlen(s)>50);
	
	do
	{
	printf("nhap vao chuoi 2: "); gets(t);
	} while (strlen(t)>50);
	check(s,t);
}

