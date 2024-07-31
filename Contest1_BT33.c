#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	unsigned int a = 0, b = 0, c = 0, n = 0, tong = 0, r = 0;
	scanf("%d %d %d %d", &a, &b, &c, &n);
	tong = a + b + c + n;
	if(tong % 3 == 0){
		r = tong / 3;
		if(r >= a && r >= b && r >= c){
			printf("YES\n");
		}
		else{
			printf("NO\n");
		}
	}
	else{
		printf("NO\n");
	}
	return 0;
}
