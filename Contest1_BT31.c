#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	unsigned int a1 = 0, a2 = 0, a3 = 0, b1 = 0, b2 = 0, b3 = 0, n = 0, sum_cup = 0, sum_huychuong = 0, ke_hc = 0, ke_cup = 0;
	scanf("%d %d %d %d %d %d %d", &a1, &a2, &a3, &b1, &b2, &b3, &n);
	sum_cup = a1 + a2 + a3;
	sum_huychuong = b1 + b2 + b3;
	if(sum_cup % 5 == 0){
		ke_cup = sum_cup / 5;
	}
	else{
		ke_cup = sum_cup / 5 +1;
	}
	if(sum_huychuong % 10 == 0){
		ke_hc = sum_huychuong / 10;
	}
	else{
		ke_hc = sum_huychuong / 10 + 1;
	}
	if(ke_cup + ke_hc <= n){
		printf("YES\n");
	}
	else{
		printf("NO\n");
	}
	return 0;
}
