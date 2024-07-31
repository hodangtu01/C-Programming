#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    unsigned long long i = 0, n = 0, sum = 0;
    scanf("%lld", &n);
    while(n != 0){
        sum += n % 10;
        n /= 10;
    }
    printf("%lld", sum);
    return 0;
}