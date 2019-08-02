#include<stdio.h>
#include<string.h>

 // Ham tach ki tu
int tachkitu(char s[]);
int tachkitu(char s[]) {
  // cat ki tu lap nhau
  int i, j;
  for (i = 0; i < strlen(s) - 1; i++)
    if (s[i] == ' ' && s[i + 1] == ' ') {
      for (j = i; j < strlen(s) - 1; j++)
        s[j] = s[j + 1];
      s[strlen(s) - 1] = '\0';
      i--;
    }
  //cat khoang trang o dau
  if (s[0] == ' ') {
    for (i = 0; i < strlen(s); i++)
      s[i] = s[i + 1];
    s[strlen(s) - 1] = '\0';
  }
  //cat khoang trang o cuoi
  if (s[strlen(s) - 1] == ' ')
    s[strlen(s) - 1] = '\0';
}
// Ham tach ten
int hoten(char s[]);
int hoten(char s[]) {
  for (int k = strlen(s) - 1; k >= 0; k--)
    if (s[k] == ' ') {
      printf("Ten la: %s\n", s + k + 1);
      s[k] = '\0';
      break;
    }
  for (int k = 0; k < strlen(s); k++)
    if (s[k] == ' ') {
      printf("Ten lot la: %s\n", s + k + 1);
      break;
    }
}

int main() {
  char s[50];
  printf("Nhap chuoi ki tu: ");
  gets(s);
  tachkitu(s);
  hoten(s);
}
