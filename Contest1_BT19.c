#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	unsigned long long m = 0, n = 0;
	scanf("%lld %lld", &m, &n);
	if(m % 2 == 0){
		printf("%lld", m/2 * n);
	}
	else{ // Viec cot n chan hay le nhu nhau ve cach tinh trong truong hop hang m le
		printf("%lld", m/2 * n + n/2);	
	}
	 
	return 0;
}
