/* Ve hinh chu nhat bang cac so tu 0 den 9 */
#include <stdio.h>
#include <conio.h>
int main()
{
int i = 0, ij;
while (i <= 9)
{
ij = 0; //khoi tao lai ij = 0 cho lan in ke tiep
while (ij++ <= 9) //in 1 hang 10 so i
printf("%d", i);
printf("\n"); //xuong dong khi in xong 1 hang
i++; //tang i len 1 cho vong lap ke tiep
}

}
