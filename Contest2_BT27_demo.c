#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    unsigned long long n = 0, tong = 0;
    scanf("%lld", &n);
    while(n >= 10){
        while(n){
            tong += n % 10;
            n /= 10;
        }
        n = tong;

    }
    printf("%lld\n",n);
    return 0;
}
