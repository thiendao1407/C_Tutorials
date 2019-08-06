// Quan li khach san
#include<stdio.h>
#include<string.h>

void timphong(int *s);
void traphong(int *s);
void phongtrong(int *s);
void phongthue(int *s);
void xoabonhodem();


int l, k, j;

main() {
  int i, menu;
  int s[50];
  do {
    printf("Nhap so luong phong: ");
    scanf("%d", & l);
    xoabonhodem();
  } while (l < 1 || l > 50);
  printf("1-Empty)\n");
  printf("0-Occupied\n");
  for (i = 0; i < l; i++) {
    do {
      printf("Nhap trang thai phong %d: ", i + 1);
      scanf("%d", s+i);
      xoabonhodem();
    } while (*(s+i) != 1 && *(s+i) != 0);
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
    xoabonhodem();
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

void timphong(int * s) {
  do {
    printf("Ban muon tim phong, moi ban chon so phong: ");
    scanf("%d", & k);
    xoabonhodem();
  } while (k < 1 || k > l);
  if (*(s+k-1) == 1) {
    printf("Phong %d trong\n", k);
    printf("Ban co muon thue phong %d?\n", k);
    do {
      printf("1. Yes of 2. No?\n");
      scanf("%d", & j);
      xoabonhodem();
    } while (j != 1 && j != 2);
    if (j == 1) {
      printf("Ban da thue phong %d\n", k);
      *(s+k-1) = 0;
    }
  }
  else printf("Phong %d da duoc thue, moi ban chuyen den muc 3", k);
  printf("\n\n");
}
void traphong(int * s) {
  do {
    printf("Ban muon tra phong, moi ban nhap so phong: ");
    scanf("%d", & k);
    xoabonhodem();
  } while (k < 1 || k > l);
  if (*(s+k-1) == 1)
    printf("Phong %d chua duoc thue, moi ban chuyen den muc 4", k);
  else {
    printf("Ban co muon tra phong %d?\n", k);
    do {
      printf("1. Yes of 2. No?\n");
      scanf("%d", & j);
      xoabonhodem();
    } while (j != 1 && j != 2);
    if (j == 1) {
      printf("Ban da tra phong %d\n", k);
      *(s+k-1) = 1;
    }
  }
  printf("\n\n");
}

void phongtrong(int * s) {
  printf("Ban dang o muc 3, cac phong con trong la:");
  for (k = 1; k < l + 1; k++)
    if (*(s+k-1) == 1)
      printf(" %d,", k);
  printf("\n\n");
}

void phongthue(int * s) {
  printf("Ban dang o muc 4, cac phong da thue la: ");
  for (k = 1; k < l + 1; k++)
    if (*(s+k-1) == 0) printf(" %d,", k);
  printf("\n\n");
}

void xoabonhodem() {
  for(;;)
    if(getchar()=='\n')
        break;
}
