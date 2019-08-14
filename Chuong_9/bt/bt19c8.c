// Sao chep mot so ki tu sang chuoi khac tu vi tri xac dinh
#include<stdio.h>
#include<string.h>

void main(void)
{
  int i, j, l, m, n;
  char s[50], t[50];
  do {
    printf("nhap chuoi ban dau: ");
    gets(s);
  } while (strlen(s) > 50);
  do {
    printf("vi tri bat dau: ");
    scanf("%d", & i);
  } while (i > strlen(s));
  printf("so ki tu chi dinh: ");
  scanf("%d", & j);
  l = strlen(s);
  printf("%d\n", l); // do dai xau ki tu
  if (i + j > l)
    j = l - i + 1;
  for (m=0; m<j; m++)
    *(t+m)=*(s+m+i-1);
  *(t+j)='\0';
  printf("%s", t);
}
