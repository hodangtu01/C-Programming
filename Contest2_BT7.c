#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	unsigned int i = 0, n = 0, r =0, count = 0;
	scanf("%d", &n);
	for(i = 1; i <= n; i +=1){
		if(n % i == 0){
			count ++;
			}
		}
		printf("%d\n",count);
	for(i = 1; i <= n; i +=1){
		if(n % i == 0){
			printf("%d ",i);
		}
	}
	return 0;
}
