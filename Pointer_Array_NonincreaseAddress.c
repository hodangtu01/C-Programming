#include<stdio.h>
#include<string.h>

int arr[] = {1,2,3,4,5,6,7,8,9,10};

void inmang(int *mang, int sophantu){
    for(int i = 0; i < sophantu; i++){
        printf("Mang[%d] = %d \n", i, *(mang+i));
        printf("Address Pointer = %x\n", mang);
    }
}

int main(){
    inmang(arr, 10);
    
    return 0;
}