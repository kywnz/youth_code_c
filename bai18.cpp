#include <stdio.h>
int main(){
	unsigned long input_hour,ngay,tuan;
	scanf("%lu",&input_hour);
	tuan = input_hour / (7 * 24 ); input_hour -= tuan * 7 * 24;
	ngay = input_hour / 24; input_hour -= ngay * 24;
	printf("%lu tuan,%lu ngay,%lu gio",tuan,ngay,input_hour);
}