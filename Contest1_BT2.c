#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	long long a = 0, b = 0, c = 0;
	scanf("%lld %lld %lld", &a, &b, &c);
	printf("%lld", a*(b+c)+b*(a+c));
	return 0;
}
