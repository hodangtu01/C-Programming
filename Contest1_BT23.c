#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	unsigned int n = 0, m = 0, min = 0, max = 0, step = 0;
	scanf("%d %d", &n, &m);
	max = n;
	if(n % 2 == 0){
		min = n / 2;
	} 
	else{
		min = n/2 + 1;
	}
	
	if(step <= max && min % m == 0 && n >= m) {
		printf("%d",min);
	}
	else if(step <= max && min % m != 0 && n >= m){
		printf("%d",(min/m + 1)*m);
	}
	else{
		printf("-1");
	}
	return 0;
}
