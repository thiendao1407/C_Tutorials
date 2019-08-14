// Dem so ki tu tinh tien
#include<stdio.h>
#include<string.h>

void main(void) {
  char s[50];
  int i, k, d1, d2;
  d1 = d2 = 0;
  do {
    printf("Nhap vao van ban cua ban( ngan hon 50 ki tu)\n");
    gets(s);
  } while (strlen(*s) > 50);
  //lay gia tri k
  for (i = 0; i < strlen(s); i++)
    if (s[i] != ' ') {
      k = i - 1;
      break;
    }
  // bat dau tinh
  for (i = 1; i < strlen(s); i++) {
    if (s[i] == ' ' && s[i - 1] != ' ') {
      if (i - k - 1 <= 8)
        d1++;
      else d2++;
      k = i;
    }

    if (i == strlen(s) - 1 && s[i] != ' ') {
      if (i - k <= 8)
        d1++;
      else d2++;
      k = i;
    }
  }

  printf("so tu: %d\n", d1 + d2);
  printf("so tu co kich thuoc binh thuong: %d\n", d1);
  printf("so tu co kich thuoc tren 8 ki tu: %d\n", d2);
  printf("so tien tong cong: %d\n", 100 * d1 + 150 * d2);
}
