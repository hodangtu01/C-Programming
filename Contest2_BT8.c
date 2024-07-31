#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	long long n = 0, i = 0, numeric = 0;
	scanf("%lld",n);
	for(i = 1; i <= sqrt(n); i++){
			printf("%lld ", i*i);
	}
	return 0;
}
