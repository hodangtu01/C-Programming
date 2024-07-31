#include<stdio.h>
#include<string.h>

void displayArs2D(int length_1, int length_2, int a[length_1][length_2])
{
    //code
    printf("Nhung phan tu cua mang: \n");

    for(int i = 0; i < length_1; i += 1){
        for(int j = 0; j < length_2; j += 1){
            printf("%6d ", a[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

void inputArs2D(int length_1, int length_2, int a[length_1][length_2]){
    printf("Nhap phan tu cua mang: \n");
    for(int i = 0; i < length_1; i += 1){
        for(int j = 0; j < length_2; j += 1){
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
        printf("\n");
    }
}

void findAr2D(int length_1, int length_2, int a[length_1][length_2]){
    int x;
    char flag = 0;  // is not existed
    printf("Nhap vao gia tri can tim: \n");
    scanf("%d", &x);
    
    for(int i = 0; i < length_1 && flag == 0; i += 1){
        for(int j = 0; i < length_2; j += 1){
            if(a[i][j] == x){
                flag = 1;
                break;
            }
            // break;
        }
    }
    if(flag == 1){
        printf("%d is existed \n", x);
    }
    else{
        printf("%d is not existed \n", x);
    }
}

int main(int argc, char const *argv[])
{
    int a[3][4], x;
    inputArs2D(3, 4, a);
    displayArs2D(3, 4, a);
    findAr2D(3, 4, a);
    return 0;
}