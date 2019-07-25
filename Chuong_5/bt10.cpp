#include<stdio.h>

int main()
{
char color;
printf("nhap vao mot ki tu: ");
scanf("%c", &color);
switch(color)
{
	case 'R': case'r': printf("RED"); break;
	case 'G': case'g': printf("GREEN"); break;
	case 'B': case'b': printf("BLUE"); break;
	default: printf("BLACK");
};

}


