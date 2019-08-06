// In ra chuoi dao nguoc
#include<stdio.h>
#include<string.h>

void dao(char s[]);

main()
{
  char s[30];
  printf("Nhap vao chuoi ki tu: ");
  gets(s);
  dao(s);
}
void dao(char s[])
{
  for (int l = strlen(s) - 1; l >= 0; l--)
    printf("%c", s[l]);
}
