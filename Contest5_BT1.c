#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>


int main(){
    int n = 0, count_even = 0, count_odd = 0;
    int sum_even = 0, sum_odd = 0;
    scanf("%d", &n);
    int A[n];
    for(int i = 0; i < n; i += 1){
        scanf("%d", &A[i]);
    }
    for(int i = 0; i < n; i++){
        if(A[i] % 2 == 0){
            count_even ++;
            //storage_even = A[i];
            sum_even += A[i];
        }
        else{
            count_odd ++;
            //storage_odd = A[i];
            sum_odd += A[i];
        }
    }
    printf("%d\n", count_even);
    printf("%d\n", count_odd);
    printf("%d\n", sum_even);
    printf("%d\n", sum_odd);
    return 0;
}