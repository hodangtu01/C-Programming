#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    unsigned int n = 0, sum = 0, i = 1, j =1, r = 0, ktao = 0, kc = 0;
    scanf("%d", &n);
    for(i =  1; i <= n; i += 1){
        for(j = 1; j <= n; j += 1){
            if(j != n){
                printf("%d ",sum+j);
            }
            else{
                printf("%d", sum + j);
            }
            
        }
        sum = sum + j -1;
        printf("\n");
    }
    printf("\n");

for(i =  1; i <= n; i += 1){
        for(j = 1; j <= n; j += 1){
            printf("%d ", r + j);
            }
        r ++;
        printf("\n");
        }
    printf("\n");

    for(i = 1; i <= n; i += 1){
        for(j = 1; j <= n; j += 1){
            if(j < n - i + 1){
                printf("~");
            }
            else{
                printf("%d",i);
            }
        }
        printf("\n");
    }
    printf("\n");

    for(i = 1; i <= n; i += 1){
        ktao = i;
        for(j = 1; j <= i; j += 1){
            printf("%d ", ktao);
            ktao = ktao + n - j;
        }
        printf("\n");
    }
    printf("\n");

    return 0;
}