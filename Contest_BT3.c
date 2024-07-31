#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	unsigned int x,y,z,t;
	scanf("%d %d %d %d",&x, &y, &z, &t);
    printf("%d,%d,%d,%d\n",y, z, x, t);
    printf("%lld\n", (long long)x+y+z+t);
    printf("%lld\n", x-y+(long long)z*t);
	return 0;
}
