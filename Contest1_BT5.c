#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int x1 = 0, x2 = 0, y1 = 0, y2 = 0;
	scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
	printf("%.2lf",(double)sqrt(pow(x1 - x2, 2) + pow(y1 - y2,2)));
	return 0;
}
