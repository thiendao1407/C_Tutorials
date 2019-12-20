#include<stdio.h>
#include<string.h>

void main(void) {
    char s[50];
    int i, j;
    printf("Nhap chuoi ki tu: ");
    gets(s);

    // Remove duplicate white spaces in string
    for(i=0; i<strlen(s)-1; i++)
        if(*(s+i)==' ' && *(s+i+1)==' ') {
            for(j=i; j<strlen(s)-1; j++)
                *(s+j)=*(s+j+1);
            s[strlen(s)-1]='\0';
            i--;
        }

    // Remove leading white space
    if (*s==' ') {
        for(i=0; i<strlen(s); i++)
            *(s+i)=*(s+i+1);
        *(s+strlen(s)-1)='\0';
    }

    // Remove trailing white space
    if(*(s+strlen(s)-1)==' ')
        *(s+strlen(s)-1)='\0';
    printf("The string after removing extra spaces:\n%s\n", s);
}
