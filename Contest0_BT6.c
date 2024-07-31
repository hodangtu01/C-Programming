#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	double x = 0;
	scanf("%lf", &x);
	printf("%d\n%d\n%d", (int)(floor(x)),(int)(ceil(x)),(int)(round(x)));
	return 0;
}
