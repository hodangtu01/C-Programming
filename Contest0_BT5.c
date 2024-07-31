#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	unsigned long n = 0;
    scanf("%ld",&n);
    printf("%.2lf\n%.3lf",sqrt(n),cbrt(n));
	
	return 0;
}
