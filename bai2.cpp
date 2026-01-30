//Nhập vào tọa độ 2 điểm A(xA, yA) và B(xB, yB). Tính khoảng cách AB. 
#include <stdio.h>
#include <math.h>
int main()
{
    float xA,yA,xB,yB,distance;
    printf("Nhap vao toa do diem A(xA;yA): ");
    scanf("%f %f",&xA,&yA);
    printf("Nhap vao toa do diem B(xB;yB): ");
    scanf("%f %f",&xB,&yB);
    distance=sqrt(pow(xB-xA,2)+pow(yB-yA,2));
    printf("Do dai AB= %f",distance);
}



