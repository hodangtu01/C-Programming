#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	unsigned long long n = 0, S = 0;
	scanf("%lld %lld", &n, &S);
	if(S % n != 0){
		printf("%lld", S/n + 1);
	}
	else{
		printf("%lld", S/n);
	}
	return 0;
}
