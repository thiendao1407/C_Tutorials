#include<stdio.h>
#include<string.h>

void timphong(char s[]);
void traphong(char s[]);
void phongtrong(char s[]);
void phongthue(char s[]);

int l, k, j;

main() {
  int i, menu;
  char s[50];
  printf("Nhap so luong phong: ");
  scanf("%d", & l);
  getchar(); // bo getchar thi dong 20 xuat hien lap lai, neu enter thi chay tiep, enter roi moi dien gia tri thi lap lai
  printf("e-Empty)\n");
  printf("o-Occupied\n");
  for (i = 0; i < l; i++) {
    printf("Nhap trang thai phong %d: ", i + 1);
    scanf("%c", & s[i]);
    getchar(); // bo getchar thi dong 20 lan dau xuat hien 1 lan, cac lan sau 2 lan, neu enter thi xuat hien 1lan
    if (s[i] != 'E' && s[i] != 'O' && s[i] != 'o' && s[i] != 'e') {
      i--;
    }
  }

  do {
    printf("1. Tim phong trong\n");
    printf("2. Tra phong\n");
    printf("3. Cac phong con trong\n");
    printf("4. Cac phong da thue\n");
    printf("5. Exit\n");
    printf("(Luu y: Ban phai nhap vao mot trong cac so: 1,2,3,4,5.)\n");
    printf("Chon muc tuong ung: ");
    scanf("%d", & menu);
    getchar();
    printf("\n");
    switch (menu) {
    case 1:
      timphong(s);
      break;
    case 2:
      traphong(s);
      break;
    case 3:
      phongtrong(s);
      break;
    case 4:
      phongthue(s);
      break;
    };
  } while (menu != 5);
}

void timphong(char s[]) {
  do {
    printf("Ban muon tim phong, moi ban chon so phong: ");
    scanf("%d", & k);
  } while (k < 1 || k > l);
  if (s[k - 1] == 'E' || s[k - 1] == 'e') {
    printf("Phong %d trong\n", k);
    printf("Ban co muon thue phong %d?\n", k);
    do {
      printf("1. Yes of 0. No?\n");
      scanf("%d", & j);
      getchar();
    } while (j != 1 && j != 0);
    if (j == 1) {
      printf("Ban da thue phong %d\n", k);
      s[k - 1] = 'o';
    }
  }
  if (s[k - 1] == 'O' || s[k - 1] == 'o')
    printf("Phong %d da duoc thue, moi ban chuyen den muc 3", k);
  printf("\n\n");
}
void traphong(char s[]) {
  do {
    printf("Ban muon tra phong, moi ban nhap so phong: ");
    scanf("%d", & k);
  } while (k < 1 || k > l);
  if (s[k - 1] == 'E' || s[k - 1] == 'e')
    printf("Phong %d chua duoc thue, moi ban chuyen den muc 4", k);
  if (s[k - 1] == 'O' || s[k - 1] == 'o') {
    printf("Ban co muon tra phong %d?\n", k);
    do {
      printf("1. Yes of 0. No?\n");
      scanf("%d", & j);
      getchar();
    } while (j != 1 && j != 0);
    if (j == 1) {
      printf("Ban da tra phong %d\n", k);
      s[k - 1] = 'e';
    }
  }
  printf("\n\n");
}

void phongtrong(char s[]) {
  printf("Ban dang o muc 3, cac phong con trong la:");
  for (k = 1; k < l + 1; k++)
    if (s[k - 1] == 'E' || s[k - 1] == 'e') printf(" %d,", k);
  printf("\n\n");
}

void phongthue(char s[]) {
  printf("Ban dang o muc 4, cac phong da thue la: ");
  for (k = 1; k < l + 1; k++)
    if (s[k - 1] == 'O' || s[k - 1] == 'o') printf(" %d,", k);
  printf("\n\n");
}