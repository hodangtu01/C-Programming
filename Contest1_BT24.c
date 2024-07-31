#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	unsigned int d1 = 0, d2 = 0, d3 = 0, kc1 = 0, kc2 = 0, kc3 = 0, kc4 = 0, kc_min = 0;
	scanf("%d %d %d", &d1, &d2, &d3);
	kc1 = d1 + d2 + d3;
	kc2 = 2*(d1 + d2);
	kc3 = 2*(d1 + d3);
	kc4 = 2*(d2 + d3);
	kc_min = fmin((fmin(kc1, kc2)),(fmin(kc3, kc4)));
	printf("%d", kc_min);
	return 0;
}
