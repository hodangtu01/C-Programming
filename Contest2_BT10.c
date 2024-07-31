#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	unsigned int n =0, i = 0, num = 0, check = 0;
	scanf("%d", &n);
	for(i = 1; i <= n; i ++){
		scanf("%d", &num);
		if(num == 2022){
			check = 1;
		}
	}
	if(check == 1) printf("YES\n");
	else		   printf("NO\n");
	return 0;
}
