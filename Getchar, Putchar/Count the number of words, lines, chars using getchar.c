#include <stdio.h>
#define IN 1
#define OUT 0
int main()
{
    int c, nline, nword, nchar, state;  // Ctrl + Z to exit
    state = OUT;
    nline = nword = nchar = 0;
    while ((c = getchar()) != EOF) {
        ++nchar;
        if (c == '\n')
            ++nline;
        if (c == ' ' || c == '\n' || c == '\t')
            state = OUT;
        else if (state == OUT) {
            state = IN;
            ++nword;
        }
    }
    printf("line\t word\t char\n%d\t %d\t %d\n", nline, nword, nchar);
    return 0;
}
