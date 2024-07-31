#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	unsigned int x = 0, y = 0, z = 0, t = 0;
	scanf("%d %d %d %d", &x, &y, &z, &t);
	printf("%d\n%d\n%d\n%d",(int)fmax(x,y),(int)fmin(z,t),(int)fmax(x,fmax(y,z)),(int)fmin(fmin(x,y),fmin(z,t)));
	return 0;
}
