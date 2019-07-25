/* Chuong trinh kiem tra mat khau */
#include <stdio.h>
# define PASSWORD 12345
int main()
{
int in;
do
{
printf("Nhap vao password: ");
scanf("%d", &in);
} 
while (in != PASSWORD);
}
