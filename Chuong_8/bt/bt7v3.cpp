#include<stdio.h>

#include<string.h>

main()
{
  char s[50];
  int i, l;
  printf("Nhap vao chuoi ki tu: ");
  gets(s);
  l = strlen(s);
  for (i = l - 1; i >= 0; i--)
    printf("%c", s[i]);
}
