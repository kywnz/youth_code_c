#include <stdio.h>
#include <string.h>
int main(){
	float diemchuan,mon1,mon2,mon3,doituong,diemthi;
	char khuvuc;
	scanf("%f",&diemchuan);
	scanf("%f %f %f",&mon1,&mon2,&mon3);
	scanf("%s",&khuvuc);
	scanf("%f",&doituong);
	diemthi = mon1 + mon2 + mon3;
	if ( khuvuc == 'A') diemthi += 2;
	else if ( khuvuc == 'B') diemthi += 1;
	else diemthi += 0.5;
	if ( doituong == 1) diemthi += 2.5;
	else if (doituong == 2 ) diemthi += 1.5;
	else diemthi += 1;
	if (diemthi >= diemchuan) printf("DAU!!!");
	else printf("ROT!!![%0.2f]",diemthi);
}