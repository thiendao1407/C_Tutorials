// Xuong dong sau moi tu
#include<stdio.h>
#include<string.h>

main() {
  char s[50];
  do {
    printf("nhap vao chuoi: ");
    gets(s);
  } while (strlen(s) > 50);

  for (int i = 0; i < strlen(s); i++)
    if (s[i] == ' ') printf("\n");
    else printf("%c", s[i]);
}
