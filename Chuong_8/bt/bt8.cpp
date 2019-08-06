// Dem chu 'th'
#include<stdio.h>
#include<string.h>

main()
{
  int i, d = 0;
  char s[50];
  printf("Nhap chuoi ki tu: ");
  gets(s);
  for (i = 0; i < strlen(s) - 1; i++)
    if (s[i] == 't' && s[i + 1] == 'h')
      d++;
  printf("So lan xuat hien tu 'th' la: %d", d);
}
