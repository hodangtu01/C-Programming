#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	unsigned int n = 0, i = 0;
	unsigned long long tich = 1;
	scanf("%d", &n);
	for(i = 1; i <= n; i++){
		if(n % i == 0){
			tich = (long long)tich*i;
		}
	}
	printf("%lld",tich);
	return 0;
}
