#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	unsigned int r = 0;
	scanf("%d",&r);
	printf("%.4lf %.4lf",(double)(2*3.14*r), (double)(3.14*r*r));
	return 0;
}
