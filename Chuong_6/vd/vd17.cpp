/* Chuong trinh in tuoi */
#include <stdio.h>
#define CHUC "Chuc ban vui ve (: >\n"
int main()
{
char choi;
int i1, i2;
do
{
printf("Nhap vao nam hien tai: ");
scanf("%d", &i1);
printf("Nhap vao nam sinh: ");
scanf("%d", &i2);
printf("Ban %d tuoi, %s", i1 - i2, CHUC);
printf("Ban co muon tiep tuc? (Y/N)\n");
scanf("%s", &choi);
} while (choi == 'y' || choi == 'Y');
}
