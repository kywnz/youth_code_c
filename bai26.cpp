#include <stdio.h>
#include <stdlib.h>
int main(){
	long long tu,mau,tu0,mau0;
	scanf("%lld %lld",&tu,&mau);
	tu0 = tu; mau0 = mau;
	while ( llabs(mau) > 0){
		unsigned long tmp = llabs(mau);
		mau = llabs(tu) % llabs(mau);
		tu = llabs(tmp);
	}
	if(mau0 < 0 && tu0 > 0) tu0 = -tu0;
	if( llabs(mau0/tu) == 1) printf("%lld",tu0 / tu);
	else printf("%lld %lld",tu0 / tu, mau0 / tu);

}