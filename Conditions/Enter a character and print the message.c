#include<stdio.h>

int main(){
    char color;
    printf("Please enter a character: ");
    scanf("%c", &color);
    switch(color){
        case 'R': case'r': printf("RED"); break;
        case 'G': case'g': printf("GREEN"); break;
        case 'B': case'b': printf("BLUE"); break;
        default: printf("BLACK");
    }
    return 0;
}


