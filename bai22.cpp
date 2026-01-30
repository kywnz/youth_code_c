#include <stdio.h>
int main(){
	long long int n,count = 0,sum = 0;
	scanf("%lli",&n);
	printf("Cac uoc so: ");
	for (long long int i = 1; i <= n; ++i){
		if( n % i == 0){
			sum += i; ++count;
			printf("%lli ",i);
		}
	}
		putchar('\n');
		printf("Co %lli uoc so, tong la %lli",count,sum);
	
}