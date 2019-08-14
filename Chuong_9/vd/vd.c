#include<stdio.h>

void main(void){
int i[4]={3,5,13,9};
for(int j=0;j<4;j++){
    printf("%d %d\n",j, i[j]);
    i[j++]=i[j]+5;
    printf("%d %d\n",j, i[j]);
}
}
