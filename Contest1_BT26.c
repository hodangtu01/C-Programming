#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    unsigned long long n1 = 0, n2 = 0, n3 = 0, n4 = 0, min = 0, max = 0;
    scanf("%lld %lld %lld %lld", &n1, &n2, &n3, &n4); // 4 so nguyen
//    min = max = n1;
//    min = fmin(n1,n2); 		// fmin fmax kieu float double
//    min = fmin(min,n3);
//    min = fmin(min,n4);
//    max = fmax(n1,n2);
//    max = fmax(max,n3);
//    max = fmax(max,n4);
	min = max = n1;
	if(n2 < min) min = n2;
	if(n3 < min) min = n3;
	if(n4 < min) min = n4;
	if(n2 > max) max = n2;
	if(n3 > max) max = n3;
	if(n4 > max) max = n4;
    printf("%lld %lld", max, min);
    return 0;
}

