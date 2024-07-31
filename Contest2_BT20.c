#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

// So luong so han so nguyen to lon nhat khi so nguyen to nho nhat

int main()
{
    unsigned int n = 0;
    scanf("%d", &n);
    if(n == 1){
        printf("-1");
    }
    else{
        printf("%d\n", n/2);
        if(n % 2 == 0){
            for(int i = 1; i <= n/2; i += 1){
                printf("2 ");
            }
        }
        else{
            for(int i = 1; i <= n/2 -1; i += 1){
                printf("2 ");
            }
            printf("3");
        }
    }
    return 0;
}