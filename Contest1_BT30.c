#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	unsigned long long n = 0;
	scanf("%lld", &n);
	printf("%lld", n*(n-1)/2);
	return 0;
}
