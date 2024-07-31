#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	unsigned long long sum = 0, i = 0, n = 0; 
	scanf("%lld", &n);
	
	for(i = 0; i < n; i++){
	sum = n * (n+1) / 2;
	}
	printf("%lld",sum);
	return 0;
}
