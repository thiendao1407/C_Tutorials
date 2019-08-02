# include <stdio.h>
# include <string.h>

main()
{
	int i,j,vt,d,l;
	char s[50];
	do
	{
	printf("nhap chuoi ki tu: ");
	gets(s);
	}	while (strlen(s)>50);
	
	l=strlen(s);
	
	do
	{
	printf("vi tri can xoa: "); scanf("%d",&vt);
	}	while(vt>l);
	
	printf("so ki tu muon xoa: "); scanf("%d",&d);
	
	if(vt-1+d>=l) s[vt-1]='\0';
	else
	{
	for(i=vt-1+d;i<l;i++)
	s[i-d]=s[i];
	s[l-d]='\0';
	}
	printf("Chuoi sau khi xoa la: %s",s);
}

