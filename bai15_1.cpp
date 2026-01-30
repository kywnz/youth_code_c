#include <stdio.h>
int dim(int m){
    switch(m){
        case 4:case 6:case 9:case 11: return 30;break;
        case 2: return 28;break;
        default: return 31; 
    }
}
int main(){
    int sum,m=1,d;
    printf("Nhap vao so thu tu cua ngay trong nam: ");
    scanf("%d",&sum);
//sum= (int) (30.42*(m-1)) + d;
//if (m==2) sum=sum+1;
//if ( 2<m<8 ) sum=sum-1;  tính ngày thứ bao nhiêu trong năm
do{
   if(sum>dim(m)){
        sum-=dim(m);
        m++;
   }
}while(sum>dim(m));d=sum;
printf("Ngay %d thang %d",d,m);
}