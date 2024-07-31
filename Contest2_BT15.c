#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	unsigned int i = 0, n = 0;
	unsigned long long factorial = 1;
	scanf("%d", &n);
	for(i = 1; i <= n; i += 1){
		factorial *= (long long)i;
	}
	printf("%lld",factorial);
	return 0;
}
