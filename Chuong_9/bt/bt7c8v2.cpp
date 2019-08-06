#include <stdio.h>
#include <string.h>

void dao(char *);

main()
{
  char s[30];
  printf("Nhap vao chuoi ki tu: ");
  gets(s);
  dao(s);
}

void dao(char *s)
{
  for (int l = strlen(s) - 1; l >= 0; l--)
    printf("%c", *(s+l));
}
