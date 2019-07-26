#include <stdio.h>


#define PI 3.14 
#define AREA_CIRCLE(frad) (4*PI*frad*frad)



//khai bao bien toan cuc
float frad;

int main()
{
printf("Nhap vao ban kinh hinh cau : ");
scanf("%f", &frad);
printf("Dien tich hinh cau: %10.3f.\n", AREA_CIRCLE(frad));

}


