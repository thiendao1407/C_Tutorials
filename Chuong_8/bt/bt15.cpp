#include<stdio.h>
#include<string.h>

main()
{
	int i,l,k,j, menu;
	char s[50];
	printf("Nhap so luong phong: ");
	scanf("%d", &l);
  	getchar();
	printf("e-Empty)\n"); printf("o-Occupied\n");
	for(i=0;i<l;i++)
	{
		printf("Nhap trang thai phong %d: ", i+1);
		scanf("%c", &s[i]);
		getchar();
		if(s[i]!='E' && s[i]!='O' && s[i]!='o' && s[i]!='e')
		{
		 i--; continue;
		}
	}
	do
	{
	printf("1. Tim phong trong\n");
	printf("2. Tra phong\n");
	printf("3. Cac phong con trong\n");
	printf("4. Cac phong da thue\n");
	printf("5. Exit\n");
	printf("(Luu y: Ban phai nhap vao mot trong cac so: 1,2,3,4,5.)\n");	
	printf("Chon muc tuong ung: "); scanf("%d", &menu); printf("\n");
		switch(menu)
		{
			case 1: do
					{
						printf("Ban muon tim phong, moi ban chon so phong: "); scanf("%d",&k);
					} while(k<1 ||k>l);
					if (s[k-1]=='E' || s[k-1]=='e') 
						{
							printf("Phong %d trong\n", k);
							printf("Ban co muon thue phong %d?\n", k);	
							do
							{
							printf("1. Yes of 0. No?\n"); scanf("%d", &j); getchar();	
							} while(j!=1 && j!=0);
							if (j=1)
								{
								printf("Ban da thue phong %d\n", k);
								s[k]='o';
								}
						}
					if (s[k-1]=='O' || s[k-1]=='o') printf("Phong %d da duoc thue, moi ban chuyen den muc 3", k);
					printf("\n\n"); 
					break;
			case 2: do
					{
						printf("Ban muon tra phong, moi ban nhap so phong: "); scanf("%d",&k);
					} while(k<1 ||k>l);
					if (s[k-1]=='E' || s[k-1]=='e') printf("Phong %d chua duoc thue, moi ban chuyen den muc 4", k);
					if (s[k-1]=='O' || s[k-1]=='o') 
						{
							printf("Ban co muon tra phong %d?\n", k);	
							do
							{
							printf("1. Yes of 0. No?\n"); scanf("%d", &j); getchar();
							} while(j!=1 && j!=0);
							if (j=1)
								{
								printf("Ban da tra phong %d\n", k);
								s[k]='e';
								}
						}
					printf("\n\n"); 
					break;
			case 3: printf("Ban dang o muc 3, cac phong con trong la:");
					for(k=1;k<l+1;k++)
					if (s[k-1]=='E' || s[k-1]=='e') printf(" %d,", k);
					printf("\n\n"); 
					break;
			case 4: printf("Ban dang o muc 4, cac phong da thue la: ");
					for(k=1;k<l+1;k++)
					if (s[k-1]=='O' || s[k-1]=='o') printf(" %d,", k);
					printf("\n\n"); 
					break;	
		};
	
	} while(menu!=5);	
}
