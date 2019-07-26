#include <stdio.h>
#include <conio.h>

// khai bao prototype
void line();

// ham in 1 dong dau
void line()
{
int i;
for(i = 0; i < 19; i++)
printf("*");
printf("\n");
}

int main()
{
line();
printf("* Minh hoa ve ham *\n");
line();
getch();
}

