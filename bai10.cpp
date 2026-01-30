#include <stdio.h>
void SIN_check()
{
    char SIN[20];//mảng bắt đầu từ 0-->8
    int A[9];
    while (1)
    {
        int s2=0;int s1=0;int i=1;int j=1;
        printf("Nhap vao so SIN:");
        scanf("%s",SIN); 
        if(SIN[0]=='0')
            break;
        else
        {
           for (int i=0;i<=8;i++)
           {
            A[i]=SIN[i]-'0';
           }
            s1=A[0]+A[2]+A[4]+A[6];// 1 3 5 7 (trai qua)
            A[1]=A[1]*2;i=A[1]%10,j=A[1]/10;s2=s2+i+j; // 2 4 6 8
            A[3]=A[3]*2;i=A[3]%10,j=A[3]/10;s2=s2+i+j;
            A[5]=A[5]*2;i=A[5]%10,j=A[5]/10;s2=s2+i+j;
            A[7]=A[7]*2;i=A[7]%10,j=A[7]/10;s2=s2+i+j;
            if ((s1+s2+A[8])%10==0)
                printf("Ma so SIN hop le!\n");
            else    
                printf("Ma so SIN khong hop le\n");
        }
    }

}
int main()
{
    SIN_check();
    return 0;
}