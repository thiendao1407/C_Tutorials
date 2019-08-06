// Chuong trinh doc so
#include<stdio.h>

int docso(char *s[], int n);

main() {
  int n;
  char *s[9] = {
    "mot",
    "hai",
    "ba",
    "bon",
    "nam",
    "sau",
    "bay",
    "tam",
    "chin"
  };
  do {
    printf("nhap vao so: ");
    scanf("%d", & n);
  } while (n <= 0 || n > 999);
  docso(s, n);
}
// Ham doc so
int docso(char *s[], int n) {
  int t, c, d;
  t = n / 100, c = (n % 100) / 10, d = n % 10;

  if (n < 10) {
    printf("%s", *(s + d - 1));
    return 0;
  }
  if (n < 20) {
    if (d != 5) printf("muoi` %s", *(s + d - 1));
    else printf("muoi` lam");
    return 0;
  }
  if (n < 100) {
    if (d != 5) printf("%s muoi %s", *(s + c - 1), *(s + d - 1));
    else printf("%s muoi lam", *(s + c - 1));
    return 0;
  }
  if (n > 100) {
    printf("%s tram ", *(s + t - 1));
    n -= 100 * t;
    if (n < 10) printf("le ");
  }
  return docso(s, n);
}
