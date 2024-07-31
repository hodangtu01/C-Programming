#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	unsigned long long x = 0, y = 0;
	scanf("%lld %lld",&x, &y);
	printf("%lld", y - x + 1);
	return 0;
}
