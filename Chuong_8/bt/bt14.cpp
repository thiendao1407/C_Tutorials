#include<stdio.h>
#include<string.h>

main() {
  int l, a, e, i, o, u;
  char s[50];
  do {
    printf("nhap chuoi ki tu: ");
    gets(s);
  } while (strlen(s) > 50);
  l = strlen(s);
  a = e = i = o = u = 0;
  for (int i = 0; i < l; i++) {
    if (s[i] == 'a') a++;
    if (s[i] == 'e') e++;
    if (s[i] == 'i') i++;
    if (s[i] == 'o') o++;
    if (s[i] == 'u') u++;
  }
  printf("so nguyen am la: %d a, %d e, %d i, %d o, %d u", a, e, i, o, u);
}
