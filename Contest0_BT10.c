#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	unsigned int x = 0, y = 0;
	scanf("%d     %d", &x, &y); // scanf khong quan tam dau cach
	printf("%d",x - (x/y)*y);
	return 0;
}
