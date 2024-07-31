#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	unsigned long long i = 0, n = 0, sum = 0;
	scanf("%lld", &n);
	for(i = 1; i <= n; i++){
		sum += i*i*i;
	}
	printf("%lld",sum);
	return 0;
}
