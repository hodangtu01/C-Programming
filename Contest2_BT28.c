#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    unsigned int n = 0, gt = 1;
    unsigned long long sum = 0;
    scanf("%d", &n);
    for(int i = 1; i <= n; i += 1){
        // sum += gt;
        gt *= i;
        sum += gt;
    }
    printf("%lld", sum);
    return 0;
}
