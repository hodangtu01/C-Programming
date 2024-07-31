#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	unsigned long long n = 0, d = 0, u1 = 0, un = 0, sum = 0;
    scanf("%lld %lld %lld", &n, &u1, &d);
    un = u1 + (n-1)*d;
    sum = n*(u1 + un) / 2;
    printf("%lld",sum);
	return 0;
}
