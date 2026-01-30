/*Viết chương trình giải phương trình bậc 2: ax2 + bx + c = 0 (a, b, c nhập từ 
bàn phím). Xét tất cả các trường hợp có thể. */
#include <stdio.h>
#include <math.h>
int main()
{
    float a,b,c,x,delta,x1,x2;
    printf("Nhap vao so nguyen a: ");
    scanf("%f",&a);
    printf("Nhap vao so nguyen b: ");
    scanf("%f",&b);
    printf("Nhap vao so nguyen c: ");
    scanf("%f",&c);
    delta=b*b-4*a*c;
    if(a==0)
    {
        if(b==0)
        {
            if(c==0)
                printf("Phuong trinh co vo so nghiem");
            else
                printf("Phuong trinh vo nghiem");
        }
        else
        {
            x=-b/a;
            printf("Phuong trinh co 1 nghiem x= %f",x);
        }
    }
    else
    {
        if(delta>0)
        {
            x1=(-b+sqrt(delta))/(2*a);
            x2=(-b-sqrt(delta))/(2*a);
            printf("Phuong trinh co 2 nghiem phan biet:x1= %f ; x2= %f",x1,x2);
        }
        else if(delta==0)
        {
            x1=-b/(2*a);
            printf("Phuong trinh co nghiem kep: x1=x2= %f",x1);
        }
        else
            printf("Phuong trinh vo nghiem");

    }
}