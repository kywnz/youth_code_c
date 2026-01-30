#include <stdio.h>
int main(){
	long long int n,j = 1,sum = 0;
	scanf("%lli",&n);
	while (j < n){
		for (int i = 1; i < j; ++i){
			if(j % i == 0) sum += i;
		}
		if( j == sum) printf("%lli ",j);
		sum = 0;
		++j;
	}
}