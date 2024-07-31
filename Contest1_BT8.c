#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	long long a = 0, b = 0;
	scanf("%lld %lld", &a, &b);
	if(b == 0){
		printf("%lld\n%lld\n%lld\nINVALID", a+b, a - b, a*b);
	}
	else{
		printf("%lld\n%lld\n%lld\n%.4lf",a+b, a - b, a*b,(double)a/b);
	}
	return 0;
}
