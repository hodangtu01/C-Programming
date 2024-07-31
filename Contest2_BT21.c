#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    unsigned int  n = 0;
    scanf("%d", &n);
    for(int i = 1; i <= n; i += 1){
        for(int j = 1; j <= n; j += 1){
            printf("*");
        }
        printf("\n");
    }
    printf("\n");
    for(int i = 1; i <= n; i += 1){
        for(int j = 1; j <= n; j += 1){
            if(i == 1 || i == n || j == 1 || j == n){
                printf("*");
            }
            else{
                printf(" ");    
            }
        }
        printf("\n");
    }
    printf("\n");
    for(int i = 1; i <= n; i += 1){
        for(int j = 1; j <= n; j += 1){
            if(i == 1 || i == n || j == 1 || j == n){
                printf("*");
            }
            else{
                printf("#");    
            }
        }
        printf("\n");
    }
    printf("\n");
    for(int i = 1; i <= n; i += 1){
        for(int j = 1; j <= n; j += 1){
            if(i == 1 || i == n || j == 1 || j == n){
                printf("%d ",i);
            }
            else{
                printf("  ");    
            }
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}