#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	unsigned long long x = 0;
	scanf("%lld",&x);
	printf("%d\n%d",x%10,x%100);
	return 0;
}
