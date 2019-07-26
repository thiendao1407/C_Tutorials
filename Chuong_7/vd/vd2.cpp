#include <stdio.h>

// khai bao prototype
int power(int, int);

// ham tinh so mu
int power(int ix, int in)
{
int i, ip = 1;
for(i = 1; i <= in; i++)
ip *= ix;
return ip;
}

int main()
{
printf("2 mu 2 = %d.\n", power(2, 2));
printf("2 mu 3 = %d.\n", power(2, 3));
}
