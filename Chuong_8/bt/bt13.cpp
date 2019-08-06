// Kiem tra tinh doi xung
#include<stdio.h>
#include<string.h>

main() {
  char s[50];
  int i, l, idem = 0;
  do {
    printf("nhap chuoi ki tu: ");
    gets(s);
  } while (strlen(s) > 50);
  l = strlen(s);
  for (i = 0; i < l / 2; i++)
    if (s[i] != s[l - 1 - i]) {
      idem++;
      break;
    }
  if (idem != 0) printf("chuoi k doi xung");
  else printf("chuoi doi xung");
}
