#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	unsigned long long a= 0, b = 0, k = 0, trai = 0, phai = 0;
	scanf("%lld %lld %lld", &a, &b, &k);
	if(k % 2 != 0){
		trai = k / 2;
		phai = trai + 1;	
	}
	else{
		trai = phai = k / 2;
	}
	printf("%lld", phai * a - trai * b );
	return 0;
}
