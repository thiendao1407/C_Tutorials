// Swap
#include<stdio.h>

int swap(int &,int &);

main() {
  int a, b;
  printf("nhap vao so a: ");
  scanf("%d", & a);
  printf("nhap vao so b: ");
  scanf("%d", & b);
  swap(a, b);
  printf("so a la: %d\n", a);
  printf("so b la: %d\n", b);
}
int swap(int & a, int & b) {
  int k;
  k = a;
  a = b;
  b = k;
}
