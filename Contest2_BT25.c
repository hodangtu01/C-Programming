#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n = 0;
    scanf("%d", &n);
    long long gt = 1;
    double sum = 0;
    for(int i = 1; i <= n; i++){
        sum += (double)1/gt;
        gt *= i;
    }
    
    printf("%.4lf\n", sum);
    return 0;
}
