#include <stdio.h>
int prime(long long n){
	if(n > 1){
		for(long long i = 2; i < n; ++i){
			if ( n % i == 0) return 0;
		}
		return 1;
	}
	else return 0;
}
int main(){
	long long int n,cnt = 0;
	scanf("%lld",&n);
	if(prime(n)) printf("%lld",n);
	else{
		for(long long i = 2; i < n ; ++i){
			if(prime(i)){
				if ( n % i ==0){
					++cnt;
					if(cnt == 1) printf("%lld",i);
					else printf(" * %lld",i);
				}
			}
		}
	}
}