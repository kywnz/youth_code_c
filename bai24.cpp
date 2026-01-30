#include <stdio.h>
#include <math.h>
int main(){
	unsigned long n,i,sum = 0,t = 0;
	scanf("%lu",&n);
	for (i = 1; i < n; ++i){
		if ( (float)n / pow(10,i) < 1) break;
	}
	printf("So co %lu chu so\n",i);
	printf("Chu so cuoi cung la %lu\n", (unsigned long)n % 10);
	printf("Chu so dau tien la %lu\n", (unsigned long)n / (unsigned long)pow(10,i-1) ) ;
	unsigned long tmp = n;
	for (i = 1; i <= n; ++i){
		sum += tmp % 10;
		tmp /= 10;
	}
	printf("Tong cac chu so: %lu\n",sum);
	do{
		t = t * 10 + n % 10;
		n=n / 10;
	}while (n > 0);
	printf("So dao nguoc %lu",t);
}