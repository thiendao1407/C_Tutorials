#include <stdio.h>
#define IN 1
#define OUT 0
int main()
{
    int icheck=1;
    int icount=0;
    char c;
    while ((c = getchar()) != EOF) {
        if (c!=' ') {
            putchar(c);
            icheck=0;
            icount++;
        }
        if (c=='\n')
            icheck=1;
        if (c==' ' && icheck==0){
            putchar(c);
            icheck=1;
            icount++;
        }
    }
    printf("The number of characters is %d", icount);
    return 0;
}
