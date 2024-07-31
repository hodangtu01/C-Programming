#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	long long x = 0;
	scanf("%lld",&x);
	printf("%lld",x*x*x + 3*x*x + x + 1);
	return 0;
}
