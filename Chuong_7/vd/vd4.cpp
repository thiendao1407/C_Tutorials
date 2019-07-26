#include<stdio.h>

void thamtri(int ix, int iy)
{
ix += 1; //cong ix them 1
iy += 1; //cong iy them 1
}
void thambien(int &ix, int &iy)
{
ix += 1; //cong ix them 1
iy += 1; //cong iy them 1
}

int main()
{
int ia = 5, ib = 5;
thamtri(ia, ib);
printf("a = %d, b = %d", ia, ib);
thambien(ia, ib);
printf("a = %d, b = %d", ia, ib);
}
