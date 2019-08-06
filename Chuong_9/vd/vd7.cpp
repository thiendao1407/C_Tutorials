/* Nhap danh sach ten va sap xep theo thu tu tang dan*/
#include<stdio.h>
#include<string.h>

#define MAXNUM 5
#define MAXLEN 10

main() {
  char cname[MAXNUM][MAXLEN]; //mang chuoi
  char * cptr[MAXNUM]; //mang con tro tro den chuoi
  char * ctemp;
  int i, ij, icount = 0;
  //nhap danh sach ten
  while (icount < MAXNUM) {
    printf("Nhap vao ten nguoi thu %d: ", icount + 1);
    gets(cname[icount]);
    cptr[icount] = cname[icount]; //con tro den ten
    icount++;
  }

  for (i = 0; i < icount - 1; i++)
    for (ij = i + 1; ij < icount; ij++)
      if (strcmp(cptr[i], cptr[ij]) > 0) {
        ctemp = cptr[i];
        cptr[i] = cptr[ij];
        cptr[ij] = ctemp;
      }
  //In danh sach da sap xep
  printf("Danh sach sau khi sap xep:\n");
  for (i = 0; i < icount; i++)
    printf("Ten nguoi thu %d : %s\n", i + 1, cptr[i]);
}
