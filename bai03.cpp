//Viết chương trình nhập vào tọa độ (xC, yC) là tâm của một đường tròn, và R 
//là bán kính của đường tròn đó. Nhập vào tọa độ (xM, yM) của điểm M. Xác định điểm 
//M nằm trong, nằm trên hay nằm ngoài đường tròn. 
//Khi làm việc với số thực (float), phép so sánh == không chính xác tuyệt đối do sai số làm tròn.
// Nên dùng ngưỡng sai số nhỏ (epsilon) để so sánh.
#include <stdio.h>
#include <math.h>
int main()
{
    float xC,yC,R,xM,yM,distance;
    const float epsilon = 1e-6;
    printf("Nhap vao toa do tam duong tron C(xC;yC) va ban kinh duong tron: ");
    scanf("%f %f %f",&xC,&yC,&R);
    printf("Nhap vao toa do diem M(xM;yM): ");
    scanf("%f %f",&xM,&yM);
    distance=sqrt(pow(xC-xM,2)+pow(yC-yM,2));
    if(distance<R-epsilon)
        printf("Diem M nam trong duong tron");
    else if(fabs(distance-R)<=epsilon)
        printf("Diem M nam tren duong tron");
    else
        printf("Diem M nam ngoai duong tron");
}