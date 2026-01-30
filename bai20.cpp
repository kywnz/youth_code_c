#include <stdio.h>
int tinhtiendien(int n){
	if ( n < 100 ) return n * 500; // từ 0 đến 100 kW
	else{
		// từ 100 đến 250 kW
		if ( n < 250) return (n - 100) * 800 + 100 * 500;
		else{
			// từ 250 đến 350 kW
			if( n < 350) return (n - 250) * 1000 + 150 * 800  + 100 * 500;
			else return (n - 350 ) * 1500 + 100 * 1000 + 150 * 800  + 100 * 500;
		}
	}
}
int main(){
	int sodien;
	scanf("%d",&sodien);
	printf("%d",tinhtiendien(sodien));
}