// Xac dinh vi tri bat dau cua chuoi con trong chuoi ban dau
#include<stdio.h>
#include<string.h>

void check(char s[], char t[]);

main() {
  char s[50], t[50];
  do {
    printf("nhap vao chuoi 1: ");
    gets(s);
  } while (strlen(s) > 50);

  do {
    printf("nhap vao chuoi 2: ");
    gets(t);
  } while (strlen(t) > 50);
  check(s,t);
}

void check(char s[], char t[]) {
  int l, n, i, j, k;
  l = strlen(s);
  n = strlen(t);
  for (i = 0; i < l; i++) {
    if (s[i] == t[0]) {
      k = 1; // k phai trong vong for
      for (j = 1; j < n; j++)
        if (s[i + j] != t[j] || i + j >= l) //den dieu kien j' thoa man thi dat k chu khong xet toan bo j nen ta dat dieu kien ban dau k=1 va !=
      {
        k = 0;
        break;
      }
    }
    if (k == 1) break;
  }
  if (k == 1)
    printf("vi tri la: %d", i + 1);
  else
    printf("khong co dau");
}
