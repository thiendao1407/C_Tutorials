#include <stdio.h>
#define IN 1 /* ben trong 1 tu */
#define OUT 0 /* ben ngoai 1 tu */
int main()
{
    int kiemtra=1;
    int idem=0;
    char c;
    while ((c = getchar()) != EOF) {
        if (c!=' ') {
            putchar(c);
            kiemtra=0;
            idem++;
        }
        if (c=='\n')
            kiemtra=1;
        if (c==' ' && kiemtra==0){
            putchar(c);
            kiemtra=1;
            idem++;
        }
    }
    printf("So ki tu la %d", idem);
    return 0;
}
