#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	unsigned int a = 0, b = 0, c = 0, d = 0, cong_boi = 0;
	scanf("%d %d %d %d", &a, &b, &c, &d);
	if(b % a == 0){
		cong_boi = b / a;
		if(b * cong_boi == c && c*cong_boi == d){
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
