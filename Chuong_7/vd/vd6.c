#include <stdio.h>

#define PI 3.14

// khai bao prototype
float area();

//khai bao bien toan cuc
float frad;

void main(void) {
    printf("Nhap vao ban kinh hinh cau : ");
    scanf("%f", & frad);
    printf("Dien tich hinh cau: %10.3f.\n", area());

}

// ham tinh dien tich hinh cau
float area() {
    return (4 * PI * frad * frad);
}
