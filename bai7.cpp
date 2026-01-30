/* Viết chương trình giải phương trình bậc 1: ax + b = 0 (a, b nhập từ bàn phím). 
Xét tất cả các trường hợp có thể*/
#include <stdio.h>
#include <math.h>
int main()
{
    float a,b,x;
    const float epsilon=1e-6;
    printf("Nhap vao so nguyen a: ");
    scanf("%f",&a);
    printf("Nhap vao so nguyen b: ");
    scanf("%f",&b);
    if(fabs(a)<epsilon)
    {
        if(fabs(b)<epsilon)
            printf("Phuong trinh co vo so nghiem");
        else 
            printf("Phuong trinh vo nghiem");
    }
    else
    {
        x=-b/a;
        printf("Phuong trinh da nhap co nghiem x=%f",x);


    }
}