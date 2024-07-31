#include<stdio.h>

int main(int argc, char const *argv[])
{
    int a[5], x;
    printf("Nhap phan tu mang: \n");
    for(int i = 0; i < 5; i += 1){
        printf("a[%d]: ", i);
        scanf("%d", &a[i]);
    }

    printf("\n");

    for(int i = 0; i < 5; i += 1){
        printf("%d ", a[i]);
    }

    printf("\n");

    printf("Nhap vao gia tri can tim: \n");
    scanf("%d", &x);
    
    for(int i = 0; i < 5; i += 1){
        if(a[i] == x){
            printf("%d co ton tai");
            break;
        }
    }

    return 0;
}