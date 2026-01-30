// nhap vao dien tich tinh the tich mat cau
#include <stdio.h>
#include <math.h>
int main()
{
    float S,V,R;//S=4pi*R*R 
    printf("Nhap vao dien tich mat cau: ");
    scanf("%f",&S);
    R=S/(4*3.14159);
    V=(4/3)*3.14159*R*R*R;
    printf("The tich hinh cau la: %f",V);
}