#include <stdio.h>
#include <math.h>
int main(){
  int iy,dow,d,m,y,a,month,top,counttoendl = 1,countloop = 0;
  scanf("%d",&iy);
  for ( month = 1; month <= 12; month++ ){
    printf("Thang %d\n",month);
    switch(month){
      case 2: top = 28 + (( iy % 4 == 0 && iy % 100 != 0 ) || iy % 400 == 0);break;
      case 4:case 6: case 9:case 11: top = 30;break;
      default: top = 31;break;
    }
    printf("  S  M  T  W  T  F  S\n");
      a = ( 14 - month) / 12;
      y = iy - a;
      m = month + 12 * a - 2;
      dow = ( 1 + y + y / 4 - y / 100 + y / 400 + ( 31 * m ) / 12 ) % 7; // dow1 =5 dow2 =8 dow3=11
      /*if (!dow) printf("  ");
      else{
        for (int i = 1;i <= dow + 2 * (dow +1) ; i++) printf(" "); 
      }
    for (int i = 0; i < top; i++){
      if(i+1<9) printf("%d  ",i+1);
      else printf("%d ",i+1);
      countloop++;
      if((dow + i+1) % 7 == 0 && counttoendl == 1){
        counttoendl++;
        if(i+1<9){ printf("\n"); printf("  "); }
        else { printf("\n"); printf(" ");}
      }
      else if (countloop % 7 == 0 && counttoendl != 1){
        countloop = 0; 
        if(i+1<9){ printf("\n"); printf("  "); }
        else { printf("\n"); printf(" ");}
      }
      counttoendl =1 ;
    }
    printf("\n");
  }*/
    for(d = 0; d < dow; d++) printf("   ");
    for(int d = 1; d <= top; d++){
      printf("%3d",d);
      if ((dow + d) % 7 ==0) putchar('\n');
    }
    putchar('\n');
  } 
}