#include <stdio.h>
int main(){
	unsigned long a,b,a0,b0,tmp;
	scanf("%lu %lu",&a,&b); a0 = a; b0 = b;
	do{
		tmp = b;
		b = a % b;
		a = tmp;
	}while( b > 0);
	printf("gcd(a,b) = %lu\n",a);
	printf("lcm(a,b) = %lu",(a0 * b0)/(a));
}