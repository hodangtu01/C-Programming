#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	unsigned int k2 = 0, k3 = 0, k5 = 0, k6 = 0 , k32 = 0, k256 = 0;
	unsigned long long sum = 0;
	scanf("%d %d %d %d", &k2, &k3, &k5, &k6);
	k256 = fmin(k2,fmin(k5, k6));
	k32  = fmin(k3, k2 - k256);
	sum = k32*32 +k256*256;
	printf("%lld", sum);
	return 0;
}
