//sắp xếp 3 số tăng dần 
#include <stdio.h>
int main()
{
    int a,b,c,s;
    printf("Nhap vao so nguyen a: ");
    scanf("%d",&a);
    printf("Nhap vao so nguyen b: ");
    scanf("%d",&b);
    printf("Nhap vao so nguyen c: ");
    scanf("%d",&c);
    if (a>b)
    {
        s=a;a=b;b=s;
    }
     if (a>c)
    {
        s=a;a=c;c=s;
    }
     if (b>c)
    {
        s=b;b=c;c=s;
    }
    printf("--> Da sap xep: %d %d %d",a,b,c);

}