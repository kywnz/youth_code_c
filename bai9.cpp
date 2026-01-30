/*Viết chương trình nhập vào số x chỉ số đo của một góc, tính bằng phút. Cho 
biết nó thuộc góc vuông thứ bao nhiêu của vòng tròn lượng giác. 
Tính cos(x), dùng hàm do math.h cung cấp.
60'=1 độ và 1 độ = pi/180 rad*/
#include <stdio.h>
#include <math.h>
#define PI 3.14159265358979323846
int main()
{
    float x_rad,x_phut,x_rad_rut_gon;
    printf("Nhap vao so do goc (phut) : ");
    scanf("%f",&x_phut);
    x_rad=(x_phut/60.0)*(PI/180.0);
    x_rad_rut_gon=fmod(x_rad,2*PI);
    if (x_rad_rut_gon>=0 && x_rad_rut_gon <PI/2.0)
        printf("%f thuoc goc phan tu thu nhat\n",x_phut);
    else if (x_rad_rut_gon>=PI/2.0 && x_rad_rut_gon <PI)
        printf("%f thuoc goc phan tu thu hai\n",x_phut);
    else if (x_rad_rut_gon>=PI && x_rad_rut_gon <(3*PI)/2.0)
        printf("%f thuoc goc phan tu thu ba\n",x_phut);
    else   
        printf("%f thuoc goc phan tu thu tu\n",x_phut);
    printf("cos(%f)=%f",x_phut,cos(x_rad));
}