#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	unsigned long long x = 0;
	scanf("%lld",&x);
	printf("%lld",(x - (x%1000))/1000);
	return 0;
}
