#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	unsigned int x = 0,y = 0; 
	scanf("%d %d", &x, &y);
	printf("%lld", (long long)pow(x,y)); //ep kieu dinh dang cho ham pow tuong ung voi kieu du lieu bieu thuc
	// ham pow tra ve kieu double
	return 0;
}
