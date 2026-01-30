#include <stdio.h>
#include <math.h>
struct thoidiem{
	int h,min,s;
};
int main(){
 	struct thoidiem td[3];
	scanf("%d %d %d",&td[1].h,&td[1].min,&td[1].s);
	scanf("%d %d %d",&td[2].h,&td[2].min,&td[2].s);
	int time1 = td[1].h * 60 * 60 + td[1].min * 60 + td[1].s;
	int time2 = td[2].h * 60 * 60 + td[2].min * 60 + td[2].s;
	int time = abs ( time1 - time2);
	float h,min,s,temp;
	h = (float) time / 3600.0 ;
	temp = h - floor(h);
	min = temp * 60 ;
	temp = min - floor(min);
	s = temp * 60;
	printf("Hieu thoi gian: %d gio %d phut  %d giay ",(int)floor(h),(int)floor(min),(int)floor(s));
}