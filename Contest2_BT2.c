#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	unsigned long long sum = 0, n = 0, i = 0;
	scanf("%lld", &n);
	for(i = 1; i <= n; i += 1){
		sum += i * i;
	}
	printf("%lld",sum);
	return 0;
}
