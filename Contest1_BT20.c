#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	unsigned long long n = 0, m = 0, a = 0, ngang = 0, doc = 0;
	scanf("%lld %lld %lld", &n, &m, &a);
//	if(n % a == 0 && m % a == 0){
//		doc = n / a;
//		ngang = m / a;
//	}
//	else if(n % a == 0 && m % a != 0){
//		doc = n / a;
//		ngang = m/a + 1;
//	}
//	else if(n % a != 0 && m % a != 0){
//		doc = n / a + 1;
//		ngang = m / a + 1;
//	}
//	else {
//		doc = n / a + 1;
//		ngang = m / a;
//	}
	if(n % a == 0){
		doc = n / a;
	}
	else{
		doc = n /a + 1;
	}
	if(m % a == 0){
		ngang = m / a;
	}
	else{
		ngang = m / a + 1;
	}
	printf("%lld", doc * ngang);
	return 0;
}
