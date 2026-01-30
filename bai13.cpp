/*Viết chương trình nhập vào ngày, tháng, năm. Kiểm tra ngày và tháng nhập
có hợp lệ hay không. Tính thứ trong tuần của ngày đó.*/
#include <stdio.h>
#include <math.h>
int main(){
    int dd,mm,yyyy;
    printf("Nhap vao ngay thang nam:");
    scanf("%d %d %d",&dd,&mm,&yyyy);
    while (dd<=0 || dd>=32 || mm>=13 || mm<=0){
        printf("Nhap lai vao ngay thang nam:");
        scanf("%d %d %d",&dd,&mm,&yyyy);
    }
    printf("Hop le\n");
    double a=floor((double)(14-mm)/12);int y=yyyy-a;int m=mm+12*a-2;
    int dayofweek=(dd + y + y/4 - y/100 + y/400 + (31*m)/12)%7;
    switch(dayofweek){
        case 0:printf("Chua nhat");break;
        case 1:printf("Thu hai");break;
        case 2:printf("Thu ba");break;
        case 3:printf("Thu tu");break;
        case 4:printf("Thu nam");break;
        case 5:printf("Thu sau");break;
        case 6:printf("Thu bay");break;
    }
 
}
