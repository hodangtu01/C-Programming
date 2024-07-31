#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int songuyenTo(int num){
    for(int i = 2; i <= sqrt(num); i ++){
        if(num % i == 0){
            return 0;
        }
    }
    return num > 1;
}

int main(){
     int num = 0, count = 0, sum = 0;
     scanf("%d", &num);
     int A[num];
     for(int i = 0; i < num; i++){
        scanf("%d", &A[i]);
     }
     for(int i = 0; i < num; i ++){
        if(songuyenTo(A[i])){
            count ++;
            sum += A[i];
        }
     }
     printf("%.3lf\n", (double) sum/ count);
    return 0;
}

