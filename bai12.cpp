#include <stdio.h>
// a b
// c d
int matrix(float a, float b,float c,float d){
    return (float)(a*d-c*b);
}
int main(){
    float a1,a2,b1,b2,c1,c2;
    printf("Nhap vao he so a1,b1,c1: ");
    scanf("%f %f %f",&a1,&b1,&c1);
    printf("Nhap vao he so a2,b2,c2: ");
    scanf("%f %f %f",&a2,&b2,&c2);
    float D=matrix(a1,b1,a2,b2);
    float Dx=matrix(c1,b1,c2,b2);
    float Dy=matrix(a1,c1,a2,c2);
    if(D==0 && c1==0 && c2==0) printf("Phuong trinh co vo so nghiem");
    else if (D==0) printf("Phuong trinh vo nghiem");
    else printf("He phuong trinh co nghiem: x=%.1f y=%.1f",Dx/D,Dy/D);
}