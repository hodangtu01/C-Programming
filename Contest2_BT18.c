#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    unsigned long long n = 0, num = 0, count = 0;
    scanf("%lld", &n);
    while(n != 0){
        num = n % 10 ;
        if(num == 2 || num == 3 || num == 5 || num == 7){
            ++count ;
        }
        n = n / 10;
    }
    printf("%lld",count);
    return 0;
}