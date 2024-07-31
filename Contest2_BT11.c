#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int n = 0, sum = 0, i = 0;
	scanf("%d", &n);
	for(i = 1; i <= n; i += 1){
		sum += pow(-1,i)*i;
	}
	printf("%d", sum);
	return 0;
}
