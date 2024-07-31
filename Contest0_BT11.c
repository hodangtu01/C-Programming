#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	unsigned int n = 0; // yeu cau dau vao tu 1 den 10^9
	scanf("%d",&n);
	printf("%d\n\n%lld\n\n%d\n\n%.3lf",(2*n),(long long)10*n,(n/2),(double)n/2);
	return 0;
}
