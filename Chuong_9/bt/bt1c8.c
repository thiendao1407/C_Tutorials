#include<stdio.h>

int max(int * a, int n);
int min(int * a, int n);
// Ham xoa bo nho dem
void xoabonhodem();
void xoabonhodem() {
  while(true)
    if(getchar()=='\n')
        break;
}
int max(int * a, int n)
{
  int i, max;
  max = * a;
  for (i = 1; i < n; i++)
    if (max < *(a+i))
      max = *(a+i);
  return max;
}
int min(int * a , int n)
{
  int i, min;
  min = * a;
  for (i = 1; i < n; i++)
    if (min > *(a+i))
      min = *(a+i);
  return min;
}

void main(void)
{
  int a[50];
  int i = 0, n, imax, imin;
  do {
    printf("Nhap vao n<=50: ");
    scanf("%d", & n);
    xoabonhodem();
  } while (n <= 0 || n > 50);
  for (i = 0; i < n; i++) {
    printf("Nhap vao so thu %d: ", i + 1);
    scanf("%d", a+i);
    xoabonhodem();
  }
  imax = max(a, n);
  imin = min(a, n);
  printf("Max la: %d\n", imax);
  printf("Min la: %d", imin);
}
