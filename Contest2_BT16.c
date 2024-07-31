#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	unsigned long long count = 0, i = 0;
	unsigned long long n = 0;
	scanf("%lld", &n);
	if(n == 0){
		printf("1\n");
		return 0;
	}
	while(n != 0){
		++count;
		n /= 10;
	}
	printf("%lld", count);
	return 0;
}
