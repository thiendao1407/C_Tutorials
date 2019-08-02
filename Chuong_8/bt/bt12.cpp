#include<stdio.h>
#include<string.h>

main() {
  int d;
  char s[50];
  do {
    printf("nhap vao chuoi: ");
    gets(s);
  } while (strlen(s) > 50);
  for (int i = 0; i < strlen(s) - 1; i++)
    if (s[i] != ' ' && s[i + 1] == ' ')
      d++;
  if (s[strlen(s) - 1] != ' ') d++;
  printf("So tu la %d", d);
}
