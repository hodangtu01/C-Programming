#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	unsigned long long x = 0, y = 0;
	scanf("%lld %lld",&x, &y);
	printf("%lld",5*x + 2*y + x*y);
	return 0;
}
