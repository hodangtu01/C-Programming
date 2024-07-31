#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    unsigned int a = 0, b = 0, n = 0;
    scanf("%d %d %d", &a, &b, &n);
    for(int i = 0; i <= n /a; i += 1){
        int r = n - a*i;
        if(r % b == 0){
            printf("YES\n");
            return 0;
        } 
    }
    printf("NO\n");
    return 0;
}