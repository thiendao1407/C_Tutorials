#include<stdio.h>
#include<string.h>
#include<ctype.h>

void main(void)
{
  int i, l;
  char s[50];
  printf("Please enter the string: ");
  gets(s);
  l = strlen(s);
  * s = toupper(* s);
  for (i = 1; i < l; i++)
    if (*(s+i) == ' ')
      *(s+i+1) = toupper(*(s+i+1));
  printf("%s", s);
}
