#include <stdio.h>
int fibo(int n);
int main() {
	long long n, output;
	long long result1=4;
	long long result2=6;
    
	scanf("%lld", &n);
	if(n==1)	output = 4;
	else if(n==2)	output = 6;
	else{

		for(int i=0; i<n-2; i++){
			output = result1 + result2;
			result1 = result2;
			result2 = output;
		}
	}
	printf("%lld", output);
	return 0;
}
