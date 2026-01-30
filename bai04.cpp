/* Viết chương trình nhập vào ba số thực là ba cạnh của một tam giác. Kiểm tra 
ba cạnh được nhập có hợp lệ hay không. Nếu hợp lệ, hãy cho biết loại tam giác và 
tính diện tích tam giác đó. */
#include <stdio.h>
#include <math.h>
#define PI 3.14159265358979323846
int main()
{
    float a,b,c,p,S,goc_alpha;  //goc alpha la goc o doi cua canh BC
    const float epsilon=1e-6;
    printf("Nhap vao 3 canh cua tam giac tuong ung 3 canh a,b,c: ");
    scanf("%f %f %f",&a,&b,&c);
    goc_alpha=acos((b*b+c*c-a*a)/(2*b*c));  //tinh theo radian
    p=(a+b+c)/2;
    S=sqrt(p*(p-a)*(p-b)*(p-c));
    if (a+b>c && b+c>a && a+c>b)
        {
            if(goc_alpha<(PI/2 - epsilon))
            {
                printf("Tam giac ABC la tam giac nhon\n");
                printf("Dien tich tam giac ABC %f",S);
            }
            else if (fabs(goc_alpha-PI/2)<=epsilon)
            {
                printf("Tam giac ABC la tam giac vuong\n"); 
                printf("Dien tich tam giac ABC %f",S);
            }
            else 
            {
                printf("Tam giac ABC la tam giac tu\n");
                printf("Dien tich tam giac ABC %f",S);
            }
        }
}