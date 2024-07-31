#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	unsigned long long i = 0, n = 0, sum = 0;
	scanf("%lld", &n);
	for(i = 1; i <= sqrt(n); i += 1 ){
		if(n % i == 0){
			sum += i;
			if(i !=  n /i){
				sum += n / i; // uoc con lai
			}
		}
	}
	printf("%lld", sum);
	return 0;
}
