#include <stdio.h>
int dom(int m,int y){
	switch(m){
      	case 2:return 28 + (( y % 4 == 0 && y % 100 != 0 ) || y % 400 == 0);break;
      	case 4:case 6: case 9:case 11: return 30;break;
      	default: return 31;break;
    }
}
void xepnguoi(int sumtop){
	switch(sumtop){
		case 1: printf("[A]");break;
		case 2: printf("[B]");break;
		case 3: printf("[C]");break;
		case 4: printf("[D]");break;
		case 5: printf("[E]");break;
	}
}
int main(){
	int year,fdoy,imonth,sumtop=0,totalsunday=0,dow;
	scanf("%d",&year);
	scanf("%d",&fdoy);
	scanf("%d",&imonth);
	int temp_dow = fdoy;
	for(int i=1;i<imonth;i++) fdoy = (fdoy + dom(i,year)) % 7;
	printf("     SUN     MON     TUE     WEN     THU     FRI     SAT\n");
	for (int i = 0; i < fdoy; i++) printf("        ");
	for(int month = 1; month < imonth; month++) sumtop+=dom(month,year);
	for(int month = 1; month < imonth; month++){
		if( dom(month,year) == 31 && (temp_dow == 0 || temp_dow == 5 || temp_dow == 6)) totalsunday+=5;
        else if ( dom(month,year) == 30 && (temp_dow == 0 || temp_dow == 6)) totalsunday+=5;
        else if ( dom(month,year) == 29 &&( temp_dow == 0 )) totalsunday+=5;
        else totalsunday+=4;
        temp_dow = (temp_dow + dom(month, year)) % 7;
	}
	sumtop -= totalsunday;       
    sumtop = (sumtop % 5) + 1;
	for(int i =1; i <= dom(imonth,year); i++){
		printf("%5d",i);
		dow= (fdoy + i - 1) % 7;
		if(dow == 0 ) printf("[ ]");
		else{
			xepnguoi(sumtop);
			if( (i + fdoy) % 7 == 0) putchar('\n');
			sumtop++; if(sumtop > 5 ) sumtop = 1;
		}
	}
}
