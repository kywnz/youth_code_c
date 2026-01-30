#include <stdio.h>
int main(){
    int m,d,y;
    printf("Nhap vao ngay thang nam: ");
    scanf("%d %d %d", &d, &m, &y);
    int sum= (int) (30.42*(m-1)) + d;
    if (m==2 || (((y % 4 == 0 && y % 100 != 0) || y % 400 == 0) && m>2)) sum=sum+1;
    if ( m>2 && m<8 ) sum=sum-1;
    printf("Ngay thu %d trong nam",sum);
}