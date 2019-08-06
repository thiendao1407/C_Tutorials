#include<stdio.h>
#include<string.h>
#include<ctype.h>

void inhoa(char *s, int l);
void inthuong(char *s, int l);
void inhoa(char *s, int l) {
  int i;
  for (i = 0; i < l; i++)
    *(s+i) = toupper(*(s+i));
  printf("%s", s);
}

void inthuong(char *s, int l) {
  int i;
  for (i = 0; i < l; i++)
    *(s+i) = tolower(*(s+i));
  printf("%s", s);
}

main()
{
  int i, l;
  char s[50];
  printf("nhap vao chuoi: ");
  gets(s);
  l = strlen(s);
  inhoa(s, l);
  printf("\n");
  inthuong(s, l);
}
