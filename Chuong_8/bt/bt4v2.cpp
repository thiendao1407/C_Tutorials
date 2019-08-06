// Xoa ki tu trang thua
#include<stdio.h>
#include<string.h>

int main() {

    char full_name[50];
    char clear_full_name[50];   // tao 1 mang moi de luu ten chuan
    int fn_index = 0;  // full_name index
    int i = 0;
    printf("Nhap ten ban: ");
    gets(full_name);
   // Doan code nay de xoa khoang trang o dau
    for (i; i < strlen(full_name); i++) {
        if (full_name[i] != ' ')
            break;
    }

    for (i; i < strlen(full_name); i++) {
        if (full_name[i] != ' '){
            clear_full_name[fn_index] = full_name[i];
            fn_index++;
        }  else if (full_name[i] == ' ' && full_name[i-1] != ' ') {
            clear_full_name[fn_index] = full_name[i];
            fn_index++;
        }
    }

    clear_full_name[fn_index] = '\0';
    if(clear_full_name[fn_index-1]==' ')
        clear_full_name[fn_index-1] = '\0';
    printf("Chuoi sau khi chuan hoa: %s,%d", clear_full_name, strlen(clear_full_name));
}
