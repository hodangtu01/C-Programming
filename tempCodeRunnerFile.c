#include<stdio.h>
#include<string.h>

int nhapmang(int *mang, int *sophantu){
    printf("Nhap so phan tu: ");
    scanf("%d", sophantu);
    for(int i = 0; i < *sophantu; i++){
        printf("Mang[%d] = ", i);
        scanf("%d",(mang+i));
    }
}

int inmang(int *mang, int *sophantu){
    for(int i = 0; i < *sophantu; i++){
        printf("Mang[%d]: %d ", i, *(mang+i));
    }
}

int main(){
    int index = 0;
    int arr[index];
    nhapmang(arr, &index);
    inmang(arr, &index);
    
    return 0;
}
