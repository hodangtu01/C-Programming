#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    unsigned int n = 0, n_1 = 0;
    unsigned long long sum = 0;
    scanf("%d", &n);
    for(int i = 1; i <= n; i += 1){
        scanf("%d", &n_1);
        if(n_1 % 2 == 0) sum += n_1;
    }
    printf("%lld", sum);
    return 0;
}