#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    unsigned long long  a = 0, b = 0, min = 0;
    unsigned long long mul = 1;
    scanf("%lld %lld", &a, &b);
    min = fmin(a,b);
    for(int i = 1; i <= min; i += 1){
        mul *= i;
    }
    printf("%lld", mul);
    return 0;
}